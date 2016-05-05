/********************************************************************************
** Form generated from reading UI file 'acercade.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCADE_H
#define UI_ACERCADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_acercade
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *imagen_unet;
    QLabel *label_9;

    void setupUi(QWidget *acercade)
    {
        if (acercade->objectName().isEmpty())
            acercade->setObjectName(QStringLiteral("acercade"));
        acercade->resize(782, 504);
        verticalLayoutWidget = new QWidget(acercade);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 14, 747, 511));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 70));
        label->setMaximumSize(QSize(16777215, 70));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(520, 0));
        label_3->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(label_8, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        imagen_unet = new QLabel(verticalLayoutWidget);
        imagen_unet->setObjectName(QStringLiteral("imagen_unet"));
        imagen_unet->setMinimumSize(QSize(0, 200));
        imagen_unet->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(imagen_unet);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_9);


        retranslateUi(acercade);

        QMetaObject::connectSlotsByName(acercade);
    } // setupUi

    void retranslateUi(QWidget *acercade)
    {
        acercade->setWindowTitle(QApplication::translate("acercade", "Form", 0));
        label->setText(QApplication::translate("acercade", "Programa realizado por: ", 0));
        label_4->setText(QApplication::translate("acercade", "Estefany Salas", 0));
        label_3->setText(QApplication::translate("acercade", "Kevin Hern\303\241ndez", 0));
        label_5->setText(QApplication::translate("acercade", "holi kevgay", 0));
        label_6->setText(QApplication::translate("acercade", "ci: 24820631", 0));
        label_7->setText(QApplication::translate("acercade", "kevin.hernandez@unet.edu.ve", 0));
        label_8->setText(QApplication::translate("acercade", "estefany.salas@unet.edu.ve", 0));
        imagen_unet->setText(QApplication::translate("acercade", "Imagen", 0));
        label_9->setText(QApplication::translate("acercade", "Programa realizado para la materia de Sistemas Operativos de la carrera Ingenier\303\255a en Inform\303\241tica.", 0));
    } // retranslateUi

};

namespace Ui {
    class acercade: public Ui_acercade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCADE_H
