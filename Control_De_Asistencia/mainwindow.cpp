#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QFile>
#include <QStandardItemModel>
#include<QFileDialog>
#include<QTextStream>
#include<QString>
#include<QMessageBox>
#include"dialog.h"
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nModel= new QStandardItemModel(this);
    ui->tableView->setModel(nModel);
    QStringList Titulos;
    Titulos <<"Alumno"<<"Fecha "<<"Grupo "<<"Acistencia ";
    nModel->setHorizontalHeaderLabels(Titulos);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNuevo_archivo_triggered()
{
    nModel->setRowCount(3);
    nModel->setColumnCount(4);


   /* nModel->setItem(0,0,new QStandardItem("Alumno"));
    nModel->setItem(0,1,new QStandardItem("Fecha"));
    nModel->setItem(0,2,new QStandardItem("Grupo"));
    nModel->setItem(0,4,new QStandardItem("Acistencia"));*/


}

void MainWindow::on_pushButton_clicked()
{
    QDate Fecha = QDate::currentDate();
    QTime hora = QTime::currentTime();
    QString HOY= Fecha.toString();
    QString HOY2 = hora.toString();
     int f = ui->Filas->value();
     int c =ui->Columnas->value();
     Grupo = ui->Grupostxt->text();

    f=f-1;
    if(f<4){f=3;}
    c=c-1;
    QString a;
    switch(Verificador){
    case 1:
        a="Asistio";
        break;
    case 2:
        a="No Asistio";
        break;
    case 3:
        a="Tarde";
        break;
    }
    if(f!=0 && c!=0){
    nModel->setItem(c,2,new QStandardItem(Grupo));
    nModel->setItem(c,1,new QStandardItem(HOY+HOY2));
    nModel->setItem(c,f,new QStandardItem(a));
}else{ QMessageBox::information(this,tr("Error 12"),tr("Verifique el Numero"));}



}

void MainWindow::on_radioButton_clicked()
{
 Verificador=1;
}

void MainWindow::on_radioButton_2_clicked()
{
    Verificador=2;
}

void MainWindow::on_radioButton_3_clicked()
{
    Verificador=3;
}

void MainWindow::on_actionAcerca_De_triggered()
{
    Dialog *Ventana = new Dialog();
    Ventana->show();
}

void MainWindow::on_action_Guarda_triggered()
{
auto filename= QFileDialog::getSaveFileName(this,"Guardar",QDir::rootPath(),"CSV File(*.*)");
if(filename.isEmpty()){
  return;
}
QFile file(filename);
if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
return;
}
QTextStream xout(&file);
const int Filas=nModel->rowCount();
const int Columnas=nModel->columnCount();

for(int ix=0;ix<Filas ;++ix){
    xout << getValueAt(ix,0);
    for(int jx=1;jx<Columnas; ++jx){
        xout <<", "<< getValueAt(ix,jx);
    }
    xout<<"\n";
}
file.flush();
file.close();
}

void MainWindow::on_action_Abrir_triggered()
{
    auto filename = QFileDialog::getOpenFileName(this,"Abrir",QDir::rootPath(),"csv file (*.*)");
    Grupo = filename;
    if (filename.isEmpty()){
        return;
    }
        QFile file(filename);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }

        QTextStream xin(&file);
        int ix=0;
        while(!xin.atEnd()){
            nModel->setRowCount(ix);
            auto line = xin.readLine();
            auto values = line.split(",");
            const int colCount =values.size();
            nModel->setColumnCount(colCount);
            for(int jx=0;jx < colCount;++jx){
                setValueAt(ix,jx,values.at(jx));

            }
            ++ix;
        }
        file.close();
        /*nModel->setItem(0,0,new QStandardItem("Alumno"));
        nModel->setItem(0,1,new QStandardItem("Fecha"));
        nModel->setItem(0,2,new QStandardItem("Grupo"));
        nModel->setItem(0,4,new QStandardItem("Acistencia"));*/
}

void MainWindow::setValueAt(int ix, int jx, const QString &value)
{
    if(!nModel->item(ix,jx)){
        nModel->setItem(ix,jx,new QStandardItem(value));
    }else {
     nModel->item(ix,jx)->setText(value);
    }
}
QString MainWindow::getValueAt(int ix, int jx)
{
    if(!nModel->item(ix,jx)){
        return "";
    }
    return nModel->item(ix,jx)->text();
}
