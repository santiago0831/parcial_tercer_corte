/********************************************************************************
** Form generated from reading UI file 'agregar_amigo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_AMIGO_H
#define UI_AGREGAR_AMIGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregar_amigo
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *boton_agregar;
    QLineEdit *amigo_line;
    QLabel *label_3;

    void setupUi(QWidget *agregar_amigo)
    {
        if (agregar_amigo->objectName().isEmpty())
            agregar_amigo->setObjectName(QStringLiteral("agregar_amigo"));
        agregar_amigo->setWindowModality(Qt::ApplicationModal);
        agregar_amigo->resize(350, 300);
        agregar_amigo->setMinimumSize(QSize(350, 300));
        agregar_amigo->setMaximumSize(QSize(350, 300));
        label = new QLabel(agregar_amigo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 261, 18));
        label_2 = new QLabel(agregar_amigo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 70, 241, 18));
        boton_agregar = new QPushButton(agregar_amigo);
        boton_agregar->setObjectName(QStringLiteral("boton_agregar"));
        boton_agregar->setGeometry(QRect(130, 220, 88, 34));
        amigo_line = new QLineEdit(agregar_amigo);
        amigo_line->setObjectName(QStringLiteral("amigo_line"));
        amigo_line->setGeometry(QRect(70, 150, 211, 32));
        label_3 = new QLabel(agregar_amigo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 130, 58, 18));

        retranslateUi(agregar_amigo);

        QMetaObject::connectSlotsByName(agregar_amigo);
    } // setupUi

    void retranslateUi(QWidget *agregar_amigo)
    {
        agregar_amigo->setWindowTitle(QApplication::translate("agregar_amigo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("agregar_amigo", "Escribe el nombre de usuario de tu amigo", Q_NULLPTR));
        label_2->setText(QApplication::translate("agregar_amigo", "y espera por tu aprobaci\303\263n de amistad", Q_NULLPTR));
        boton_agregar->setText(QApplication::translate("agregar_amigo", "Agregar", Q_NULLPTR));
        label_3->setText(QApplication::translate("agregar_amigo", "Usuario:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class agregar_amigo: public Ui_agregar_amigo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_AMIGO_H
