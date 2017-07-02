#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->clear();
    ui->comboBox->insertItem(0,"Выбор автомобиля");
    ui->comboBox->insertItem(1,"Alfa Romeo");
    ui->comboBox->insertItem(2,"Audi");
    ui->comboBox->insertItem(3,"Bmw");
    ui->comboBox->insertItem(4,"Citroen");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_aboutButton_clicked()           //About button
{
    QMessageBox::warning(0, "О программе ", "TODO потом напишем тут что-нибудь");
}

void MainWindow::on_exitButton_clicked()            //Exit button
{
    close();
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(ui->comboBox->currentIndex()==1)
    {
        ui->comboBoxModel->clear();
        ui->comboBoxModel->insertItem(0,"Модель");
        ui->comboBoxModel->insertItem(1,"145 1,4i/1,6i/1,7i");
        ui->comboBoxModel->insertItem(2,"145 D-Turbo");
        ui->comboBoxModel->insertItem(3,"145 Twin Spark");
        ui->comboBoxModel->insertItem(4,"146 1,4i/1,6i/1,7");
        ui->comboBoxModel->insertItem(5,"146 D-Turbo");
        ui->comboBoxModel->insertItem(6,"146 Twin Spark");
        ui->comboBoxModel->insertItem(7,"147");
        ui->comboBoxModel->insertItem(8,"155 1,6i/1,8i/2,0i 16V");
        ui->comboBoxModel->insertItem(9,"155 1,7i/2,5i");
        ui->comboBoxModel->insertItem(10,"155 1,9D-Turbo");
        ui->comboBoxModel->insertItem(11,"156 1,9 JTD");
        ui->comboBoxModel->insertItem(12,"156 1,9 JTD");
        ui->comboBoxModel->insertItem(13,"156 2,0i");
        ui->comboBoxModel->insertItem(14,"156 2,0i");
        ui->comboBoxModel->insertItem(15,"156 2,4 JTD");
        ui->comboBoxModel->insertItem(16,"156 2,4 JTD");
        ui->comboBoxModel->insertItem(17,"156");
        ui->comboBoxModel->insertItem(18,"156");
        ui->comboBoxModel->insertItem(19,"159");
        ui->comboBoxModel->insertItem(20,"164");
        ui->comboBoxModel->insertItem(21,"166 2,4 JTD");
        ui->comboBoxModel->insertItem(22,"166 Benziner");
        ui->comboBoxModel->insertItem(23,"Brera");
        ui->comboBoxModel->insertItem(24,"GT 1,9D/3,2i");
        ui->comboBoxModel->insertItem(25,"GT 2,0 JTS");
        ui->comboBoxModel->insertItem(26,"GTV 1,8i");
        ui->comboBoxModel->insertItem(27,"GTV 2,0i");
        ui->comboBoxModel->insertItem(28,"GTV 3,0i/3,2i");
        ui->comboBoxModel->insertItem(29,"Giulietta");
        ui->comboBoxModel->insertItem(30,"MiTo 1,3/1,6 JTDM");
        ui->comboBoxModel->insertItem(31,"MiTo");
        ui->comboBoxModel->insertItem(32,"Spider 1,8i");
        ui->comboBoxModel->insertItem(33,"Spider 2,0i");
        ui->comboBoxModel->insertItem(34,"Spider 3,0i/3,2i");
        ui->comboBoxModel->insertItem(35,"Spider");
    }
    else if(ui->comboBox->currentIndex()==2)
    {
        ui->comboBoxModel->clear();
        ui->comboBoxModel->insertItem(0,"Модель");
        ui->comboBoxModel->insertItem(1,"100");
        ui->comboBoxModel->insertItem(2,"80 2.3i");
        ui->comboBoxModel->insertItem(3,"80");
        ui->comboBoxModel->insertItem(4,"A1");
        ui->comboBoxModel->insertItem(5,"A2");
        ui->comboBoxModel->insertItem(6,"A3 Cabrio");
        ui->comboBoxModel->insertItem(7,"A3");
        ui->comboBoxModel->insertItem(8,"A3");
        ui->comboBoxModel->insertItem(9,"A3");
        ui->comboBoxModel->insertItem(10,"A4 Cabrio");
        ui->comboBoxModel->insertItem(11,"A4 allroad ");
        ui->comboBoxModel->insertItem(12,"A4");
        ui->comboBoxModel->insertItem(13,"A5 Cabriolet");
        ui->comboBoxModel->insertItem(14,"A5 Coupe");
        ui->comboBoxModel->insertItem(15,"A6 1,9D/2,5D");
        ui->comboBoxModel->insertItem(16,"A6 2,0i/3,0i");
        ui->comboBoxModel->insertItem(17,"A6 4,2i");
        ui->comboBoxModel->insertItem(18,"A6");
        ui->comboBoxModel->insertItem(19,"A7");
        ui->comboBoxModel->insertItem(20,"A8");
        ui->comboBoxModel->insertItem(21,"Avant RS2");
        ui->comboBoxModel->insertItem(22,"Cabriolet 2,3i");
        ui->comboBoxModel->insertItem(23,"Cabriolet");
        ui->comboBoxModel->insertItem(24,"Coupe 2,3i");
        ui->comboBoxModel->insertItem(25,"Coupe");
        ui->comboBoxModel->insertItem(26,"Q5");
        ui->comboBoxModel->insertItem(27,"Q6");
        ui->comboBoxModel->insertItem(28,"Q7");
        ui->comboBoxModel->insertItem(29,"R8");
        ui->comboBoxModel->insertItem(30,"RS3");
        ui->comboBoxModel->insertItem(31,"RS4 2,7 Turbo");
        ui->comboBoxModel->insertItem(32,"RS4 4,2 FSI");
        ui->comboBoxModel->insertItem(33,"RS6");
        ui->comboBoxModel->insertItem(34,"S2");
        ui->comboBoxModel->insertItem(35,"S3");
        ui->comboBoxModel->insertItem(36,"S4");
        ui->comboBoxModel->insertItem(37,"S5 Cabriolet");
        ui->comboBoxModel->insertItem(38,"S5 Coupe");
        ui->comboBoxModel->insertItem(39,"S5 Sportback");
        ui->comboBoxModel->insertItem(40,"S6");
        ui->comboBoxModel->insertItem(41,"S8");
        ui->comboBoxModel->insertItem(42,"TT");
        ui->comboBoxModel->insertItem(43,"V8");
    }
    else {
       ui->comboBoxModel->clear();
       qDebug() << ("заглушка");
    }
}

void MainWindow::on_comboBoxEngineYear_currentIndexChanged(const QString &arg1)
{
    if(ui->comboBox->currentIndex()==1)
    {
       // ui->comboBoxEngineYear->clear();
        ui->comboBoxEngineYear->insertItem(0, "1994-97             R134a        0.700kg ");
        ui->comboBoxEngineYear->insertItem(1, "1994-97             R134a        0.700kg ");
    }


}
