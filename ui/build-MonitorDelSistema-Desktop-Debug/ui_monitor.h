/********************************************************************************
** Form generated from reading UI file 'monitor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITOR_H
#define UI_MONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Monitor
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_14;
    QLabel *h1;
    QLabel *usuario;
    QLabel *total_RAM;
    QLabel *kernel;
    QLabel *fecha;
    QLabel *total_SWAP;
    QLabel *label_7;
    QLabel *label_18;
    QLabel *label_6;
    QLabel *h1_2;
    QLabel *label_15;
    QLabel *label_5;
    QLabel *h1_3;
    QLabel *label_4;
    QLabel *procesos;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *libre_RAM;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_3;
    QLabel *tiempo_transcurrido;
    QLabel *libre_SWAP;
    QLabel *label_9;
    QLabel *espacio_discos;
    QLabel *h1_4;
    QTextEdit *discos;
    QTextEdit *particiones;
    QTextEdit *interfaces;

    void setupUi(QWidget *Monitor)
    {
        if (Monitor->objectName().isEmpty())
            Monitor->setObjectName(QStringLiteral("Monitor"));
        Monitor->resize(966, 654);
        gridLayoutWidget = new QWidget(Monitor);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 9, 841, 501));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(0, 30));
        label_14->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(12);
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 9, 2, 1, 1);

        h1 = new QLabel(gridLayoutWidget);
        h1->setObjectName(QStringLiteral("h1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(h1->sizePolicy().hasHeightForWidth());
        h1->setSizePolicy(sizePolicy);
        h1->setMinimumSize(QSize(0, 50));
        h1->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        h1->setFont(font1);
        h1->setStyleSheet(QStringLiteral("color: rgb(1,87,155);"));
        h1->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        h1->setMargin(0);

        gridLayout->addWidget(h1, 0, 0, 1, 1);

        usuario = new QLabel(gridLayoutWidget);
        usuario->setObjectName(QStringLiteral("usuario"));

        gridLayout->addWidget(usuario, 3, 3, 1, 1);

        total_RAM = new QLabel(gridLayoutWidget);
        total_RAM->setObjectName(QStringLiteral("total_RAM"));

        gridLayout->addWidget(total_RAM, 1, 1, 1, 1);

        kernel = new QLabel(gridLayoutWidget);
        kernel->setObjectName(QStringLiteral("kernel"));

        gridLayout->addWidget(kernel, 1, 3, 1, 1);

        fecha = new QLabel(gridLayoutWidget);
        fecha->setObjectName(QStringLiteral("fecha"));

        gridLayout->addWidget(fecha, 5, 3, 1, 1);

        total_SWAP = new QLabel(gridLayoutWidget);
        total_SWAP->setObjectName(QStringLiteral("total_SWAP"));

        gridLayout->addWidget(total_SWAP, 3, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setMaximumSize(QSize(16777215, 30));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(0, 30));
        label_18->setMaximumSize(QSize(16777215, 30));
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 4, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 30));
        label_6->setMaximumSize(QSize(16777215, 30));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        h1_2 = new QLabel(gridLayoutWidget);
        h1_2->setObjectName(QStringLiteral("h1_2"));
        h1_2->setMinimumSize(QSize(0, 50));
        h1_2->setMaximumSize(QSize(16777215, 50));
        h1_2->setFont(font1);
        h1_2->setStyleSheet(QStringLiteral("color: rgb(1,87,155);"));
        h1_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        h1_2->setMargin(0);

        gridLayout->addWidget(h1_2, 5, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(0, 30));
        label_15->setMaximumSize(QSize(16777215, 30));
        label_15->setFont(font);

        gridLayout->addWidget(label_15, 3, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        h1_3 = new QLabel(gridLayoutWidget);
        h1_3->setObjectName(QStringLiteral("h1_3"));
        h1_3->setMinimumSize(QSize(0, 50));
        h1_3->setMaximumSize(QSize(16777215, 50));
        h1_3->setFont(font1);
        h1_3->setStyleSheet(QStringLiteral("color: rgb(1,87,155);"));
        h1_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        h1_3->setMargin(0);

        gridLayout->addWidget(h1_3, 0, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        procesos = new QLabel(gridLayoutWidget);
        procesos->setObjectName(QStringLiteral("procesos"));

        gridLayout->addWidget(procesos, 2, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setMaximumSize(QSize(16777215, 30));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(0, 30));
        label_12->setMaximumSize(QSize(16777215, 30));
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        libre_RAM = new QLabel(gridLayoutWidget);
        libre_RAM->setObjectName(QStringLiteral("libre_RAM"));

        gridLayout->addWidget(libre_RAM, 2, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(0, 30));
        label_13->setMaximumSize(QSize(16777215, 30));
        label_13->setFont(font);

        gridLayout->addWidget(label_13, 2, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(0, 30));
        label_16->setMaximumSize(QSize(16777215, 30));
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 5, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        tiempo_transcurrido = new QLabel(gridLayoutWidget);
        tiempo_transcurrido->setObjectName(QStringLiteral("tiempo_transcurrido"));

        gridLayout->addWidget(tiempo_transcurrido, 4, 3, 1, 1);

        libre_SWAP = new QLabel(gridLayoutWidget);
        libre_SWAP->setObjectName(QStringLiteral("libre_SWAP"));

        gridLayout->addWidget(libre_SWAP, 4, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 30));
        label_9->setMaximumSize(QSize(16777215, 30));
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        espacio_discos = new QLabel(gridLayoutWidget);
        espacio_discos->setObjectName(QStringLiteral("espacio_discos"));

        gridLayout->addWidget(espacio_discos, 6, 1, 1, 1);

        h1_4 = new QLabel(gridLayoutWidget);
        h1_4->setObjectName(QStringLiteral("h1_4"));
        h1_4->setMinimumSize(QSize(0, 50));
        h1_4->setMaximumSize(QSize(16777215, 50));
        h1_4->setFont(font1);
        h1_4->setStyleSheet(QStringLiteral("color: rgb(1,87,155);"));
        h1_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        h1_4->setMargin(0);

        gridLayout->addWidget(h1_4, 7, 2, 1, 1);

        discos = new QTextEdit(gridLayoutWidget);
        discos->setObjectName(QStringLiteral("discos"));

        gridLayout->addWidget(discos, 7, 1, 1, 1);

        particiones = new QTextEdit(gridLayoutWidget);
        particiones->setObjectName(QStringLiteral("particiones"));

        gridLayout->addWidget(particiones, 9, 1, 1, 1);

        interfaces = new QTextEdit(gridLayoutWidget);
        interfaces->setObjectName(QStringLiteral("interfaces"));
        interfaces->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(interfaces, 9, 3, 1, 1);


        retranslateUi(Monitor);

        QMetaObject::connectSlotsByName(Monitor);
    } // setupUi

    void retranslateUi(QWidget *Monitor)
    {
        Monitor->setWindowTitle(QApplication::translate("Monitor", "Form", 0));
        label_14->setText(QApplication::translate("Monitor", "Interfaces de Red: ", 0));
        h1->setText(QApplication::translate("Monitor", "Datos de Memoria", 0));
        usuario->setText(QString());
        total_RAM->setText(QString());
        kernel->setText(QString());
        fecha->setText(QString());
        total_SWAP->setText(QString());
        label_7->setText(QApplication::translate("Monitor", "Discos Existentes:", 0));
        label_18->setText(QApplication::translate("Monitor", "Tiempo de Encendido: ", 0));
        label_6->setText(QApplication::translate("Monitor", "Total de Memoria SWAP libre:", 0));
        h1_2->setText(QApplication::translate("Monitor", "Datos del Disco", 0));
        label_15->setText(QApplication::translate("Monitor", "Usuario: ", 0));
        label_5->setText(QApplication::translate("Monitor", "Total de Memoria SWAP: ", 0));
        h1_3->setText(QApplication::translate("Monitor", "Datos del Sistema", 0));
        label_4->setText(QApplication::translate("Monitor", "Total de Memoria RAM libre: ", 0));
        procesos->setText(QString());
        label_8->setText(QApplication::translate("Monitor", "Particiones Existentes: ", 0));
        label_12->setText(QApplication::translate("Monitor", "Versi\303\263n del Kernel: ", 0));
        libre_RAM->setText(QString());
        label_13->setText(QApplication::translate("Monitor", "Procesos en Ejecuci\303\263n: ", 0));
        label_16->setText(QApplication::translate("Monitor", "Fecha: ", 0));
        label_3->setText(QApplication::translate("Monitor", "Total de Memoria RAM: ", 0));
        tiempo_transcurrido->setText(QString());
        libre_SWAP->setText(QString());
        label_9->setText(QApplication::translate("Monitor", "Espacio de Discos un uso: ", 0));
        espacio_discos->setText(QString());
        h1_4->setText(QApplication::translate("Monitor", "Datos de Red", 0));
    } // retranslateUi

};

namespace Ui {
    class Monitor: public Ui_Monitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITOR_H
