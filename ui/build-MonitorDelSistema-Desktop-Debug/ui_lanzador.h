/********************************************************************************
** Form generated from reading UI file 'lanzador.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANZADOR_H
#define UI_LANZADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lanzador
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QLabel *PID;

    void setupUi(QWidget *lanzador)
    {
        if (lanzador->objectName().isEmpty())
            lanzador->setObjectName(QStringLiteral("lanzador"));
        lanzador->resize(746, 459);
        gridLayoutWidget = new QWidget(lanzador);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 721, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(300, 35));
        textEdit->setAutoFillBackground(false);
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setMaximumSize(QSize(300, 35));
        textEdit_3->setAcceptDrops(true);
        textEdit_3->setStyleSheet(QStringLiteral(""));
        textEdit_3->setInputMethodHints(Qt::ImhMultiLine);
        textEdit_3->setFrameShape(QFrame::NoFrame);
        textEdit_3->setFrameShadow(QFrame::Plain);
        textEdit_3->setLineWidth(0);
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);

        gridLayout->addWidget(textEdit_3, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(pushButton_3, 5, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 60));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 30));
        label->setFont(font);
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        textEdit_2 = new QTextEdit(gridLayoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setMaximumSize(QSize(300, 35));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(textEdit_2, 3, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton->setFlat(false);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        PID = new QLabel(gridLayoutWidget);
        PID->setObjectName(QStringLiteral("PID"));
        PID->setMinimumSize(QSize(100, 0));
        PID->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(PID, 3, 2, 1, 1);


        retranslateUi(lanzador);

        QMetaObject::connectSlotsByName(lanzador);
    } // setupUi

    void retranslateUi(QWidget *lanzador)
    {
        lanzador->setWindowTitle(QApplication::translate("lanzador", "Form", 0));
        pushButton_3->setText(QApplication::translate("lanzador", "Cerrar", 0));
        pushButton_2->setText(QApplication::translate("lanzador", "Obtener", 0));
        label_2->setText(QApplication::translate("lanzador", "Conocer el PID de un Proceso", 0));
        label_3->setText(QApplication::translate("lanzador", "Cerrar Aplicaci\303\263n", 0));
        label->setText(QApplication::translate("lanzador", "Iniciar Aplicaci\303\263n", 0));
        pushButton->setText(QApplication::translate("lanzador", "Iniciar", 0));
        PID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lanzador: public Ui_lanzador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANZADOR_H
