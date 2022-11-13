
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416


GLfloat position4 = 1.5f;
GLfloat speed4 = 0.05f;

GLfloat position5 = 3.0f;
GLfloat speed5 = 0.05f;




GLfloat position = 1.5f;
GLfloat speed = 0.025f;


GLfloat position3 = 1.0f;
GLfloat speed3 =0.05f;


GLfloat position1 = 1.0f;
GLfloat speed1 =-0.5f;
void boat2(int value)
{
   if(position1 <- 1.0)
        position1 = 9.0f;

    position1 += speed1;

	glutPostRedisplay();

	glutTimerFunc(100, boat2, 0);
}



void bird()
{
      glColor3d(0,0,0);
      glPushMatrix();
      glTranslatef(position4,0.0f, 0.0f);
      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(11.f, 18.0f);
      glVertex2f(10.0f,19.0f);
      glVertex2f(9.0f, 18.0f);
      glVertex2f(8.0f, 19.0);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(14.f, 15.0f);
       glVertex2f(13.0f,16.0f);
       glVertex2f(12.0f, 15.0f);
      glVertex2f(11.0f, 16.0);


      glEnd();


       glPopMatrix();



   glFlush();
}

void bird2(){

    glColor3d(0,0,0);
      glPushMatrix();
      glTranslatef(position5,0.0f, 0.0f);
      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(11.f, 18.0f);
      glVertex2f(10.0f,19.0f);
      glVertex2f(9.0f, 18.0f);
      glVertex2f(8.0f, 19.0);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 0.0f);
      glVertex2f(14.f, 15.0f);
       glVertex2f(13.0f,16.0f);
       glVertex2f(12.0f, 15.0f);
      glVertex2f(11.0f, 16.0);


      glEnd();


       glPopMatrix();



   glFlush();
}

void boat2(){

    glColor3d(1,0,0);

    glPushMatrix();

    glTranslatef(position,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(120, 0, 0);
	glVertex2f(6.0f, 3.0f);
	glColor3ub(150, 0, 0);
	glVertex2f(7.0f, 1.0f);
	glColor3ub(200, 0, 0);
	glVertex2f(10.0f,1.0f);
	glVertex2f(12.0f, 3.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 215, 0);

	glVertex2f(7.0f, 5.0f);
	glColor3ub(249, 255, 0);
	glVertex2f(7.0f, 3.0f);
	glColor3ub(226, 225, 0);
	glVertex2f(10.0f,3.0f);
	glColor3ub(249, 220, 240);
	glVertex2f(10.0f, 5.0f);

	glEnd();


    glPopMatrix();

	glutSwapBuffers();
}


void boat3(){

    glColor3d(1,0,0);

    glPushMatrix();

    glTranslatef(position5,0.15f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(120, 0, 0);
	glVertex2f(6.0f, 3.0f);
	glColor3ub(150, 0, 0);
	glVertex2f(7.0f, 1.0f);
	glColor3ub(200, 0, 0);
	glVertex2f(10.0f,1.0f);
	glVertex2f(12.0f, 3.0f); //glColor3ub(150, 0, 0);glColor3ub(200, 0, 0);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 215, 0);

	glVertex2f(7.0f, 5.0f);
	glColor3ub(249, 255, 0);
	glVertex2f(7.0f, 3.0f);//glColor3ub(249, 255, 0);glColor3ub(226, 225, 0);glColor3ub(249, 220, 240);
	glColor3ub(226, 225, 0);
	glVertex2f(10.0f,3.0f);
	glColor3ub(249, 220, 240);
	glVertex2f(10.0f, 5.0f);

	glEnd();


    glPopMatrix();

	glutSwapBuffers();
}










void sun()
{
    int i;

	GLfloat x=0; GLfloat y=17.0f; GLfloat radius =1.8f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 150, 0);
		glVertex2f(x, y);
		glColor3ub(235, 100, 10); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
			glColor3ub(255, 80, 0);
		}
	glEnd();
}














