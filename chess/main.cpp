#include <windows.h>
#include <GL/glut.h>


void display() {

	glClear(GL_COLOR_BUFFER_BIT);




	glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 0.0);
     glVertex2f(1.0, 1.0);
	 glVertex2f(0.0, 1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249 );

    glVertex2f(1.0, 0.0);
    glVertex2f(2.0, 0.0);
     glVertex2f(2.0, 1.0);
	 glVertex2f(1.0, 1.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23, 32, 42 );

    glVertex2f(1.0, 1.0);
    glVertex2f(2.0, 1.0);
     glVertex2f(2.0, 2.0);
	 glVertex2f(1.0, 2.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);

    glVertex2f(0.0, 1.0);
    glVertex2f(1.0, 1.0);
     glVertex2f(1.0, 2.0);
	 glVertex2f(0.0, 2.0);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3ub( 247, 249, 249);

    glVertex2f(0.0, 0.0);
    glVertex2f(-1.0, 0.0);
     glVertex2f(-1.0, 1.0);
	 glVertex2f(0.0, 1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23, 32, 42);

    glVertex2f(-1.0, 1.0);
    glVertex2f(0.0, 1.0);
     glVertex2f(0.0, 2.0);
	 glVertex2f(-1.0, 2.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23, 32, 42);

    glVertex2f(-1.0, 0.0);
    glVertex2f(-2.0, 0.0);
     glVertex2f(-2.0, 1.0);
	 glVertex2f(-1.0, 1.0);
    glEnd();

       glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);

    glVertex2f(-1.0, 1.0);
    glVertex2f(-2.0, 1.0);
     glVertex2f(-2.0, 2.0);
	 glVertex2f(-1.0, 2.0);
    glEnd();

       glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);

    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, -1.0);
     glVertex2f(1.0, -1.0);
	 glVertex2f(1.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23, 32, 42);

    glVertex2f(1.0, 0.0);
    glVertex2f(1.0, -1.0);
     glVertex2f(2.0, -1.0);
	 glVertex2f(2.0, 0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23, 32, 42);

    glVertex2f(0.0, -1.0);
    glVertex2f(0.0, -2.0);
     glVertex2f(1.0, -2.0);
	 glVertex2f(1.0, -1.0);
    glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);

    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, -2.0);
     glVertex2f(2.0, -2.0);
	 glVertex2f(2.0, -1.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23, 32, 42);

    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, -1.0);
     glVertex2f(-1.0, -1.0);
	 glVertex2f(-1.0, 0.0);
    glEnd();

        glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);

    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -1.0);
     glVertex2f(-2.0, -1.0);
	 glVertex2f(-2.0, 0.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23, 32, 42);

    glVertex2f(-1.0, -1.0);
    glVertex2f(-1.0, -2.0);
     glVertex2f(-2.0, -2.0);
	 glVertex2f(-2.0, -1.0);
    glEnd();


       glBegin(GL_POLYGON);
    glColor3ub(247, 249, 249);

    glVertex2f(0.0, -1.0);
    glVertex2f(-1.0, -1.0);
     glVertex2f(-1.0, -2.0);
	 glVertex2f(0.0, -2.0);
    glEnd();




	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1200,1000);
    glutCreateWindow("chess");
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(-6.0,6.0,-6.0,6.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
