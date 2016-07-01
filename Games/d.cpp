#include <stdlib.h>
#include <math.h>
# include<iostream>
using namespace std;
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

float angle = 0.0f;
float lx=0.0f,lz=-1.0f;
float x=0.0f, z=5.0f;
float deltaAngle = 0.0f;
float deltaMove = 0;

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

void draw(){
  background(255);

  //MoveAlongPath or General Transformations
  pushMatrix();

  translate(width/2,height/2,-100);
  rotateX(mouseX/(float)width*2*PI);
  rotateY(mouseY/(float)height*2*PI);

  drawCar();

  popMatrix();

}

void drawCar(){


  float d = noise((frameCount+100)/100)*50;
  float w = noise((frameCount+200)/100)*150;
  float h = noise((frameCount+320)/100)*300;
  float k = noise((frameCount+520)/100)*50;

  pushMatrix();
  translate(0,0,0);
  box(w,h,d);
  popMatrix();

  pushMatrix();
  translate(0,-h*0.16666f,-d);
  box(w*0.85f,h*0.3333f,d);
  popMatrix();


//fill(#998878);
  pushMatrix();
  translate(w/2,-h/2*0.75,k);
  rotateX(frameCount/10);
  box(w/10,k,k);
  popMatrix();

  pushMatrix();
  translate(w/2,h/2*0.75,k);
    rotateX(frameCount/10);
  box(w/10,k,k);
  popMatrix();

  pushMatrix();
  translate(-w/2,-h/2*0.75,k);
  rotateX(frameCount/10);
  box(w/10,k,k);
  popMatrix();

  pushMatrix();
  translate(-w/2,h/2*0.75,k);
    rotateX(frameCount/10);
  box(w/10,k,k);
  popMatrix();

}

void renderScene(void) {
// Clear Color and Depth Buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Reset transformations
	glLoadIdentity();
	// Set the camera
	gluLookAt(	x, 1.0f, z,
				x+lx, 1.0f,  z+lz,
				0.0f, 1.0f,  0.0f);
     draw();

	glutSwapBuffers();
}


 void pressKey(int key, int xx, int yy) {
 /*Here xx and yy are the coordinates of the mouse cursor
 just change change the cursor and note the change in value*/

	switch (key) {
		case GLUT_KEY_LEFT : deltaAngle = -0.01f;  break;
		case GLUT_KEY_RIGHT : deltaAngle = 0.01f; break;
		case GLUT_KEY_UP :  deltaMove = 0.5f;        break;
		case GLUT_KEY_DOWN : deltaMove = -0.5f;  break;
		case GLUT_KEY_F1 :    exit(1);   break;
		case GLUT_KEY_F9 : cout<<xx<<" "<<yy<<" ";
                            break;
	}

}


int main(int argc, char **argv)
{

	// init GLUT and create window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(320,320);
	glutCreateWindow("CAR RACING");

	// register callbacks
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);

	glutSpecialFunc(pressKey);
	// OpenGL init
	glEnable(GL_DEPTH_TEST);

	cout<<"Press  F1 or ESC to exit and up-down-left-right keys to play\n ";
	glutMainLoop();

	return 1;
}
