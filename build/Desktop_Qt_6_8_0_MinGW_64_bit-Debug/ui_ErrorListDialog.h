/********************************************************************************
** Form generated from reading UI file 'ErrorListDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORLISTDIALOG_H
#define UI_ERRORLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErrorListDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *errorList;
    QLabel *fileInfoLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *ErrorListDialog)
    {
        if (ErrorListDialog->objectName().isEmpty())
            ErrorListDialog->setObjectName("ErrorListDialog");
        ErrorListDialog->setWindowModality(Qt::WindowModal);
        ErrorListDialog->resize(568, 341);
        ErrorListDialog->setSizeGripEnabled(true);
        ErrorListDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(ErrorListDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        errorList = new QListWidget(ErrorListDialog);
        errorList->setObjectName("errorList");

        verticalLayout->addWidget(errorList);

        fileInfoLabel = new QLabel(ErrorListDialog);
        fileInfoLabel->setObjectName("fileInfoLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileInfoLabel->sizePolicy().hasHeightForWidth());
        fileInfoLabel->setSizePolicy(sizePolicy);
        fileInfoLabel->setScaledContents(true);
        fileInfoLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(fileInfoLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(ErrorListDialog);
        okButton->setObjectName("okButton");

        horizontalLayout->addWidget(okButton);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ErrorListDialog);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(ErrorListDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorListDialog)
    {
        ErrorListDialog->setWindowTitle(QCoreApplication::translate("ErrorListDialog", "Dialog", nullptr));
        fileInfoLabel->setText(QString());
        okButton->setText(QCoreApplication::translate("ErrorListDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorListDialog: public Ui_ErrorListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORLISTDIALOG_H
