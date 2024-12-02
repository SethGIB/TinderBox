/********************************************************************************
** Form generated from reading UI file 'WizardPageEnvOptions.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARDPAGEENVOPTIONS_H
#define UI_WIZARDPAGEENVOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WizardPageEnvOptions
{
public:
    QVBoxLayout *masterLayout;
    QLabel *envOptionsLabel;
    QFrame *line;
    QVBoxLayout *vc2015Layout;
    QHBoxLayout *vc2015HeaderLayout;
    QLabel *vc2015HeaderIcon;
    QLabel *vc2015HeaderLabel;
    QFormLayout *vc2015FieldsLayout;
    QLabel *vc2015RendererLabel;
    QHBoxLayout *vc2015RendererLayout;
    QCheckBox *vc2015OpenGlCheckBox;
    QCheckBox *vc2015AngleCheckBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *vc2015WinRtLayout;
    QHBoxLayout *vc2015WinRtHeaderLayout;
    QLabel *vc2015WinRtHeaderIcon;
    QLabel *vc2015WinRtHeaderLabel;
    QFormLayout *vc2015WinRtFieldsLayout;
    QLabel *vc2015WinRtPlatformLabel;
    QHBoxLayout *vc2015WinRtPlatformLayout;
    QCheckBox *vc2015WinRtWin32CheckBox;
    QCheckBox *vc2015WinRtX64CheckBox;
    QCheckBox *vc2015WinRtArmCheckBox;

    void setupUi(QWizardPage *WizardPageEnvOptions)
    {
        if (WizardPageEnvOptions->objectName().isEmpty())
            WizardPageEnvOptions->setObjectName("WizardPageEnvOptions");
        WizardPageEnvOptions->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WizardPageEnvOptions->sizePolicy().hasHeightForWidth());
        WizardPageEnvOptions->setSizePolicy(sizePolicy);
        masterLayout = new QVBoxLayout(WizardPageEnvOptions);
        masterLayout->setSpacing(0);
        masterLayout->setObjectName("masterLayout");
        masterLayout->setSizeConstraint(QLayout::SetMinimumSize);
        masterLayout->setContentsMargins(0, 0, 0, 0);
        envOptionsLabel = new QLabel(WizardPageEnvOptions);
        envOptionsLabel->setObjectName("envOptionsLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("YanoneKaffeesatz-Regular")});
        font.setPointSize(18);
        font.setBold(true);
        envOptionsLabel->setFont(font);

        masterLayout->addWidget(envOptionsLabel);

        line = new QFrame(WizardPageEnvOptions);
        line->setObjectName("line");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        masterLayout->addWidget(line);

        vc2015Layout = new QVBoxLayout();
        vc2015Layout->setSpacing(0);
        vc2015Layout->setObjectName("vc2015Layout");
        vc2015Layout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015Layout->setContentsMargins(0, 0, 0, 0);
        vc2015HeaderLayout = new QHBoxLayout();
        vc2015HeaderLayout->setSpacing(0);
        vc2015HeaderLayout->setObjectName("vc2015HeaderLayout");
        vc2015HeaderLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015HeaderLayout->setContentsMargins(2, 2, -1, -1);
        vc2015HeaderIcon = new QLabel(WizardPageEnvOptions);
        vc2015HeaderIcon->setObjectName("vc2015HeaderIcon");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(vc2015HeaderIcon->sizePolicy().hasHeightForWidth());
        vc2015HeaderIcon->setSizePolicy(sizePolicy2);
        vc2015HeaderIcon->setMinimumSize(QSize(16, 16));
        vc2015HeaderIcon->setMaximumSize(QSize(16, 16));
        vc2015HeaderIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/vc2015.png")));
        vc2015HeaderIcon->setScaledContents(true);
        vc2015HeaderIcon->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        vc2015HeaderIcon->setMargin(0);

        vc2015HeaderLayout->addWidget(vc2015HeaderIcon);

        vc2015HeaderLabel = new QLabel(WizardPageEnvOptions);
        vc2015HeaderLabel->setObjectName("vc2015HeaderLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(vc2015HeaderLabel->sizePolicy().hasHeightForWidth());
        vc2015HeaderLabel->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica")});
        font1.setPointSize(16);
        font1.setBold(true);
        vc2015HeaderLabel->setFont(font1);
        vc2015HeaderLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        vc2015HeaderLabel->setMargin(6);

        vc2015HeaderLayout->addWidget(vc2015HeaderLabel);


        vc2015Layout->addLayout(vc2015HeaderLayout);

        vc2015FieldsLayout = new QFormLayout();
        vc2015FieldsLayout->setObjectName("vc2015FieldsLayout");
        vc2015FieldsLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015FieldsLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        vc2015FieldsLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        vc2015FieldsLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vc2015FieldsLayout->setHorizontalSpacing(12);
        vc2015FieldsLayout->setVerticalSpacing(10);
        vc2015FieldsLayout->setContentsMargins(12, 4, -1, -1);
        vc2015RendererLabel = new QLabel(WizardPageEnvOptions);
        vc2015RendererLabel->setObjectName("vc2015RendererLabel");
        sizePolicy.setHeightForWidth(vc2015RendererLabel->sizePolicy().hasHeightForWidth());
        vc2015RendererLabel->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica")});
        font2.setPointSize(14);
        font2.setBold(true);
        vc2015RendererLabel->setFont(font2);
        vc2015RendererLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vc2015FieldsLayout->setWidget(0, QFormLayout::LabelRole, vc2015RendererLabel);

        vc2015RendererLayout = new QHBoxLayout();
        vc2015RendererLayout->setSpacing(8);
        vc2015RendererLayout->setObjectName("vc2015RendererLayout");
        vc2015RendererLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015OpenGlCheckBox = new QCheckBox(WizardPageEnvOptions);
        vc2015OpenGlCheckBox->setObjectName("vc2015OpenGlCheckBox");
        sizePolicy.setHeightForWidth(vc2015OpenGlCheckBox->sizePolicy().hasHeightForWidth());
        vc2015OpenGlCheckBox->setSizePolicy(sizePolicy);
        vc2015OpenGlCheckBox->setMinimumSize(QSize(0, 0));
        vc2015OpenGlCheckBox->setChecked(true);

        vc2015RendererLayout->addWidget(vc2015OpenGlCheckBox);

        vc2015AngleCheckBox = new QCheckBox(WizardPageEnvOptions);
        vc2015AngleCheckBox->setObjectName("vc2015AngleCheckBox");
        sizePolicy.setHeightForWidth(vc2015AngleCheckBox->sizePolicy().hasHeightForWidth());
        vc2015AngleCheckBox->setSizePolicy(sizePolicy);

        vc2015RendererLayout->addWidget(vc2015AngleCheckBox);


        vc2015FieldsLayout->setLayout(0, QFormLayout::FieldRole, vc2015RendererLayout);


        vc2015Layout->addLayout(vc2015FieldsLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        vc2015Layout->addItem(verticalSpacer);


        masterLayout->addLayout(vc2015Layout);

        vc2015WinRtLayout = new QVBoxLayout();
        vc2015WinRtLayout->setSpacing(0);
        vc2015WinRtLayout->setObjectName("vc2015WinRtLayout");
        vc2015WinRtLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015WinRtLayout->setContentsMargins(0, 0, 0, 0);
        vc2015WinRtHeaderLayout = new QHBoxLayout();
        vc2015WinRtHeaderLayout->setSpacing(0);
        vc2015WinRtHeaderLayout->setObjectName("vc2015WinRtHeaderLayout");
        vc2015WinRtHeaderLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015WinRtHeaderLayout->setContentsMargins(2, 2, -1, -1);
        vc2015WinRtHeaderIcon = new QLabel(WizardPageEnvOptions);
        vc2015WinRtHeaderIcon->setObjectName("vc2015WinRtHeaderIcon");
        sizePolicy2.setHeightForWidth(vc2015WinRtHeaderIcon->sizePolicy().hasHeightForWidth());
        vc2015WinRtHeaderIcon->setSizePolicy(sizePolicy2);
        vc2015WinRtHeaderIcon->setMinimumSize(QSize(16, 16));
        vc2015WinRtHeaderIcon->setMaximumSize(QSize(16, 16));
        vc2015WinRtHeaderIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/vc_winrt.png")));
        vc2015WinRtHeaderIcon->setScaledContents(true);
        vc2015WinRtHeaderIcon->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        vc2015WinRtHeaderIcon->setMargin(0);

        vc2015WinRtHeaderLayout->addWidget(vc2015WinRtHeaderIcon);

        vc2015WinRtHeaderLabel = new QLabel(WizardPageEnvOptions);
        vc2015WinRtHeaderLabel->setObjectName("vc2015WinRtHeaderLabel");
        sizePolicy3.setHeightForWidth(vc2015WinRtHeaderLabel->sizePolicy().hasHeightForWidth());
        vc2015WinRtHeaderLabel->setSizePolicy(sizePolicy3);
        vc2015WinRtHeaderLabel->setFont(font1);
        vc2015WinRtHeaderLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        vc2015WinRtHeaderLabel->setMargin(6);

        vc2015WinRtHeaderLayout->addWidget(vc2015WinRtHeaderLabel);


        vc2015WinRtLayout->addLayout(vc2015WinRtHeaderLayout);

        vc2015WinRtFieldsLayout = new QFormLayout();
        vc2015WinRtFieldsLayout->setObjectName("vc2015WinRtFieldsLayout");
        vc2015WinRtFieldsLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015WinRtFieldsLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        vc2015WinRtFieldsLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        vc2015WinRtFieldsLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vc2015WinRtFieldsLayout->setHorizontalSpacing(12);
        vc2015WinRtFieldsLayout->setVerticalSpacing(10);
        vc2015WinRtFieldsLayout->setContentsMargins(12, 4, -1, -1);
        vc2015WinRtPlatformLabel = new QLabel(WizardPageEnvOptions);
        vc2015WinRtPlatformLabel->setObjectName("vc2015WinRtPlatformLabel");
        sizePolicy.setHeightForWidth(vc2015WinRtPlatformLabel->sizePolicy().hasHeightForWidth());
        vc2015WinRtPlatformLabel->setSizePolicy(sizePolicy);
        vc2015WinRtPlatformLabel->setFont(font2);
        vc2015WinRtPlatformLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vc2015WinRtFieldsLayout->setWidget(0, QFormLayout::LabelRole, vc2015WinRtPlatformLabel);

        vc2015WinRtPlatformLayout = new QHBoxLayout();
        vc2015WinRtPlatformLayout->setSpacing(12);
        vc2015WinRtPlatformLayout->setObjectName("vc2015WinRtPlatformLayout");
        vc2015WinRtPlatformLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vc2015WinRtWin32CheckBox = new QCheckBox(WizardPageEnvOptions);
        vc2015WinRtWin32CheckBox->setObjectName("vc2015WinRtWin32CheckBox");
        vc2015WinRtWin32CheckBox->setChecked(true);

        vc2015WinRtPlatformLayout->addWidget(vc2015WinRtWin32CheckBox);

        vc2015WinRtX64CheckBox = new QCheckBox(WizardPageEnvOptions);
        vc2015WinRtX64CheckBox->setObjectName("vc2015WinRtX64CheckBox");
        vc2015WinRtX64CheckBox->setChecked(true);

        vc2015WinRtPlatformLayout->addWidget(vc2015WinRtX64CheckBox);

        vc2015WinRtArmCheckBox = new QCheckBox(WizardPageEnvOptions);
        vc2015WinRtArmCheckBox->setObjectName("vc2015WinRtArmCheckBox");

        vc2015WinRtPlatformLayout->addWidget(vc2015WinRtArmCheckBox);


        vc2015WinRtFieldsLayout->setLayout(0, QFormLayout::FieldRole, vc2015WinRtPlatformLayout);


        vc2015WinRtLayout->addLayout(vc2015WinRtFieldsLayout);


        masterLayout->addLayout(vc2015WinRtLayout);


        retranslateUi(WizardPageEnvOptions);

        QMetaObject::connectSlotsByName(WizardPageEnvOptions);
    } // setupUi

    void retranslateUi(QWizardPage *WizardPageEnvOptions)
    {
        WizardPageEnvOptions->setWindowTitle(QCoreApplication::translate("WizardPageEnvOptions", "WizardPage", nullptr));
        envOptionsLabel->setText(QCoreApplication::translate("WizardPageEnvOptions", "Environment Options", nullptr));
        vc2015HeaderIcon->setText(QString());
        vc2015HeaderLabel->setText(QCoreApplication::translate("WizardPageEnvOptions", "Visual C++ 2019", nullptr));
        vc2015RendererLabel->setText(QCoreApplication::translate("WizardPageEnvOptions", "Renderer:", nullptr));
        vc2015OpenGlCheckBox->setText(QCoreApplication::translate("WizardPageEnvOptions", "OpenGL", nullptr));
        vc2015AngleCheckBox->setText(QCoreApplication::translate("WizardPageEnvOptions", "ANGLE", nullptr));
        vc2015WinRtHeaderIcon->setText(QString());
        vc2015WinRtHeaderLabel->setText(QCoreApplication::translate("WizardPageEnvOptions", "WinRT (Visual C++ 2015)", nullptr));
        vc2015WinRtPlatformLabel->setText(QCoreApplication::translate("WizardPageEnvOptions", "Platform:", nullptr));
        vc2015WinRtWin32CheckBox->setText(QCoreApplication::translate("WizardPageEnvOptions", "Win32", nullptr));
        vc2015WinRtX64CheckBox->setText(QCoreApplication::translate("WizardPageEnvOptions", "x64", nullptr));
        vc2015WinRtArmCheckBox->setText(QCoreApplication::translate("WizardPageEnvOptions", "ARM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WizardPageEnvOptions: public Ui_WizardPageEnvOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDPAGEENVOPTIONS_H
