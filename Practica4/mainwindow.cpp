#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "iostream"
#include "Neurona.h"
#include "Administra.h"

Administra a;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonInsertarI_clicked()
{
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
    QString aux;
    Neurona n;
    QString x;
    x = "Agregado";

    aux = ui->lineId->text();
    id = aux.toInt();
    aux = ui->lineVoltaje->text();
    voltaje = aux.toFloat();
    aux = ui->linePosX->text();
    posicion_x = aux.toInt();
    aux = ui->linePosY->text();
    posicion_y = aux.toInt();
    aux = ui->spinBoxR->text();
    red = aux.toInt();
    aux = ui->spinBox_G->text();
    green = aux.toInt();
    aux = ui->spinBox_B->text();
    blue = aux.toInt();

    n.setId(id);
    n.setVoltaje(voltaje);
    n.setPosicion_x(posicion_x);
    n.setPosicion_y(posicion_y);
    n.setRed(red);
    n.setBlue(blue);
    n.setGreen(green);

    a.agregarInicio(n);
    ui->notificacion->setPlainText("Dato agregado al Inicio");

}


void MainWindow::on_pushButtonInsertarF_clicked()
{
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
    QString aux;
    Neurona n;
    QString x;
    x = "Agregado";

    aux = ui->lineId->text();
    id = aux.toInt();
    aux = ui->lineVoltaje->text();
    voltaje = aux.toFloat();
    aux = ui->linePosX->text();
    posicion_x = aux.toInt();
    aux = ui->linePosY->text();
    posicion_y = aux.toInt();
    aux = ui->spinBoxR->text();
    red = aux.toInt();
    aux = ui->spinBox_G->text();
    green = aux.toInt();
    aux = ui->spinBox_B->text();
    blue = aux.toInt();

    n.setId(id);
    n.setVoltaje(voltaje);
    n.setPosicion_x(posicion_x);
    n.setPosicion_y(posicion_y);
    n.setRed(red);
    n.setBlue(blue);
    n.setGreen(green);

    a.agregarFinal(n);
    ui->notificacion->setPlainText("Dato agregado al Final");
}

