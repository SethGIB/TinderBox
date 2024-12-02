/********************************************************************************
** Form generated from reading UI file 'WizardPageMain.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARDPAGEMAIN_H
#define UI_WIZARDPAGEMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WizardPageMain
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *templateLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *templateComboBox;
    QPushButton *showErrorsButton;
    QLabel *projectNameLabel;
    QLineEdit *projectNameLineEdit;
    QLabel *locationLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *locationLineEdit;
    QToolButton *locationButton;
    QLabel *cinderVersionLabel;
    QComboBox *cinderVersionComboBox;
    QLabel *cinderVersionPathLabel;
    QLabel *optionsLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QListWidget *compilerList;
    QLabel *sourceControlLabel;
    QCheckBox *sourceControlCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWizardPage *WizardPageMain)
    {
        if (WizardPageMain->objectName().isEmpty())
            WizardPageMain->setObjectName("WizardPageMain");
        WizardPageMain->resize(536, 392);
        WizardPageMain->setStyleSheet(QString::fromUtf8("QWizardPage#WizardPageMain {\n"
"background-color: red;\n"
"};"));
        verticalLayout_2 = new QVBoxLayout(WizardPageMain);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::FieldsStayAtSizeHint);
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop|Qt::AlignmentFlag::AlignTrailing);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        formLayout->setVerticalSpacing(12);
        templateLabel = new QLabel(WizardPageMain);
        templateLabel->setObjectName("templateLabel");
        QFont font;
        font.setBold(true);
        templateLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, templateLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        templateComboBox = new QComboBox(WizardPageMain);
        templateComboBox->setObjectName("templateComboBox");
        templateComboBox->setMinimumSize(QSize(150, 0));
        templateComboBox->setFrame(true);

        horizontalLayout->addWidget(templateComboBox);

        showErrorsButton = new QPushButton(WizardPageMain);
        showErrorsButton->setObjectName("showErrorsButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(showErrorsButton->sizePolicy().hasHeightForWidth());
        showErrorsButton->setSizePolicy(sizePolicy);
        showErrorsButton->setMinimumSize(QSize(120, 40));
        showErrorsButton->setBaseSize(QSize(0, 0));
        showErrorsButton->setStyleSheet(QString::fromUtf8("QPushButton { margin: 0 px;}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/warning.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        showErrorsButton->setIcon(icon);
        showErrorsButton->setIconSize(QSize(24, 24));
        showErrorsButton->setFlat(false);

        horizontalLayout->addWidget(showErrorsButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        projectNameLabel = new QLabel(WizardPageMain);
        projectNameLabel->setObjectName("projectNameLabel");
        projectNameLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, projectNameLabel);

        projectNameLineEdit = new QLineEdit(WizardPageMain);
        projectNameLineEdit->setObjectName("projectNameLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(projectNameLineEdit->sizePolicy().hasHeightForWidth());
        projectNameLineEdit->setSizePolicy(sizePolicy1);
        projectNameLineEdit->setMinimumSize(QSize(350, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, projectNameLineEdit);

        locationLabel = new QLabel(WizardPageMain);
        locationLabel->setObjectName("locationLabel");
        locationLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, locationLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        locationLineEdit = new QLineEdit(WizardPageMain);
        locationLineEdit->setObjectName("locationLineEdit");
        locationLineEdit->setMinimumSize(QSize(317, 0));
        locationLineEdit->setCursorPosition(23);

        horizontalLayout_2->addWidget(locationLineEdit);

        locationButton = new QToolButton(WizardPageMain);
        locationButton->setObjectName("locationButton");
        locationButton->setMinimumSize(QSize(27, 23));
        locationButton->setMaximumSize(QSize(27, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/folder.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        locationButton->setIcon(icon1);

        horizontalLayout_2->addWidget(locationButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        cinderVersionLabel = new QLabel(WizardPageMain);
        cinderVersionLabel->setObjectName("cinderVersionLabel");
        cinderVersionLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, cinderVersionLabel);

        cinderVersionComboBox = new QComboBox(WizardPageMain);
        cinderVersionComboBox->setObjectName("cinderVersionComboBox");
        cinderVersionComboBox->setMinimumSize(QSize(150, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, cinderVersionComboBox);

        cinderVersionPathLabel = new QLabel(WizardPageMain);
        cinderVersionPathLabel->setObjectName("cinderVersionPathLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cinderVersionPathLabel->sizePolicy().hasHeightForWidth());
        cinderVersionPathLabel->setSizePolicy(sizePolicy2);
        cinderVersionPathLabel->setWordWrap(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, cinderVersionPathLabel);

        optionsLabel = new QLabel(WizardPageMain);
        optionsLabel->setObjectName("optionsLabel");
        optionsLabel->setFont(font);
        optionsLabel->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        formLayout->setWidget(5, QFormLayout::LabelRole, optionsLabel);

        widget = new QWidget(WizardPageMain);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        widget->setMinimumSize(QSize(380, 110));
        widget->setMaximumSize(QSize(400, 130));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        compilerList = new QListWidget(widget);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/xcode.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        icon2.addFile(QString::fromUtf8(":/icons/xcode_selected.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(compilerList);
        __qlistwidgetitem->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/xcode_ios.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon3.addFile(QString::fromUtf8(":/icons/xcode_ios_selected.png"), QSize(), QIcon::Mode::Selected, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(compilerList);
        __qlistwidgetitem1->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/vc2015.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        icon4.addFile(QString::fromUtf8(":/icons/vc2015_selected.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(compilerList);
        __qlistwidgetitem2->setIcon(icon4);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(compilerList);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/vc_winrt.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        icon5.addFile(QString::fromUtf8(":/icons/vc_winrt_selected.png"), QSize(), QIcon::Mode::Selected, QIcon::State::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(compilerList);
        __qlistwidgetitem4->setIcon(icon5);
        compilerList->setObjectName("compilerList");
        sizePolicy3.setHeightForWidth(compilerList->sizePolicy().hasHeightForWidth());
        compilerList->setSizePolicy(sizePolicy3);
        compilerList->setLineWidth(2);
        compilerList->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        compilerList->setAutoScroll(false);
        compilerList->setDragDropOverwriteMode(true);
        compilerList->setDragDropMode(QAbstractItemView::DragDropMode::DragDrop);
        compilerList->setSelectionMode(QAbstractItemView::SelectionMode::MultiSelection);
        compilerList->setIconSize(QSize(48, 48));
        compilerList->setMovement(QListView::Movement::Snap);
        compilerList->setResizeMode(QListView::ResizeMode::Adjust);
        compilerList->setLayoutMode(QListView::LayoutMode::SinglePass);
        compilerList->setSpacing(6);
        compilerList->setViewMode(QListView::ViewMode::IconMode);
        compilerList->setUniformItemSizes(false);
        compilerList->setWordWrap(false);
        compilerList->setSelectionRectVisible(false);

        verticalLayout_4->addWidget(compilerList);


        formLayout->setWidget(5, QFormLayout::FieldRole, widget);

        sourceControlLabel = new QLabel(WizardPageMain);
        sourceControlLabel->setObjectName("sourceControlLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, sourceControlLabel);

        sourceControlCheckBox = new QCheckBox(WizardPageMain);
        sourceControlCheckBox->setObjectName("sourceControlCheckBox");
        sourceControlCheckBox->setChecked(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, sourceControlCheckBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(WizardPageMain);

        QMetaObject::connectSlotsByName(WizardPageMain);
    } // setupUi

    void retranslateUi(QWizardPage *WizardPageMain)
    {
        WizardPageMain->setWindowTitle(QCoreApplication::translate("WizardPageMain", "WizardPage", nullptr));
        templateLabel->setText(QCoreApplication::translate("WizardPageMain", "Template:", nullptr));
        showErrorsButton->setText(QCoreApplication::translate("WizardPageMain", "Warnings", nullptr));
        projectNameLabel->setText(QCoreApplication::translate("WizardPageMain", "Project Name:", nullptr));
        projectNameLineEdit->setText(QString());
        locationLabel->setText(QCoreApplication::translate("WizardPageMain", "Location:", nullptr));
        locationLineEdit->setText(QCoreApplication::translate("WizardPageMain", "/Users/cinder/code/temp", nullptr));
        locationButton->setText(QCoreApplication::translate("WizardPageMain", "...", nullptr));
        cinderVersionLabel->setText(QCoreApplication::translate("WizardPageMain", "Cinder Version:", nullptr));
        cinderVersionPathLabel->setText(QCoreApplication::translate("WizardPageMain", "Cinder Version Path", nullptr));
        optionsLabel->setText(QCoreApplication::translate("WizardPageMain", "Environment:", nullptr));

        const bool __sortingEnabled = compilerList->isSortingEnabled();
        compilerList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = compilerList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("WizardPageMain", "XCode", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = compilerList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("WizardPageMain", "XCode iOS", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = compilerList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("WizardPageMain", "VC 2019", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = compilerList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("WizardPageMain", "VC 2022", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = compilerList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("WizardPageMain", "WinRT\n"
"(VC 2015)", nullptr));
        compilerList->setSortingEnabled(__sortingEnabled);

        sourceControlLabel->setText(QString());
        sourceControlCheckBox->setText(QCoreApplication::translate("WizardPageMain", "Create local git repository", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WizardPageMain: public Ui_WizardPageMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDPAGEMAIN_H
