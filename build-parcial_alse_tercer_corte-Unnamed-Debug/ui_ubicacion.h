/********************************************************************************
** Form generated from reading UI file 'ubicacion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UBICACION_H
#define UI_UBICACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ubicacion
{
public:

    void setupUi(QWidget *ubicacion)
    {
        if (ubicacion->objectName().isEmpty())
            ubicacion->setObjectName(QStringLiteral("ubicacion"));
        ubicacion->setWindowModality(Qt::ApplicationModal);
        ubicacion->resize(350, 350);
        ubicacion->setMinimumSize(QSize(350, 350));
        ubicacion->setMaximumSize(QSize(350, 350));

        retranslateUi(ubicacion);

        QMetaObject::connectSlotsByName(ubicacion);
    } // setupUi

    void retranslateUi(QWidget *ubicacion)
    {
        ubicacion->setWindowTitle(QApplication::translate("ubicacion", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ubicacion: public Ui_ubicacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UBICACION_H