void update(int value) {

    if(position <-2.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(200, update, 0);
}

void update2(int value) {

    if(position4 <-2.0)
        position4 = 1.0f;

    position4 -= speed4;

	glutPostRedisplay();


	glutTimerFunc(200, update2, 0);
}

void update3(int value) {

    if(position5 <-6.0)
        position5 = 6.0f;

    position5 -= speed5;

	glutPostRedisplay();


	glutTimerFunc(200, update3, 0);
}










void river() {


	glBegin(GL_QUADS);
    glColor3ub(40, 170, 214);
	glVertex2f(-20.0, -20.0);
	glColor3ub(38, 180, 214);
	glVertex2f(-20.0, 6.0);
	glColor3ub(38, 250, 214);
	glVertex2f(20.0, 6.0);
	glColor3ub(38, 155, 150);
	glVertex2f(20.0, -20.0);

	glEnd();


}








void house(){
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.10, 0.0);
	glVertex2f(-4.0, 0.0);
	glColor3f(1.0, 0.6, 0.0);
	glVertex2f(-4.0, 4.0);
	glColor3f(1.0, 0.7, 0.0);
	glVertex2f(-11.0, 4.0);
	glColor3f(1.0, 0.10, 0.2);
	glVertex2f(-11.0, 0.0);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex2f(-11.0, 4.0);
	glVertex2f(-4.0, 4.0);
	glColor3f(0.6f, 0.6f, 0.6f);
	glVertex2f(-6.0, 6.0);
	glVertex2f(-13.0, 6.0);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(210, 105, 30);
	glVertex2f(-9.0, 2.0);
	glVertex2f(-9.0, 0.0);
	glVertex2f(-6.0, 0.0);
	glVertex2f(-6.0, 2.0);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(210,180,140);
    glVertex2f(-7.5,2.0);
    glVertex2f(-7.5,0.0);
    glVertex2f(-7.25,0.0);
    glVertex2f(-7.25,2.0);

    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.73, 0.56, 0.56);
	glVertex2f(-11.0, 4.0);
	glColor3f(0.73, 0.56, 0.56);
	glVertex2f(-15.0, 4.0);
	glColor3f(0.8, 0.196, 0.9);
	glVertex2f(-15.0, 0.0);
	glColor3f(0.8, 0.196, 0.9);
	glVertex2f(-11.0, 0.0);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(210, 105, 30);
	glVertex2f(-14.0, 3.0);
	glVertex2f(-14.0, 1.0);
	glVertex2f(-12.0, 1.0);
	glVertex2f(-12.0, 3.0);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(0.36, 0.25, 0.20);
	glVertex2f(-15.0, 4.0);
	glVertex2f(-13.0, 6.0);
	glVertex2f(-11.0, 4.0);

	glEnd();

}

void grass(){


    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-1.5, -18.0);
	glVertex2f(-0.5, -18.0);
	glVertex2f(-1.0, -17.0);

	glEnd();




	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-7.0, -7.0);
	glVertex2f(-6.5, -8.0);
	glVertex2f(-7.5, -8.0);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(2.0, -15.0);
	glVertex2f(1.5, -16.0);
	glVertex2f(2.5, -16.0);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-2.0, -14.0);
	glVertex2f(-2.5, -13.0);
	glVertex2f(-3.0, -14.0);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(1.0, -4.0);
	glVertex2f(0.5, -5.0);
	glVertex2f(1.5, -5.0);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-9.5, -3.0);
	glVertex2f(-9.0, -4.0);
	glVertex2f(-10.0, -4.0);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-14.5f, -10.0f);
	glVertex2f(-14.0f, -11.0f);
	glVertex2f(-15.0f, -11.0f);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-17.0f, -5.0f);
	glVertex2f(-16.5f, -6.0f);
	glVertex2f(-17.5f, -6.0f);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-18.5f, -17.0f);
	glVertex2f(-18.0f, -18.0f);
	glVertex2f(-19.0f, -18.0f);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-13.5f, -5.0f);
	glVertex2f(-13.0f, -6.0f);
	glVertex2f(-14.0f, -6.0f);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-17.5, -8.0);
	glVertex2f(-17.0, -9.0);
	glVertex2f(-18.0, -9.0);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-10.5, -10.0);
	glVertex2f(-10.0, -11.0);
	glVertex2f(-11.0, -11.0);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-14.5, -17.0);
	glVertex2f(-14.0, -18.0);
	glVertex2f(-15.0, -18.0);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-1.5, -1.0);
	glVertex2f(-1.0, -2.0);
	glVertex2f(-2.0, -2.0);

	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-4.5, -18.0);
	glVertex2f(-4.0, -19.0);
	glVertex2f(-5.0, -19.0);

	glEnd();

}




