/********************************************************************************
** Form generated from reading UI file 'opciones.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCIONES_H
#define UI_OPCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opciones
{
public:
    QPushButton *pushButton_2;
    QPushButton *agregar;
    QPushButton *mensaje;
    QLabel *label;

    void setupUi(QWidget *opciones)
    {
        if (opciones->objectName().isEmpty())
            opciones->setObjectName(QStringLiteral("opciones"));
        opciones->setWindowModality(Qt::ApplicationModal);
        opciones->resize(400, 300);
        pushButton_2 = new QPushButton(opciones);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 200, 131, 34));
        agregar = new QPushButton(opciones);
        agregar->setObjectName(QStringLiteral("agregar"));
        agregar->setGeometry(QRect(130, 100, 131, 34));
        mensaje = new QPushButton(opciones);
        mensaje->setObjectName(QStringLiteral("mensaje"));
        mensaje->setGeometry(QRect(130, 150, 131, 34));
        label = new QLabel(opciones);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 231, 20));

        retranslateUi(opciones);

        QMetaObject::connectSlotsByName(opciones);
    } // setupUi

    void retranslateUi(QWidget *opciones)
    {
        opciones->setWindowTitle(QApplication::translate("opciones", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("opciones", "Saber ubicaci\303\263n", Q_NULLPTR));
        agregar->setText(QApplication::translate("opciones", "Agregar amigo", Q_NULLPTR));
        mensaje->setText(QApplication::translate("opciones", "Enviar mensaje", Q_NULLPTR));
        label->setText(QApplication::translate("opciones", "Indica la opcion que deseas realizar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class opciones: public Ui_opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCIONES_H
