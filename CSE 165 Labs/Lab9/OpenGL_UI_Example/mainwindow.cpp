#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    lastX = event->x();
    lastY = event->y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    float xAtRelease = event->x();
    float yAtRelease = event->y();

    float dx = xAtRelease - lastX;
    float dy = yAtRelease - lastY;

    float x = ui->openGLWidget->xtran;
    float y = ui->openGLWidget->ytran;

    ui->openGLWidget->setTranslationMouse(x + (dx / 100), y - (dy / 100));

    lastX = event->x();
    lastY = event->y();

}

void MainWindow::keyPressEvent(QKeyEvent* event){
    float x_t = ui->openGLWidget->xtran;
    float y_t = ui->openGLWidget->ytran;

    float x_r = ui->openGLWidget->xrot;
    float y_r = ui->openGLWidget->yrot;
    float z_r = ui->openGLWidget->zrot;

    float xtran = 0.0, ytran = 0.0, xrot = 0.0, yrot = 0.0, zrot = 0.0;

    if (event->key() == Qt::Key_Up) {
        ytran = +0.05f;
    }

    if (event->key() == Qt::Key_Down) {
        ytran = -0.05f;
    }

    if(event->key() == Qt::Key_Left){
        xtran = -0.05f;
    }

    if(event->key() == Qt::Key_Right){
        xtran = +0.05f;
    }

    if(event->key() == Qt::Key_W){
        xrot = +5.0f;
    }

    if(event->key() == Qt::Key_S){
        xrot = -5.0f;
    }

    if(event->key() == Qt::Key_A){
        yrot = -5.0f;
    }

    if(event->key() == Qt::Key_D){
        yrot = +5.0f;
    }

    if(event->key() == Qt::Key_Q){
        zrot = -5.0f;
    }

    if(event->key() == Qt::Key_E){
        zrot = +5.0f;
    }
    ui->openGLWidget->setTranslation(x_t + xtran, y_t + ytran);
    ui->openGLWidget->setRotation(x_r + xrot, y_r + yrot, z_r + zrot);
}