void straw(){
	glBegin(GL_POLYGON);
	glColor3ub(255, 219, 77);
	glVertex2f(-16.0, 0.0);
	glColor3ub(255, 219, 77);
	glVertex2f(-16.0, 2.5);
	glColor3ub(255, 219, 77);
	glVertex2f(-19.0, 2.5);
	glColor3ub(255, 219, 77);
	glVertex2f(-19.0, 0.0);

	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 219, 77);
    glVertex2f(-18.5, 3.5);
	glVertex2f(-16.5, 3.5);
	glVertex2f(-16.0, 2.5);
	glVertex2f(-19.0, 2.5);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255, 219, 77);
	glVertex2f(-18.5, 3.5);
	glVertex2f(-16.5, 3.5);
	glVertex2f(-17.5, 5.0);

	glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(255, 219, 77);
    glVertex2f(-17.5,5.5);
    glVertex2f(-17.5,0.0);

    glEnd();


}



void way()
{
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-9.5,0.0);
    glColor3ub(153, 160, 102);
    glVertex2f(-5.5,0.0);
    glColor3ub(153, 180, 102);
    glVertex2f(-1.0,-5.0);
    glColor3ub(153, 190, 102);
    glVertex2f(-3.5,-7.0);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-3.5,-7.0);
    glColor3ub(153, 160, 102);
    glVertex2f(-3.5,-8.5);
    glColor3ub(153, 180, 102);
    glVertex2f(-0.75,-9.0);
    glColor3ub(153, 190, 102);
    glVertex2f(-1.0,-5.0);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-3.5,-7.0);
    glColor3ub(153, 160, 102);
    glVertex2f(-0.75,-9.0);
    glColor3ub(153, 180, 102);
    glVertex2f(-9.0,-20.0);
     glColor3ub(153, 190, 102);
    glVertex2f(-14.0,-20.5);

    glEnd();


}

void sky(){
	glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
	glVertex2f(-20.0, 20.0);
	glColor3ub(55, 210, 255);
	glVertex2f(-20.0, 6.0);
	glColor3ub(60, 220, 255);
	glVertex2f(20.0, 6.0);
	glColor3ub(75, 250, 245);
	glVertex2f(20.0, 20.0);

	glEnd();
}



void tree(){

    glBegin(GL_QUADS);
	glColor3ub(128, 0, 0);
	glVertex2f(-3.0, 0.0);
	glColor3ub(130, 0, 0);//glColor3ub(130, 0, 0);glColor3ub(140, 0, 0);glColor3ub(180, 0, 10);
	glVertex2f(-1.0, 0.0);
	glColor3ub(140, 0, 0);
	glVertex2f(-1.0, 7.0);
    glColor3ub(180, 0, 10);
	glVertex2f(-3.0, 7.0);

	glEnd();



	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-6.0, 7.0);
	glColor3f(0.0f, 0.20f, 0.0f);
	glVertex2f(-2.0, 10.0);
	glColor3f(0.0f, 0.40f, 0.0f);
	glVertex2f(2.0, 7.0);
	glColor3f(0.0f, 0.60f, 0.0f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-7.0, 9.0);
	glColor3f(0.0f, 0.20f, 0.0f);
	glVertex2f(3.0, 9.0);
	glColor3f(0.0f, 0.40f, 0.0f);
	glVertex2f(-2.0, 12.0);

	glEnd();



}

void tree1(){


    glBegin(GL_QUADS);
	glColor3ub(128, 0, 0);
	glVertex2f(9.0, 6.0);
	glColor3ub(130, 0, 0);
	glVertex2f(9.5, 6.0);
	glColor3ub(140, 0, 0);
	glVertex2f(9.5, 9.0);
	glColor3ub(180, 0, 10);
	glVertex2f(9.0, 9.0);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(8.5, 9.0);
	glVertex2f(10.0, 9.0);
	glVertex2f(9.25, 11.0);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(8.0, 9.5);
	glVertex2f(10.5, 9.5);
	glColor3f(0.0f, 0.80f, 0.0f);
	glVertex2f(9.25, 11.0);

	glEnd();





}



