#include <stdlib.h>
#include <math.h>
#include<iostream>
using namespace std;
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

int cx=0,cy=0,cz=0;

void acube()
{
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(cx,cy,cz);
    glutSolidCube(0.4);
    glPopMatrix();
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

void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
        case 'w':cz=cz-1; break;
        case 's':cz=cz+1; break;
        case 'a':cx=cx-1;  break;
        case 'd':cx=cx+1; break;
        case 'q':cy=cy+1;  break;
        case 'z':cy=cy-1; break;

        glutPostRedisplay();
    }
}
int main(int argc, char **argv) {

	  glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("ANKIT");

    glutDisplayFunc(display);
    //glutIdleFunc( display );
    //glutReshapeFunc( reshape);
    glutKeyboardFunc(keyboard);
    init();
    glutMainLoop();

    return 0;


}
