/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_dialog
{
public:
    QPushButton *pushButton;
    QLabel *login_status;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;

    void setupUi(QDialog *Login_dialog)
    {
        if (Login_dialog->objectName().isEmpty())
            Login_dialog->setObjectName(QStringLiteral("Login_dialog"));
        Login_dialog->setWindowModality(Qt::ApplicationModal);
        Login_dialog->setEnabled(true);
        Login_dialog->resize(430, 290);
        Login_dialog->setFocusPolicy(Qt::TabFocus);
        Login_dialog->setContextMenuPolicy(Qt::CustomContextMenu);
        Login_dialog->setAcceptDrops(false);
        Login_dialog->setAutoFillBackground(false);
        Login_dialog->setSizeGripEnabled(false);
        Login_dialog->setModal(false);
        pushButton = new QPushButton(Login_dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 220, 75, 23));
        login_status = new QLabel(Login_dialog);
        login_status->setObjectName(QStringLiteral("login_status"));
        login_status->setGeometry(QRect(320, 260, 54, 12));
        layoutWidget = new QWidget(Login_dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 271, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(Login_dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 240, 54, 12));

        retranslateUi(Login_dialog);

        QMetaObject::connectSlotsByName(Login_dialog);
    } // setupUi

    void retranslateUi(QDialog *Login_dialog)
    {
        Login_dialog->setWindowTitle(QApplication::translate("Login_dialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("Login_dialog", "\347\231\273\351\231\206", 0));
        login_status->setText(QString());
        label->setText(QApplication::translate("Login_dialog", "\344\274\232\345\221\230\345\217\267", 0));
        lineEdit->setText(QString());
        label_2->setText(QApplication::translate("Login_dialog", "\347\224\250\346\210\267\345\220\215", 0));
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("Login_dialog", "\345\257\206\347\240\201", 0));
        lineEdit_3->setText(QString());
        label_4->setText(QApplication::translate("Login_dialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Login_dialog: public Ui_Login_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
