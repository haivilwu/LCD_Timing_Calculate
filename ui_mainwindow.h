/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *HSW;
    QLabel *HBP;
    QLabel *HAD;
    QLabel *HFP;
    QLabel *VSW;
    QLabel *VBP;
    QLabel *VAD;
    QLabel *VFP;
    QLineEdit *lineEdit_VFP;
    QLineEdit *lineEdit_VAD;
    QLineEdit *lineEdit_VBP;
    QLineEdit *lineEdit_VSW;
    QLineEdit *lineEdit_HSW;
    QLineEdit *lineEdit_HBP;
    QLineEdit *lineEdit_HAD;
    QLineEdit *lineEdit_HFP;
    QPushButton *btnCal;
    QLabel *label_pclk;
    QLabel *label_framerate;
    QLabel *label_bitclk;
    QLabel *label_framebit;
    QLabel *label_dsi;
    QLabel *label_mipiclk;
    QLabel *label_Byteclk;
    QLabel *label_vsync;
    QLabel *label_hsync;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_11;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_Htotal;
    QLineEdit *lineEdit_Vtotal;
    QLineEdit *lineEdit_Pclk;
    QLineEdit *lineEdit_FrameRate;
    QLineEdit *lineEdit_MiPiclk;
    QLineEdit *lineEdit_Bitclk;
    QLineEdit *lineEdit_byteclk;
    QLineEdit *lineEdit_dsiclk;
    QLineEdit *lineEdit_framebit;
    QLineEdit *lineEdit_Hsync;
    QLineEdit *lineEdit_vsync;
    QLabel *label_thotal;
    QLabel *label_vtotal;
    QFrame *line_12;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(590, 680);
        MainWindow->setMinimumSize(QSize(590, 680));
        MainWindow->setMaximumSize(QSize(590, 680));
        MainWindow->setBaseSize(QSize(590, 681));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        HSW = new QLabel(centralWidget);
        HSW->setObjectName(QStringLiteral("HSW"));
        HSW->setGeometry(QRect(93, 10, 41, 16));
        HSW->setFont(font);
        HBP = new QLabel(centralWidget);
        HBP->setObjectName(QStringLiteral("HBP"));
        HBP->setGeometry(QRect(135, 10, 41, 16));
        HBP->setFont(font);
        HAD = new QLabel(centralWidget);
        HAD->setObjectName(QStringLiteral("HAD"));
        HAD->setGeometry(QRect(270, 10, 54, 12));
        HAD->setFont(font);
        HFP = new QLabel(centralWidget);
        HFP->setObjectName(QStringLiteral("HFP"));
        HFP->setGeometry(QRect(455, 10, 41, 16));
        HFP->setFont(font);
        VSW = new QLabel(centralWidget);
        VSW->setObjectName(QStringLiteral("VSW"));
        VSW->setGeometry(QRect(10, 62, 41, 20));
        VSW->setFont(font);
        VBP = new QLabel(centralWidget);
        VBP->setObjectName(QStringLiteral("VBP"));
        VBP->setGeometry(QRect(10, 97, 41, 16));
        VBP->setFont(font);
        VAD = new QLabel(centralWidget);
        VAD->setObjectName(QStringLiteral("VAD"));
        VAD->setGeometry(QRect(10, 180, 41, 16));
        VAD->setFont(font);
        VFP = new QLabel(centralWidget);
        VFP->setObjectName(QStringLiteral("VFP"));
        VFP->setGeometry(QRect(10, 260, 31, 16));
        VFP->setFont(font);
        lineEdit_VFP = new QLineEdit(centralWidget);
        lineEdit_VFP->setObjectName(QStringLiteral("lineEdit_VFP"));
        lineEdit_VFP->setGeometry(QRect(51, 250, 41, 31));
        lineEdit_VFP->setFont(font);
        lineEdit_VFP->setAlignment(Qt::AlignCenter);
        lineEdit_VAD = new QLineEdit(centralWidget);
        lineEdit_VAD->setObjectName(QStringLiteral("lineEdit_VAD"));
        lineEdit_VAD->setGeometry(QRect(51, 120, 41, 131));
        lineEdit_VAD->setFont(font);
        lineEdit_VAD->setAlignment(Qt::AlignCenter);
        lineEdit_VBP = new QLineEdit(centralWidget);
        lineEdit_VBP->setObjectName(QStringLiteral("lineEdit_VBP"));
        lineEdit_VBP->setGeometry(QRect(51, 90, 41, 31));
        lineEdit_VBP->setFont(font);
        lineEdit_VBP->setAlignment(Qt::AlignCenter);
        lineEdit_VSW = new QLineEdit(centralWidget);
        lineEdit_VSW->setObjectName(QStringLiteral("lineEdit_VSW"));
        lineEdit_VSW->setGeometry(QRect(51, 59, 41, 32));
        lineEdit_VSW->setFont(font);
        lineEdit_VSW->setAlignment(Qt::AlignCenter);
        lineEdit_HSW = new QLineEdit(centralWidget);
        lineEdit_HSW->setObjectName(QStringLiteral("lineEdit_HSW"));
        lineEdit_HSW->setGeometry(QRect(91, 30, 41, 31));
        lineEdit_HSW->setFont(font);
        lineEdit_HSW->setAlignment(Qt::AlignCenter);
        lineEdit_HBP = new QLineEdit(centralWidget);
        lineEdit_HBP->setObjectName(QStringLiteral("lineEdit_HBP"));
        lineEdit_HBP->setGeometry(QRect(130, 30, 41, 31));
        lineEdit_HBP->setFont(font);
        lineEdit_HBP->setAlignment(Qt::AlignCenter);
        lineEdit_HAD = new QLineEdit(centralWidget);
        lineEdit_HAD->setObjectName(QStringLiteral("lineEdit_HAD"));
        lineEdit_HAD->setGeometry(QRect(170, 30, 271, 31));
        lineEdit_HAD->setFont(font);
        lineEdit_HAD->setAlignment(Qt::AlignCenter);
        lineEdit_HFP = new QLineEdit(centralWidget);
        lineEdit_HFP->setObjectName(QStringLiteral("lineEdit_HFP"));
        lineEdit_HFP->setGeometry(QRect(440, 30, 61, 31));
        lineEdit_HFP->setFont(font);
        lineEdit_HFP->setAlignment(Qt::AlignCenter);
        btnCal = new QPushButton(centralWidget);
        btnCal->setObjectName(QStringLiteral("btnCal"));
        btnCal->setGeometry(QRect(530, 320, 51, 281));
        btnCal->setFont(font);
        label_pclk = new QLabel(centralWidget);
        label_pclk->setObjectName(QStringLiteral("label_pclk"));
        label_pclk->setGeometry(QRect(11, 363, 261, 16));
        label_pclk->setFont(font);
        label_framerate = new QLabel(centralWidget);
        label_framerate->setObjectName(QStringLiteral("label_framerate"));
        label_framerate->setGeometry(QRect(10, 391, 351, 16));
        label_framerate->setFont(font);
        label_bitclk = new QLabel(centralWidget);
        label_bitclk->setObjectName(QStringLiteral("label_bitclk"));
        label_bitclk->setGeometry(QRect(10, 451, 211, 16));
        label_bitclk->setFont(font);
        label_framebit = new QLabel(centralWidget);
        label_framebit->setObjectName(QStringLiteral("label_framebit"));
        label_framebit->setGeometry(QRect(10, 542, 271, 16));
        label_framebit->setFont(font);
        label_dsi = new QLabel(centralWidget);
        label_dsi->setObjectName(QStringLiteral("label_dsi"));
        label_dsi->setGeometry(QRect(10, 513, 291, 16));
        label_dsi->setFont(font);
        label_mipiclk = new QLabel(centralWidget);
        label_mipiclk->setObjectName(QStringLiteral("label_mipiclk"));
        label_mipiclk->setGeometry(QRect(11, 421, 373, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        label_mipiclk->setFont(font1);
        label_Byteclk = new QLabel(centralWidget);
        label_Byteclk->setObjectName(QStringLiteral("label_Byteclk"));
        label_Byteclk->setGeometry(QRect(10, 482, 161, 16));
        label_Byteclk->setFont(font);
        label_vsync = new QLabel(centralWidget);
        label_vsync->setObjectName(QStringLiteral("label_vsync"));
        label_vsync->setGeometry(QRect(10, 600, 341, 16));
        label_vsync->setFont(font);
        label_hsync = new QLabel(centralWidget);
        label_hsync->setObjectName(QStringLiteral("label_hsync"));
        label_hsync->setGeometry(QRect(10, 570, 231, 16));
        label_hsync->setFont(font);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(11, 376, 381, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(11, 406, 381, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(9, 436, 381, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(12, 467, 381, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(11, 497, 381, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(11, 587, 381, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(11, 557, 381, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(11, 528, 383, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(11, 616, 381, 16));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(10, 346, 381, 16));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(91, 60, 411, 221));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(188, 185, 185);"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(160, 120, 281, 131));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: rgb(58, 176, 86);\n"
"background-image: url(:/images/background.png);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 300, 101, 326));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_Htotal = new QLineEdit(layoutWidget);
        lineEdit_Htotal->setObjectName(QStringLiteral("lineEdit_Htotal"));
        lineEdit_Htotal->setFont(font);
        lineEdit_Htotal->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_Htotal);

        lineEdit_Vtotal = new QLineEdit(layoutWidget);
        lineEdit_Vtotal->setObjectName(QStringLiteral("lineEdit_Vtotal"));
        lineEdit_Vtotal->setFont(font);
        lineEdit_Vtotal->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_Vtotal);

        lineEdit_Pclk = new QLineEdit(layoutWidget);
        lineEdit_Pclk->setObjectName(QStringLiteral("lineEdit_Pclk"));
        lineEdit_Pclk->setFont(font);
        lineEdit_Pclk->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_Pclk);

        lineEdit_FrameRate = new QLineEdit(layoutWidget);
        lineEdit_FrameRate->setObjectName(QStringLiteral("lineEdit_FrameRate"));
        lineEdit_FrameRate->setFont(font);
        lineEdit_FrameRate->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_FrameRate);

        lineEdit_MiPiclk = new QLineEdit(layoutWidget);
        lineEdit_MiPiclk->setObjectName(QStringLiteral("lineEdit_MiPiclk"));
        lineEdit_MiPiclk->setFont(font);
        lineEdit_MiPiclk->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_MiPiclk);

        lineEdit_Bitclk = new QLineEdit(layoutWidget);
        lineEdit_Bitclk->setObjectName(QStringLiteral("lineEdit_Bitclk"));
        lineEdit_Bitclk->setFont(font);
        lineEdit_Bitclk->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_Bitclk);

        lineEdit_byteclk = new QLineEdit(layoutWidget);
        lineEdit_byteclk->setObjectName(QStringLiteral("lineEdit_byteclk"));
        lineEdit_byteclk->setFont(font);
        lineEdit_byteclk->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_byteclk);

        lineEdit_dsiclk = new QLineEdit(layoutWidget);
        lineEdit_dsiclk->setObjectName(QStringLiteral("lineEdit_dsiclk"));
        lineEdit_dsiclk->setFont(font);
        lineEdit_dsiclk->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_dsiclk);

        lineEdit_framebit = new QLineEdit(layoutWidget);
        lineEdit_framebit->setObjectName(QStringLiteral("lineEdit_framebit"));
        lineEdit_framebit->setFont(font);
        lineEdit_framebit->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_framebit);

        lineEdit_Hsync = new QLineEdit(layoutWidget);
        lineEdit_Hsync->setObjectName(QStringLiteral("lineEdit_Hsync"));
        lineEdit_Hsync->setFont(font);
        lineEdit_Hsync->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_Hsync);

        lineEdit_vsync = new QLineEdit(layoutWidget);
        lineEdit_vsync->setObjectName(QStringLiteral("lineEdit_vsync"));
        lineEdit_vsync->setFont(font);
        lineEdit_vsync->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEdit_vsync);

        label_thotal = new QLabel(centralWidget);
        label_thotal->setObjectName(QStringLiteral("label_thotal"));
        label_thotal->setGeometry(QRect(12, 302, 311, 18));
        label_thotal->setFont(font);
        label_vtotal = new QLabel(centralWidget);
        label_vtotal->setObjectName(QStringLiteral("label_vtotal"));
        label_vtotal->setGeometry(QRect(12, 331, 311, 18));
        label_vtotal->setFont(font);
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(11, 317, 379, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(497, 300, 41, 24));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(497, 331, 20, 18));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(497, 364, 18, 18));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(497, 394, 18, 18));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(497, 425, 18, 18));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(497, 453, 18, 18));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(497, 484, 18, 18));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(497, 514, 18, 18));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(497, 545, 18, 18));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(497, 575, 18, 18));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(497, 606, 18, 18));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_HSW, lineEdit_HBP);
        QWidget::setTabOrder(lineEdit_HBP, lineEdit_HAD);
        QWidget::setTabOrder(lineEdit_HAD, lineEdit_HFP);
        QWidget::setTabOrder(lineEdit_HFP, lineEdit_VSW);
        QWidget::setTabOrder(lineEdit_VSW, lineEdit_VBP);
        QWidget::setTabOrder(lineEdit_VBP, lineEdit_VAD);
        QWidget::setTabOrder(lineEdit_VAD, lineEdit_VFP);
        QWidget::setTabOrder(lineEdit_VFP, btnCal);
        QWidget::setTabOrder(btnCal, lineEdit_Vtotal);
        QWidget::setTabOrder(lineEdit_Vtotal, lineEdit_Pclk);
        QWidget::setTabOrder(lineEdit_Pclk, lineEdit_FrameRate);
        QWidget::setTabOrder(lineEdit_FrameRate, lineEdit_MiPiclk);
        QWidget::setTabOrder(lineEdit_MiPiclk, lineEdit_Bitclk);
        QWidget::setTabOrder(lineEdit_Bitclk, lineEdit_byteclk);
        QWidget::setTabOrder(lineEdit_byteclk, lineEdit_dsiclk);
        QWidget::setTabOrder(lineEdit_dsiclk, lineEdit_framebit);
        QWidget::setTabOrder(lineEdit_framebit, lineEdit_Hsync);
        QWidget::setTabOrder(lineEdit_Hsync, lineEdit_vsync);
        QWidget::setTabOrder(lineEdit_vsync, lineEdit_Htotal);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LCD Timing Tool", Q_NULLPTR));
        HSW->setText(QApplication::translate("MainWindow", "HSW", Q_NULLPTR));
        HBP->setText(QApplication::translate("MainWindow", "HBP", Q_NULLPTR));
        HAD->setText(QApplication::translate("MainWindow", "HAD", Q_NULLPTR));
        HFP->setText(QApplication::translate("MainWindow", "HFP", Q_NULLPTR));
        VSW->setText(QApplication::translate("MainWindow", "VSW", Q_NULLPTR));
        VBP->setText(QApplication::translate("MainWindow", "VBP", Q_NULLPTR));
        VAD->setText(QApplication::translate("MainWindow", "VAD", Q_NULLPTR));
        VFP->setText(QApplication::translate("MainWindow", "VFP", Q_NULLPTR));
        btnCal->setText(QApplication::translate("MainWindow", "Cal", Q_NULLPTR));
        label_pclk->setText(QApplication::translate("MainWindow", "Pclk = Htotal * Vtotal * 60", Q_NULLPTR));
        label_framerate->setText(QApplication::translate("MainWindow", "Frame Rate = Pclk Frequency/Htotal/Vtotal", Q_NULLPTR));
        label_bitclk->setText(QApplication::translate("MainWindow", "Bit lck=Pclk*bpp/lane num", Q_NULLPTR));
        label_framebit->setText(QApplication::translate("MainWindow", "Frame Bit=Htotal*Vtotal*bpp", Q_NULLPTR));
        label_dsi->setText(QApplication::translate("MainWindow", "DSI Plck=(Byte clk*lane_num)/bpp", Q_NULLPTR));
        label_mipiclk->setText(QApplication::translate("MainWindow", "MIPI clk=Htotal*Vtotal*bus_width(3*8)*fps(60)/lane_number/2", Q_NULLPTR));
        label_Byteclk->setText(QApplication::translate("MainWindow", "Byte clk=Bit lck/8", Q_NULLPTR));
        label_vsync->setText(QApplication::translate("MainWindow", "VSync=Frame Rate =(H Sync*1000/Vtotal)*1", Q_NULLPTR));
        label_hsync->setText(QApplication::translate("MainWindow", "HSync=PCLK/Htotal/1000", Q_NULLPTR));
        label_thotal->setText(QApplication::translate("MainWindow", "Htotal = HSW + HBP + HAD + HFP", Q_NULLPTR));
        label_vtotal->setText(QApplication::translate("MainWindow", "Vtotal = VSW + VBP + VAD + VFP", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Dclk", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TH", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Hz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
