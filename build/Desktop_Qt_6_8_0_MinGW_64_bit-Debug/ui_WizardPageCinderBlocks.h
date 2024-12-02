/********************************************************************************
** Form generated from reading UI file 'WizardPageCinderBlocks.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARDPAGECINDERBLOCKS_H
#define UI_WIZARDPAGECINDERBLOCKS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WizardPageCinderBlocks
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *listWarningsLayout;
    QListWidget *cinderBlockList;
    QPushButton *showErrorsButton;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameContents;
    QLabel *nameId;
    QLabel *installLabel;
    QComboBox *installTypeCombo;

    void setupUi(QWizardPage *WizardPageCinderBlocks)
    {
        if (WizardPageCinderBlocks->objectName().isEmpty())
            WizardPageCinderBlocks->setObjectName("WizardPageCinderBlocks");
        WizardPageCinderBlocks->resize(602, 396);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WizardPageCinderBlocks->sizePolicy().hasHeightForWidth());
        WizardPageCinderBlocks->setSizePolicy(sizePolicy);
        WizardPageCinderBlocks->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(WizardPageCinderBlocks);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        listWarningsLayout = new QVBoxLayout();
        listWarningsLayout->setObjectName("listWarningsLayout");
        cinderBlockList = new QListWidget(WizardPageCinderBlocks);
        cinderBlockList->setObjectName("cinderBlockList");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(cinderBlockList->sizePolicy().hasHeightForWidth());
        cinderBlockList->setSizePolicy(sizePolicy1);
        cinderBlockList->setMinimumSize(QSize(200, 200));
        cinderBlockList->setBaseSize(QSize(200, 100));
        cinderBlockList->setFrameShape(QFrame::NoFrame);
        cinderBlockList->setFrameShadow(QFrame::Plain);
        cinderBlockList->setLineWidth(0);
        cinderBlockList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        cinderBlockList->setAutoScrollMargin(16);

        listWarningsLayout->addWidget(cinderBlockList);

        showErrorsButton = new QPushButton(WizardPageCinderBlocks);
        showErrorsButton->setObjectName("showErrorsButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(showErrorsButton->sizePolicy().hasHeightForWidth());
        showErrorsButton->setSizePolicy(sizePolicy2);
        showErrorsButton->setMinimumSize(QSize(120, 40));
        showErrorsButton->setBaseSize(QSize(0, 0));
        showErrorsButton->setStyleSheet(QString::fromUtf8("QPushButton { margin: 0 px;}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/warning.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        showErrorsButton->setIcon(icon);
        showErrorsButton->setIconSize(QSize(24, 24));
        showErrorsButton->setFlat(false);

        listWarningsLayout->addWidget(showErrorsButton);

        listWarningsLayout->setStretch(0, 1);

        horizontalLayout->addLayout(listWarningsLayout);

        line = new QFrame(WizardPageCinderBlocks);
        line->setObjectName("line");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setHorizontalSpacing(20);
        formLayout->setContentsMargins(0, -1, 0, -1);
        nameLabel = new QLabel(WizardPageCinderBlocks);
        nameLabel->setObjectName("nameLabel");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy4);
        nameLabel->setMinimumSize(QSize(48, 48));
        nameLabel->setMaximumSize(QSize(48, 48));
        nameLabel->setBaseSize(QSize(48, 48));
        QFont font;
        font.setBold(true);
        nameLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 10, -1, -1);
        nameContents = new QLabel(WizardPageCinderBlocks);
        nameContents->setObjectName("nameContents");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(nameContents->sizePolicy().hasHeightForWidth());
        nameContents->setSizePolicy(sizePolicy5);
        nameContents->setMinimumSize(QSize(150, 0));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        nameContents->setFont(font1);
        nameContents->setFocusPolicy(Qt::ClickFocus);
        nameContents->setFrameShape(QFrame::NoFrame);
        nameContents->setLineWidth(0);
        nameContents->setTextFormat(Qt::AutoText);
        nameContents->setScaledContents(false);
        nameContents->setWordWrap(false);
        nameContents->setMargin(0);
        nameContents->setIndent(-1);

        verticalLayout_2->addWidget(nameContents);

        nameId = new QLabel(WizardPageCinderBlocks);
        nameId->setObjectName("nameId");
        sizePolicy5.setHeightForWidth(nameId->sizePolicy().hasHeightForWidth());
        nameId->setSizePolicy(sizePolicy5);
        nameId->setMinimumSize(QSize(50, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Lucida Grande")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        nameId->setFont(font2);
        nameId->setFocusPolicy(Qt::ClickFocus);
        nameId->setFrameShape(QFrame::NoFrame);
        nameId->setLineWidth(1);
        nameId->setTextFormat(Qt::AutoText);
        nameId->setScaledContents(false);
        nameId->setWordWrap(true);
        nameId->setMargin(0);

        verticalLayout_2->addWidget(nameId);


        formLayout->setLayout(1, QFormLayout::FieldRole, verticalLayout_2);

        installLabel = new QLabel(WizardPageCinderBlocks);
        installLabel->setObjectName("installLabel");
        sizePolicy4.setHeightForWidth(installLabel->sizePolicy().hasHeightForWidth());
        installLabel->setSizePolicy(sizePolicy4);
        installLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, installLabel);

        installTypeCombo = new QComboBox(WizardPageCinderBlocks);
        installTypeCombo->addItem(QString());
        installTypeCombo->addItem(QString());
        installTypeCombo->addItem(QString());
        installTypeCombo->addItem(QString());
        installTypeCombo->setObjectName("installTypeCombo");
        sizePolicy4.setHeightForWidth(installTypeCombo->sizePolicy().hasHeightForWidth());
        installTypeCombo->setSizePolicy(sizePolicy4);

        formLayout->setWidget(2, QFormLayout::FieldRole, installTypeCombo);


        horizontalLayout->addLayout(formLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        retranslateUi(WizardPageCinderBlocks);

        QMetaObject::connectSlotsByName(WizardPageCinderBlocks);
    } // setupUi

    void retranslateUi(QWizardPage *WizardPageCinderBlocks)
    {
        WizardPageCinderBlocks->setWindowTitle(QCoreApplication::translate("WizardPageCinderBlocks", "WizardPage", nullptr));
        showErrorsButton->setText(QCoreApplication::translate("WizardPageCinderBlocks", "Warnings", nullptr));
        nameLabel->setText(QCoreApplication::translate("WizardPageCinderBlocks", "Name:", nullptr));
        nameContents->setText(QCoreApplication::translate("WizardPageCinderBlocks", "Line 1", nullptr));
        nameId->setText(QCoreApplication::translate("WizardPageCinderBlocks", "Line 1", nullptr));
        installLabel->setText(QCoreApplication::translate("WizardPageCinderBlocks", "Install:", nullptr));
        installTypeCombo->setItemText(0, QCoreApplication::translate("WizardPageCinderBlocks", "None", nullptr));
        installTypeCombo->setItemText(1, QCoreApplication::translate("WizardPageCinderBlocks", "Copy", nullptr));
        installTypeCombo->setItemText(2, QCoreApplication::translate("WizardPageCinderBlocks", "Relative", nullptr));
        installTypeCombo->setItemText(3, QCoreApplication::translate("WizardPageCinderBlocks", "Git Submodule", nullptr));

    } // retranslateUi

};

namespace Ui {
    class WizardPageCinderBlocks: public Ui_WizardPageCinderBlocks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDPAGECINDERBLOCKS_H
