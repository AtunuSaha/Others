#include <windows.h>
#include <GL/glut.h>


void display() {

	glClear(GL_COLOR_BUFFER_BIT);




	glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);

    glVertex2f(-4.0, 1.0);
    glVertex2f(4.0, 1.0);
     glVertex2f(4.0, 2.0);
	 glVertex2f(-4.0, 2.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(249, 255, 51);

    glVertex2f(-4.0, 2.0);
    glVertex2f(4.0, 2.0);
     glVertex2f(4.0, 3.0);
	 glVertex2f(-4.0, 3.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 190, 51 );

    glVertex2f(-4.0, 3.0);
    glVertex2f(4.0, 3.0);
     glVertex2f(4.0, 4.0);
	 glVertex2f(-4.0, 4.0);
    glEnd();

       glBegin(GL_POLYGON);
    glColor3ub(51, 255, 100 );

    glVertex2f(-4.0, 4.0);
    glVertex2f(4.0, 4.0);
     glVertex2f(4.0, 5.0);
	 glVertex2f(-4.0, 5.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(51, 212, 255 );

    glVertex2f(-4.0, 5.0);
    glVertex2f(4.0, 5.0);
     glVertex2f(4.0, 6.0);
	 glVertex2f(-4.0, 6.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 100, 255);

    glVertex2f(-4.0, 6.0);
    glVertex2f(4.0, 6.0);
     glVertex2f(4.0, 7.0);
	 glVertex2f(-4.0, 7.0);
    glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(138, 51, 255 );

    glVertex2f(-4.0, 7.0);
    glVertex2f(4.0, 7.0);
     glVertex2f(4.0, 8.0);
	 glVertex2f(-4.0, 8.0);
    glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1200,1000);
    glutCreateWindow("Rainbow");
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(-10.0,10.0,-10.0,10.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
