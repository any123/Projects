#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void acube()
{
    glColor3f(1,1,1);
    glutSolidCube(0.4);
}
void grid()
{
    int i;
    for(i=0;i<40;i++)
    {
        glPushMatrix();
        if(i<20) {glTranslatef(0,0,i);}
        if(i>=20) {glTranslatef(i-20,0,0); glRotatef(-90,0,1,0);}

        glBegin(GL_LINES);
        glColor3f(1,1,1);  glLineWidth(1);
        glVertex3f(0,-0.1,0); glVertex3f(19,-0.1,0);
        glEnd();
        glPopMatrix();
    }
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotatef(40,1,1,0);

     acube();
    glutSwapBuffers();

}


void changeSize(int w, int h) {

	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width).
	if (h == 0)
		h = 1;
	float ratio =  w * 1.0 / h;

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// Reset Matrix
	glLoadIdentity();

	// Set the viewport to be the entire window
	glViewport(0, 0, w, h);

	// Set the correct perspective.
	gluPerspective(45.0f, ratio, 0.1f, 100.0f);

	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}

void init()
{

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(35,1.0f,0.1f,1000);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.1,0.1,0.1,1);

}
int main(int argc, char **argv) {

	// init GLUT and create window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutDisplayFunc(display);
	glutInitWindowSize(320,320);
	glutCreateWindow("MATRIX 3D");
	glutReshapeFunc(changeSize);
	glutMainLoop();

	return 1;
}
