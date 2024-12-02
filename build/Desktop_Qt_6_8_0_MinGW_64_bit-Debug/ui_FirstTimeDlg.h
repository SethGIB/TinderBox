/********************************************************************************
** Form generated from reading UI file 'FirstTimeDlg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTTIMEDLG_H
#define UI_FIRSTTIMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FirstTimeDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FirstTimeDlg)
    {
        if (FirstTimeDlg->objectName().isEmpty())
            FirstTimeDlg->setObjectName("FirstTimeDlg");
        FirstTimeDlg->resize(400, 200);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FirstTimeDlg->sizePolicy().hasHeightForWidth());
        FirstTimeDlg->setSizePolicy(sizePolicy);
        FirstTimeDlg->setMinimumSize(QSize(400, 200));
        FirstTimeDlg->setMaximumSize(QSize(400, 200));
        verticalLayout_2 = new QVBoxLayout(FirstTimeDlg);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FirstTimeDlg);
        label->setObjectName("label");
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(FirstTimeDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(FirstTimeDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FirstTimeDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FirstTimeDlg, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FirstTimeDlg);
    } // setupUi

    void retranslateUi(QDialog *FirstTimeDlg)
    {
        FirstTimeDlg->setWindowTitle(QCoreApplication::translate("FirstTimeDlg", "First Timer", nullptr));
        label->setText(QCoreApplication::translate("FirstTimeDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Looks like this is the first time you're running TinderBox!</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\"><br />Please point TinderBox to the Cinder folder on your system.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstTimeDlg: public Ui_FirstTimeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTTIMEDLG_H
