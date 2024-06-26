/********************************************************************************
** Form generated from reading UI file 'profilepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEPAGE_H
#define UI_PROFILEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfilePage
{
public:

    void setupUi(QWidget *ProfilePage)
    {
        if (ProfilePage->objectName().isEmpty())
            ProfilePage->setObjectName("ProfilePage");
        ProfilePage->resize(400, 300);

        retranslateUi(ProfilePage);

        QMetaObject::connectSlotsByName(ProfilePage);
    } // setupUi

    void retranslateUi(QWidget *ProfilePage)
    {
        ProfilePage->setWindowTitle(QCoreApplication::translate("ProfilePage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfilePage: public Ui_ProfilePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEPAGE_H
