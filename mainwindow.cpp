#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
        ui->setupUi(this);
        //创建状态栏
        QStatusBar* stbar =this->statusBar();
        //设置到窗口中
        this->setStatusBar(stbar);
        //创建label控件
         QLabel* label = new QLabel("V1.0                                  Copyright@haivil.wu@outlook.com",this);

         //将标签设置到状态栏中
             stbar->addWidget(label);
}


MainWindow::~MainWindow()
{
    delete ui;
}
int hsw,hbp,had,hfp;
int vsw,vbp,vad,vfp;
int Htotal,Vtotal;
unsigned long int Pclk,FrameRate,MIpiclk,Bitclk,Byteclk,DSIpclk,FrameBit,Hsyc,Vsyc;

void MainWindow::on_btnCal_clicked()
{

    QString str = ui->lineEdit_HSW->text();//get hsw vaule
    hsw = str.toInt();
    str = ui->lineEdit_HBP->text();//get hbp value
    hbp = str.toInt();
    str = ui->lineEdit_HAD->text();//get had value
    had = str.toInt();
    str = ui->lineEdit_HFP->text();//get hfp value
    hfp = str.toInt();

    str = ui->lineEdit_VSW->text();//get vsp value
    vsw = str.toInt();
    str = ui->lineEdit_VBP->text();//get hbp value
    vbp = str.toInt();
    str = ui->lineEdit_VAD->text();//get hbp value
    vad = str.toInt();
    str = ui->lineEdit_VFP->text();//get hbp value
    vfp = str.toInt();

    unsigned long int Htotal = hsw + hbp + had + hfp;
    unsigned long int Vtotal = vsw + vbp + vad + vfp;
    unsigned long int Pclk = Htotal * Vtotal *60;
    unsigned long int FrameRate = Pclk / Htotal / Vtotal * 10 * 10 * 10 * 10 * 10 * 10/1000000;
    unsigned long int Mipiclk = Htotal * Vtotal * 24 * 60 / 4 / 2 ;
    unsigned long int Bitclk = Pclk * 24 / 4;
    unsigned long int Byteclk = Bitclk/8;
    unsigned long int DSIpclk = Byteclk * 4 / 8;
    unsigned long int FrameBit = Htotal * Vtotal *24;
    unsigned long int Hsync = Pclk/Htotal/1000;
    unsigned long int Vsync = Hsync*1000/Vtotal;
    //htotal vtotal
    str = str.sprintf("%ld",Htotal);
    ui->lineEdit_Htotal->setText(str);
    str = str.sprintf("%ld",Vtotal);
    ui->lineEdit_Vtotal->setText(str);
    //pclk
    str = str.sprintf("%ld",Pclk);
    ui->lineEdit_Pclk->setText(str);
    //frame rate
    str = str.sprintf("%ld",FrameRate);
    ui->lineEdit_FrameRate->setText(str);
    // mipi clk
    str = str.sprintf("%ld",Mipiclk);
    ui->lineEdit_MiPiclk->setText(str);
    //Bit clk
    str = str.sprintf("%ld",Bitclk);
    ui->lineEdit_Bitclk->setText(str);
    //Byte clk
    str = str.sprintf("%ld",Byteclk);
    ui->lineEdit_byteclk->setText(str);
    //dsi clk
    str = str.sprintf("%ld",DSIpclk);
    ui->lineEdit_dsiclk->setText(str);
    //frame bit
    str = str.sprintf("%ld",FrameBit);
    ui->lineEdit_framebit->setText(str);
    //hsync
    str = str.sprintf("%ld",Hsync);
    ui->lineEdit_Hsync->setText(str);
    //vsync
    str = str.sprintf("%ld",Vsync);
    ui->lineEdit_vsync->setText(str);
}

void MainWindow::on_btnCal_pressed()
{
    QString str = ui->lineEdit_HSW->text();//get hsw vaule
    hsw = str.toInt();
    str = ui->lineEdit_HBP->text();//get hbp value
    hbp = str.toInt();
    str = ui->lineEdit_HAD->text();//get had value
    had = str.toInt();
    str = ui->lineEdit_HFP->text();//get hfp value
    hfp = str.toInt();

    str = ui->lineEdit_VSW->text();//get vsp value
    vsw = str.toInt();
    str = ui->lineEdit_VBP->text();//get hbp value
    vbp = str.toInt();
    str = ui->lineEdit_VAD->text();//get hbp value
    vad = str.toInt();
    str = ui->lineEdit_VFP->text();//get hbp value
    vfp = str.toInt();
    unsigned long int Htotal = hsw + hbp + had + hfp;
    unsigned long int Vtotal = vsw + vbp + vad + vfp;
    unsigned long int Pclk = Htotal * Vtotal *60;
    unsigned long int FrameRate = Pclk / Htotal / Vtotal * 10 * 10 * 10 * 10 * 10 * 10/1000000;
    unsigned long int Mipiclk = Htotal * Vtotal * 24 * 60 / 4 / 2 ;
    unsigned long int Bitclk = Pclk * 24 / 4;
    unsigned long int Byteclk = Bitclk/8;
    unsigned long int DSIpclk = Byteclk * 4 / 8;
    unsigned long int FrameBit = Htotal * Vtotal *24;
    unsigned long int Hsync = Pclk/Htotal/1000;
    unsigned long int Vsync = Hsync*1000/Vtotal;
    //htotal vtotal
    str = str.sprintf("%ld",Htotal);
    ui->lineEdit_Htotal->setText(str);
    str = str.sprintf("%ld",Vtotal);
    ui->lineEdit_Vtotal->setText(str);
    //pclk
    str = str.sprintf("%ld",Pclk);
    ui->lineEdit_Pclk->setText(str);
    //frame rate
    str = str.sprintf("%ld",FrameRate);
    ui->lineEdit_FrameRate->setText(str);
    // mipi clk
    str = str.sprintf("%ld",Mipiclk);
    ui->lineEdit_MiPiclk->setText(str);
    //Bit clk
    str = str.sprintf("%ld",Bitclk);
    ui->lineEdit_Bitclk->setText(str);
    //Byte clk
    str = str.sprintf("%ld",Byteclk);
    ui->lineEdit_byteclk->setText(str);
    //dsi clk
    str = str.sprintf("%ld",DSIpclk);
    ui->lineEdit_dsiclk->setText(str);
    //frame bit
    str = str.sprintf("%ld",FrameBit);
    ui->lineEdit_framebit->setText(str);
    //hsync
    str = str.sprintf("%ld",Hsync);
    ui->lineEdit_Hsync->setText(str);
    //vsync
    str = str.sprintf("%ld",Vsync);
    ui->lineEdit_vsync->setText(str);
}
