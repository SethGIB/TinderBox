#pragma once

#include "TinderBox.h"

#include <QDir>
#include <QFile>
#include <QSharedPointer>
#include <QDomDocument>
#include <iostream>

class VcProjExc : public TinderBoxExc {
  public:
	VcProjExc( const QString &excMsg ) : TinderBoxExc( excMsg ) {}
};

typedef QSharedPointer<class VcProj>		VcProjRef;
class VcProj
{
  public:
	virtual ~VcProj() {}

    void		setupNew( const QString &name, const std::vector<QString> &architectures, bool slnDeploy, bool useRcFile );

	// high-level manipulation functions
	void		addSourceFile( const QString &fileSystemPath, const QString &virtualPath );
	void		addHeaderFile( const QString &fileSystemPath, const QString &virtualPath, bool isResourcesHeader = false );
	void		addStaticLibrary( const QString &config, const QString &path );
	// There is no action to take for a dynamic library on a VC project
	//void		addDynamicLibrary( const QString &config, const QString &path, bool shouldCopy );
	void		addBuildCopy( const QString &config, const QString &path );
	void		appendPostBuildCommand( const QString &config, const QString &command );
	void		addHeaderPath( const QString &config, const QString &path );
	void		addLibraryPath( const QString &config, const QString &path );
	void		addResourceFile( const QString &name, const QString &fileSystemPath, const QString &type, int id = -1 );
	void		addPreprocessorDefine( const QString &config, const QString &value );
	void		setTargetExtension( const QString &config, const QString &platform, const QString &extension );

	QString		getSlnString() const;

	QString		getRcString() const;
	void		write( const QString &directoryPath, const QString &namePrefix ) const;

	class Filters {
	  public:
		Filters( QSharedPointer<pugi::xml_document> dom );
		Filters();

		pugi::xml_node	addFilter( const std::string &filterName, const std::string &extensions );
		void			addSourceFile( const std::string &fileSystemPath, const std::string &virtualPath );
		void			addHeaderFile( const std::string &fileSystemPath, const std::string &virtualPath );
		void			addResourceFile( const std::string &fileSystemPath, const std::string &virtualPath );

		const QSharedPointer<pugi::xml_document>	getDom() const { return mDom; }
	  protected:
		pugi::xml_node	findFiltersItemGroup();
		pugi::xml_node	findSourcesFilter();
		pugi::xml_node	findResourcesFilter();
		pugi::xml_node	findHeadersFilter();
		pugi::xml_node	findRcResourcesFilter();
		pugi::xml_node	findFilter( const std::string &filterName ) const;
		pugi::xml_node	createAndFindFiltersPath( std::string filterPath );

		pugi::xml_node	findSourcesItemGroup();
		pugi::xml_node	findHeadersItemGroup();

		QSharedPointer<pugi::xml_document>	mDom;
	};

	class Resource {
	  public:
		Resource( const QString &name, const QString &fileSystemPath, const QString &type, int id )
			: mName( name ), mFileSystemPath( fileSystemPath ), mType( type ), mId( id )
		{}

		QString		getFilePath() const { return mFileSystemPath; }
		QString		getFileDir() const { return QFileInfo( mFileSystemPath ).path(); }
		QString		getFileName() const { return QFileInfo( mFileSystemPath ).fileName(); }

		QString		getType() const { return mType; }
		int			getId() const { return mId; }

		QString			mName;
		QString			mFileSystemPath;
		QString			mType;
		int				mId;
	};

	class ProjectConfiguration {
	  public:
		ProjectConfiguration( const QString &config, const QString &platform )
			: mConfig( config ), mPlatform( platform )
		{}

		const QString&	getConfig() const { return mConfig; }
		const QString&	getPlatform() const { return mPlatform; }
		QString			asString() const { return mConfig + "|" + mPlatform; }

	  private:
		QString			mConfig, mPlatform;
	};

  protected:
	VcProj( const QString &vcprojString, const QString &vcProjFiltersString );

	QString		getProjGuid() const { return mProjGuid; }
	QString		getProjName() const { return mProjName; }

	void		parseProjectConfigurations();

	pugi::xml_node	getSourceItemGroup();
	pugi::xml_node	getResourceItemGroup();
	pugi::xml_node	getHeaderItemGroup();
	pugi::xml_node	findItemDefinitionGroup( const QString &config, const QString &platform );
	void			appendToDelimitedList( pugi::xml_node *node, const QString &value, const QString &delimeters );
	bool			nodeConditionsMatch( const pugi::xml_node &node, const QString &config, const QString &platform );
	std::string		getConditionString( const QString &config, const QString &platform );

	virtual QString	getSlnHeaderString() const = 0;

	QSharedPointer<pugi::xml_document>  mProjDom;
	QSharedPointer<Filters>				mFilters;
	QString                             mProjGuid, mProjName;
	pugi::xml_node						mProjSourceItemGroup, mProjHeaderItemGroup;
	QString								mResourcesHeaderPath;
	QList<Resource>						mRcResources;
	QList<ProjectConfiguration>			mProjectConfigurations; // $(Configuration)|$(Platform)
	std::vector<QString>				mPlatforms;
	bool								mSlnDeploy; // ActiveCfg | Build | (Deploy?) in .sln file
	bool								mUseRcFile; // Use Resources.rc or include resources in Assets
};