void ground(){




	glBegin(GL_QUADS);
	glColor3ub(220, 255, 77);
	glVertex2f(10.0, 0.0);
	glColor3ub(220, 255, 77);
	glVertex2f(14.0, -5.0);
	glColor3ub(102, 110, 60);
	glVertex2f(14.0, -15.0);
	glColor3ub(102, 110, 60);
    glVertex2f(10.0,-20.0);

	glEnd();




    glBegin(GL_QUADS);
	glColor3ub(102, 255, 51);
	glColor3ub(220, 255, 77);
	glVertex2f(-20.0, 0.0);
	glColor3ub(102, 255, 52);
	glColor3ub(220, 255, 77);
	glVertex2f(10.0, 0.0);
	glColor3ub(102, 110, 60);
	glVertex2f(10.0, -20.0);
	glColor3ub(102, 110, 60);
	glVertex2f(-20.0,-20.0);


	glEnd();



}

void boat(){

	glBegin(GL_QUADS);
	glColor3ub(165, 42, 42);
	glVertex2f(13.0, -12.0);
	glColor3ub(150, 0, 0);
	glVertex2f(15.0, -14.0);
	glColor3ub(200, 0, 10);
	glVertex2f(18.0,-14.0);
	glColor3ub(200, 0, 0);
	glVertex2f(20.0, -12.0);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(192, 192, 192);
	glVertex2f(13.5, -11.0);
	glColor3ub(192, 0, 192);
	glVertex2f(13.75, -11.0);
	glColor3ub(192, 192, 192);
	glVertex2f(13.75,-16.0);
	glColor3ub(192, 0, 192);
	glVertex2f(13.5, -16.0);

	glEnd();
}
void boat1()
{
    glBegin(GL_QUADS);
	glColor3ub(55, 0, 0);
	glVertex2f(13.0, -2.0);
	glColor3ub(139, 10, 10);
	glVertex2f(15.0, -4.0);
	glColor3ub(135, 10, 20);
	glVertex2f(18.0,-4.0);
	glColor3ub(100, 10, 30);
	glVertex2f(20.0, -2.0);

	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255, 215, 0);
	glVertex2f(15.0, 0.0);
	glColor3ub(249, 255, 0);
	glVertex2f(15.0, -2.0);
	glColor3ub(226, 225, 0);
	glVertex2f(18.0,-2.0);
	glColor3ub(249, 220, 240);
	glVertex2f(18.0, 0.0);

	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
	glVertex2f(13.5, -1.0);
	glVertex2f(13.75, -1.0);
	glVertex2f(13.75,-9.0);
	glVertex2f(13.5, -9.0);

	glEnd();

}

void hill(){
    glBegin(GL_TRIANGLES);
	glColor3ub(128, 128, 0);
	glVertex2f(-20.5,4.0);
	glColor3ub(110, 80, 10);
	glVertex2f(-18.5,15.0);
	glColor3ub(90, 50, 30);
	glVertex2f(-16.5, 4.0);
	glColor3ub(70, 40, 50);
    glEnd();
}


void display() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2);

    sky();
    hill();
    glPushMatrix();
    glTranslatef(0.16,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.32,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.48,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.64,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.80,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.96,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.12,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.28,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.44,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.60,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.76,0.0, 0.0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.92,0.0, 0.0);
    hill();
    glPopMatrix();




    glPushMatrix();
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.12,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.24,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.36,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.48,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.12,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.24,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.36,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.48,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.60,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.72,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.84,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.96,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.08,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.20,0.0, 0.0);
    tree1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-1.32,0.0, 0.0);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.44,0.0, 0.0);
    tree1();
    glPopMatrix();









    river();

    ground();
    way();

    boat2();


    glPushMatrix();
    glTranslatef(0.65,0.0, 0.0);
    way();
    glPopMatrix();




    grass();
    glPushMatrix();
    boat1();
    glPopMatrix();
    boat();

    glPushMatrix();
    boat3();
    glPopMatrix();


    boat2();




    glPushMatrix();
    glTranslatef(-0.65,0.0, 0.0);
    tree();
    glPopMatrix();


    house();
    glPushMatrix();
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.65,0.0, 0.0);
    house();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.02,0.0, 0.0);
    straw();
    glPopMatrix();






    glPushMatrix();
    sun();
    glPopMatrix();









    glPushMatrix();
    bird();
    glPopMatrix();


    glPushMatrix();
    bird2();
    glPopMatrix();







    glFlush();
	glutSwapBuffers();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1400, 750);
	glutInitWindowPosition(50,50);
	glutCreateWindow(" VILLAGE");
	glutDisplayFunc(display);
	glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    gluOrtho2D(-20,20,-20,20);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);



    glutMainLoop();
	return 0;
}
