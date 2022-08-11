#include "mainwindow.h"
#include "ui_mainwindow.h"

double firstNum;
bool second_num = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(digitPressed()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(digitPressed()));


   connect(ui->pushButton_negative, SIGNAL(released()), this, SLOT(on_pushButton_unary_operation_released()));
   connect(ui->pushButton_mod, SIGNAL(released()), this, SLOT(on_pushButton_unary_operation_released()));

   connect(ui->pushButton_plus, SIGNAL(released()), this, SLOT(on_pushButton_binary_operation_released()));
   connect(ui->pushButton_minus, SIGNAL(released()), this, SLOT(on_pushButton_binary_operation_released()));
   connect(ui->pushButton_multiply, SIGNAL(released()), this, SLOT(on_pushButton_binary_operation_released()));
   connect(ui->pushButton_divide, SIGNAL(released()), this, SLOT(on_pushButton_binary_operation_released()));

   ui->pushButton_plus->setCheckable(true);
   ui->pushButton_minus->setCheckable(true);
   ui->pushButton_multiply->setCheckable(true);
   ui->pushButton_divide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digitPressed(){
    QPushButton* button = (QPushButton*)sender(); //returns a pointer to a QObject (in this case, push button)
    double labelNum;
    QString newLabel;
    if((ui->pushButton_plus->isChecked() || ui->pushButton_minus->isChecked() || ui->pushButton_multiply->isChecked()
       || ui->pushButton_divide->isChecked()) && !second_num){
        labelNum = button->text().toDouble();
        second_num = true;
        newLabel = QString::number(labelNum, 'g', 15);
    }
    else{
        if(ui->label->text().contains('.') && button->text() == "0"){
            newLabel = ui->label->text() + button->text();
        }
        else{
            labelNum = (ui->label->text() + button->text()).toDouble();
            newLabel = QString::number(labelNum, 'g', 15);
        }
    }
    ui->label->setText(newLabel);
}


void MainWindow::on_pushButton_decimal_released(){
    for(const auto& c : ui->label->text()){
        if(c == '.'){
            return;
        }
    }
    ui->label->setText(ui->label->text() + ".");
}

void MainWindow::on_pushButton_unary_operation_released(){
    QPushButton* button = (QPushButton*) sender();
    double labelNum;
    if(button->text() == "+/-"){
        labelNum = (ui->label->text()).toDouble();
        labelNum *= -1;
        ui->label->setText(QString::number(labelNum, 'g', 15));
    }
    else if(button->text() == "%"){
        labelNum = (ui->label->text()).toDouble();
        labelNum *= 0.01;
        ui->label->setText(QString::number(labelNum, 'g', 15));
    }
}

void MainWindow::on_pushButton_clear_released(){
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    ui->pushButton_multiply->setChecked(false);

    second_num = false;

    ui->label->setText("0");
}

void MainWindow::on_pushButton_equals_released(){
    double labelNum, secondNum;
    QString newLabel;
    secondNum = ui->label->text().toDouble();
    if(ui->pushButton_plus->isChecked()){
        labelNum = firstNum + secondNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_plus->setChecked(false);
    }
    else if(ui->pushButton_minus->isChecked()){
        labelNum = firstNum - secondNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_minus->setChecked(false);
    }
    else if(ui->pushButton_multiply->isChecked()){
        labelNum = firstNum * secondNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_multiply->setChecked(false);
    }
    else if(ui->pushButton_divide->isChecked()){
        labelNum = firstNum / secondNum;
        newLabel = QString::number(labelNum, 'g', 15);
        ui->label->setText(newLabel);
        ui->pushButton_divide->setChecked(false);
    }
    second_num = false;
}

void MainWindow::on_pushButton_binary_operation_released(){
    QPushButton* button = (QPushButton*)sender();
    firstNum = (ui->label->text()).toDouble();

    button->setChecked(true);
}

