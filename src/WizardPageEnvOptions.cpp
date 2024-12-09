/*
 Copyright (c) 2015, The Cinder Project, All rights reserved.

 This code is intended for use with the Cinder C++ library: http://libcinder.org

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that
 the following conditions are met:

 * Redistributions of source code must retain the above copyright notice, this list of conditions and
    the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and
    the following disclaimer in the documentation and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
 WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
*/

#include "WizardPageEnvOptions.h"
#include "ui_WizardPageEnvOptions.h"
#include "WizardPageMain.h"

WizardPageEnvOptions::WizardPageEnvOptions( MainWizard *parent ) :
	QWizardPage( parent ), mParent( parent ),
    ui(new Ui::WizardPageEnvOptions)
{
    ui->setupUi(this);

    // VC 2022
    connect( ui->vc2022OpenGlCheckBox,SIGNAL(clicked(bool)),this,SLOT(updateNextButton(bool)) );
    connect( ui->vc2022AngleCheckBox,SIGNAL(clicked(bool)),this,SLOT(updateNextButton(bool)) );

#if ! defined( Q_OS_MAC )
	QFont font = ui->envOptionsLabel->font();
	font.setBold( true ); font.setPointSize( 12 );
	ui->envOptionsLabel->setFont( font );
	font.setPointSize( 10 );
    ui->vc2022HeaderLabel->setFont( font );
	font.setPointSize( 9 );
    ui->vc2022RendererLabel->setFont( font );
#endif
}

void WizardPageEnvOptions::initializePage()
{
    mVc2022Enabled = mParent->getWizardPageMain()->isVc2022Selected();
    recursiveEnable( ui->vc2022Layout, mVc2022Enabled );
}

void WizardPageEnvOptions::recursiveEnable( QLayout *layout, bool enable )
{
	int numChildren = layout->count();
	for( int c = 0; c < numChildren; ++c ) {
		QLayoutItem *item = layout->itemAt( c );
		if( item->layout() )
			recursiveEnable( item->layout(), enable );
		else if( item->widget() )
			item->widget()->setEnabled( enable );
	}
}

bool WizardPageEnvOptions::isVc2022DesktopGlSelected() const
{
    return ui->vc2022OpenGlCheckBox->isChecked();
}

void WizardPageEnvOptions::updateNextButton( bool /*ignored*/ )
{
    bool vc2022RendererChecked = isVc2022DesktopGlSelected();
    bool vc2022Good = ( ! mVc2022Enabled ) || ( vc2022RendererChecked );

    wizard()->button( QWizard::NextButton )->setEnabled( vc2022Good );
}

WizardPageEnvOptions::~WizardPageEnvOptions()
{
    delete ui;
}
