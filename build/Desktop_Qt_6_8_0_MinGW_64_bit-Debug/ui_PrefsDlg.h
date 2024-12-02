/********************************************************************************
** Form generated from reading UI file 'PrefsDlg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFSDLG_H
#define UI_PREFSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Prefs
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *cinderVersions;
    QHBoxLayout *horizontalLayout;
    QToolButton *addButton;
    QToolButton *removeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *Prefs)
    {
        if (Prefs->objectName().isEmpty())
            Prefs->setObjectName("Prefs");
        Prefs->setWindowModality(Qt::ApplicationModal);
        Prefs->resize(574, 337);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Prefs->sizePolicy().hasHeightForWidth());
        Prefs->setSizePolicy(sizePolicy);
        Prefs->setModal(true);
        verticalLayout_2 = new QVBoxLayout(Prefs);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Prefs);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setFlat(false);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(12, 12, 12, 12);
        cinderVersions = new QTreeWidget(groupBox);
        cinderVersions->setObjectName("cinderVersions");
        cinderVersions->setInputMethodHints(Qt::ImhNone);
        cinderVersions->setDragEnabled(false);
        cinderVersions->setDragDropMode(QAbstractItemView::NoDragDrop);
        cinderVersions->setAutoExpandDelay(-1);
        cinderVersions->setColumnCount(2);

        horizontalLayout_2->addWidget(cinderVersions);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        addButton = new QToolButton(Prefs);
        addButton->setObjectName("addButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/edit_add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        removeButton = new QToolButton(Prefs);
        removeButton->setObjectName("removeButton");
        removeButton->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/edit_remove.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        removeButton->setIcon(icon1);

        horizontalLayout->addWidget(removeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(Prefs);
        okButton->setObjectName("okButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Prefs);
        QObject::connect(okButton, &QPushButton::clicked, Prefs, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Prefs);
    } // setupUi

    void retranslateUi(QDialog *Prefs)
    {
        Prefs->setWindowTitle(QCoreApplication::translate("Prefs", "Preferences", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Prefs", "Cinder Versions", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = cinderVersions->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("Prefs", "Path", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Prefs", "Name", nullptr));
        addButton->setText(QString());
        removeButton->setText(QString());
        okButton->setText(QCoreApplication::translate("Prefs", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prefs: public Ui_Prefs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFSDLG_H
