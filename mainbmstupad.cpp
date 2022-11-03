#include "mainbmstupad.h"
#include "ui_mainbmstupad.h"

MainBmstuPad::MainBmstuPad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainBmstuPad)
{
    ui->setupUi(this);
}

MainBmstuPad::~MainBmstuPad()
{
    delete ui;
}

