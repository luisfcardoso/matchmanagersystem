/********************************************************************************
** Form generated from reading UI file 'deleteuserform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSERFORM_H
#define UI_DELETEUSERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteUserForm
{
public:
    QLabel *title_delete;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lb_cpf;
    QLineEdit *line_cpf;
    QLabel *lb_password;
    QLineEdit *line_password;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_delete;
    QPushButton *btn_return;
    QLabel *subtitle_delete;

    void setupUi(QDialog *DeleteUserForm)
    {
        if (DeleteUserForm->objectName().isEmpty())
            DeleteUserForm->setObjectName(QString::fromUtf8("DeleteUserForm"));
        DeleteUserForm->resize(400, 300);
        title_delete = new QLabel(DeleteUserForm);
        title_delete->setObjectName(QString::fromUtf8("title_delete"));
        title_delete->setGeometry(QRect(0, 10, 401, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        title_delete->setFont(font);
        title_delete->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(DeleteUserForm);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(19, 70, 371, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lb_cpf = new QLabel(verticalLayoutWidget);
        lb_cpf->setObjectName(QString::fromUtf8("lb_cpf"));
        lb_cpf->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_cpf, 0, 0, 1, 1);

        line_cpf = new QLineEdit(verticalLayoutWidget);
        line_cpf->setObjectName(QString::fromUtf8("line_cpf"));

        gridLayout->addWidget(line_cpf, 0, 1, 1, 1);

        lb_password = new QLabel(verticalLayoutWidget);
        lb_password->setObjectName(QString::fromUtf8("lb_password"));
        lb_password->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_password, 1, 0, 1, 1);

        line_password = new QLineEdit(verticalLayoutWidget);
        line_password->setObjectName(QString::fromUtf8("line_password"));
        line_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(line_password, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_delete = new QPushButton(verticalLayoutWidget);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));

        horizontalLayout->addWidget(btn_delete);

        btn_return = new QPushButton(verticalLayoutWidget);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));

        horizontalLayout->addWidget(btn_return);


        verticalLayout->addLayout(horizontalLayout);

        subtitle_delete = new QLabel(DeleteUserForm);
        subtitle_delete->setObjectName(QString::fromUtf8("subtitle_delete"));
        subtitle_delete->setGeometry(QRect(10, 40, 381, 20));
        subtitle_delete->setAlignment(Qt::AlignCenter);

        retranslateUi(DeleteUserForm);

        QMetaObject::connectSlotsByName(DeleteUserForm);
    } // setupUi

    void retranslateUi(QDialog *DeleteUserForm)
    {
        DeleteUserForm->setWindowTitle(QCoreApplication::translate("DeleteUserForm", "Dialog", nullptr));
        title_delete->setText(QCoreApplication::translate("DeleteUserForm", "Deseja deletar seu usu\303\241rio?", nullptr));
        lb_cpf->setText(QCoreApplication::translate("DeleteUserForm", "CPF", nullptr));
        lb_password->setText(QCoreApplication::translate("DeleteUserForm", "Senha", nullptr));
        btn_delete->setText(QCoreApplication::translate("DeleteUserForm", "Deletar usu\303\241rio", nullptr));
        btn_return->setText(QCoreApplication::translate("DeleteUserForm", "Cancelar e Voltar", nullptr));
        subtitle_delete->setText(QCoreApplication::translate("DeleteUserForm", "Por favor, digite novamente seu CPF e sua senha.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteUserForm: public Ui_DeleteUserForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSERFORM_H
