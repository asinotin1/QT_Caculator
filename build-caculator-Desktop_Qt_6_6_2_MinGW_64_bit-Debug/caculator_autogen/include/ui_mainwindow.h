/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *Display;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *multiply;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *sub;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *add;
    QPushButton *ChangeTheSign;
    QPushButton *Button0;
    QPushButton *decimalPoint;
    QPushButton *Equal;
    QPushButton *Clean;
    QPushButton *MemSub;
    QPushButton *Memadd;
    QPushButton *divide;
    QMenuBar *menubar;
    QMenu *menuTr_n_Quang_Lu_n;
    QMenu *menucaculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(437, 343);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        Display->setGeometry(QRect(0, 20, 371, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(false);
        Display->setFont(font1);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"background-color:gray;\n"
"border:1px solid gray;\n"
"color:#FFFFFF;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Display->setReadOnly(true);
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        Button7->setGeometry(QRect(0, 170, 80, 18));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        Button8->setGeometry(QRect(100, 170, 80, 18));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        Button9->setGeometry(QRect(200, 170, 80, 18));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName("multiply");
        multiply->setGeometry(QRect(290, 170, 80, 18));
        sizePolicy.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        Button4->setGeometry(QRect(0, 200, 80, 18));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        Button5->setGeometry(QRect(100, 200, 80, 18));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        Button6->setGeometry(QRect(200, 200, 80, 18));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(290, 200, 80, 18));
        sizePolicy.setHeightForWidth(sub->sizePolicy().hasHeightForWidth());
        sub->setSizePolicy(sizePolicy);
        sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        Button1->setGeometry(QRect(0, 230, 80, 18));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        Button2->setGeometry(QRect(100, 230, 80, 18));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        Button3->setGeometry(QRect(200, 230, 80, 18));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(290, 230, 80, 18));
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        ChangeTheSign = new QPushButton(centralwidget);
        ChangeTheSign->setObjectName("ChangeTheSign");
        ChangeTheSign->setGeometry(QRect(0, 260, 81, 21));
        sizePolicy.setHeightForWidth(ChangeTheSign->sizePolicy().hasHeightForWidth());
        ChangeTheSign->setSizePolicy(sizePolicy);
        ChangeTheSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #00FFFF; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #00BFFF; \n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        Button0->setGeometry(QRect(100, 260, 80, 18));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #C0C0C0;\n"
"    border: 1px solid gray;\n"
"    padding: 1px;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #808080;\n"
"    border: 1px solid gray;\n"
"    padding: 5px; \n"
"}\n"
""));
        decimalPoint = new QPushButton(centralwidget);
        decimalPoint->setObjectName("decimalPoint");
        decimalPoint->setGeometry(QRect(200, 260, 80, 18));
        sizePolicy.setHeightForWidth(decimalPoint->sizePolicy().hasHeightForWidth());
        decimalPoint->setSizePolicy(sizePolicy);
        decimalPoint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        Equal = new QPushButton(centralwidget);
        Equal->setObjectName("Equal");
        Equal->setGeometry(QRect(290, 260, 81, 31));
        sizePolicy.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy);
        Equal->setCursor(QCursor(Qt::PointingHandCursor));
        Equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        Clean = new QPushButton(centralwidget);
        Clean->setObjectName("Clean");
        Clean->setGeometry(QRect(0, 140, 80, 18));
        sizePolicy.setHeightForWidth(Clean->sizePolicy().hasHeightForWidth());
        Clean->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        font2.setBold(true);
        Clean->setFont(font2);
        Clean->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        MemSub = new QPushButton(centralwidget);
        MemSub->setObjectName("MemSub");
        MemSub->setGeometry(QRect(100, 140, 80, 18));
        sizePolicy.setHeightForWidth(MemSub->sizePolicy().hasHeightForWidth());
        MemSub->setSizePolicy(sizePolicy);
        MemSub->setFont(font2);
        MemSub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        Memadd = new QPushButton(centralwidget);
        Memadd->setObjectName("Memadd");
        Memadd->setGeometry(QRect(200, 140, 80, 18));
        sizePolicy.setHeightForWidth(Memadd->sizePolicy().hasHeightForWidth());
        Memadd->setSizePolicy(sizePolicy);
        Memadd->setFont(font2);
        Memadd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(290, 140, 80, 18));
        sizePolicy.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy);
        divide->setFont(font2);
        divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #FFA500	;\n"
"    border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #FF7F50; \n"
"   border: 10px solid gray;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 437, 21));
        menuTr_n_Quang_Lu_n = new QMenu(menubar);
        menuTr_n_Quang_Lu_n->setObjectName("menuTr_n_Quang_Lu_n");
        menucaculator = new QMenu(menubar);
        menucaculator->setObjectName("menucaculator");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(12);
        menucaculator->setFont(font3);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuTr_n_Quang_Lu_n->menuAction());
        menubar->addAction(menucaculator->menuAction());
        menuTr_n_Quang_Lu_n->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        ChangeTheSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        decimalPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Clean->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        MemSub->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        Memadd->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        menuTr_n_Quang_Lu_n->setTitle(QCoreApplication::translate("MainWindow", "Tr\341\272\247n Quang Lu\303\242n", nullptr));
        menucaculator->setTitle(QCoreApplication::translate("MainWindow", "caculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
