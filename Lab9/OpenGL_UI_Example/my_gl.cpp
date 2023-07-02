#include "my_gl.h"
#include <QDebug>

MyGL::MyGL(QWidget *parent) : QOpenGLWidget(parent)
{
    xrot = yrot = zrot = 0.0;
    xtran = ytran = 0.0;
}

void MyGL::initializeGL()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
}

void MyGL::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();


    glTranslatef(0.0, 0.0, -7.0);
    glRotatef(xrot, 1.0, 0.0, 0.0);
    glRotatef(yrot, 0.0, 1.0, 0.0);
    glRotatef(zrot, 0.0, 0.0, 1.0);

    glTranslatef(xtran, ytran, 0);


    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1, 0, 0);
    glVertex3f(0, 1, 0);

    glColor3f(1, 0, 1);
    glVertex3f(-0.5, 0, 0.5);

    glColor3f(0, 0, 1);
    glVertex3f(0.5, 0, 0.5);

    glColor3f(0, 1, 0);
    glVertex3f(0, 0, -0.7);

    glColor3f(1, 0, 1);
    glVertex3f(0, 1, 0);

    glColor3f(1, 1, 1);
    glVertex3f(-0.5, 0, 0.5);
    glEnd();

    glFlush();
}

void MyGL::resizeGL(int w, int h)
{
    //set viewport
    glViewport(0,0,w,h);

    //initialize projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glFrustum(-2, +2, -2, +2, 4.0, 10.0);

    //initialize modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void MyGL::setRotation(float x, float y, float z)
{
    xrot = x;
    yrot = y;
    zrot = z;
    update();
}

void MyGL::setTranslation(float x, float y){
    this->xtran = x;
    this->ytran = y;
    update();
}

void MyGL::setTranslationMouse(float x, float y){
    this->xtran = x;
    this->ytran = y;
    update();
}

