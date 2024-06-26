/********************************************************************************
** Form generated from reading UI file 'infopage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOPAGE_H
#define UI_INFOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoPage
{
public:

    void setupUi(QWidget *InfoPage)
    {
        if (InfoPage->objectName().isEmpty())
            InfoPage->setObjectName("InfoPage");
        InfoPage->resize(400, 300);

        retranslateUi(InfoPage);

        QMetaObject::connectSlotsByName(InfoPage);
    } // setupUi

    void retranslateUi(QWidget *InfoPage)
    {
        InfoPage->setWindowTitle(QCoreApplication::translate("InfoPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoPage: public Ui_InfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPAGE_H
