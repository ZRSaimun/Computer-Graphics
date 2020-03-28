#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>

# define PI  3.14159265358979323846

GLfloat i=0.0f;

void Idle()
{
    glutPostRedisplay();

}


void display() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	         // Clear the color buffer (background)
	int l;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;

glPushMatrix();
glRotatef(i,0,0,0.1f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l *  twicePi / triangleAmount)),
			    y + (radius * sin(l * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.17,-.1);
	glVertex2f(.25,-.2);
	glVertex2f(.2,-.25);
	glVertex2f(.13,-.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.3,-.15);
	glVertex2f(.7,-.6);
	glVertex2f(.55,-.7);
	glVertex2f(.15,-.3);
	glEnd();

 glBegin(GL_QUADS);
	glVertex2f(-.17,.1);
	glVertex2f(-.25,.2);
	glVertex2f(-.2,.25);
	glVertex2f(-.13,.15);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-.3,.15);
	glVertex2f(-.7,.6);
	glVertex2f(-.55,.7);
	glVertex2f(-.15,.3);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(-.17,-.1);
	glVertex2f(-.25,-.2);
	glVertex2f(-.2,-.25);
	glVertex2f(-.13,-.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(-.3,-.15);
	glVertex2f(-.7,-.6);
	glVertex2f(-.55,-.7);
	glVertex2f(-.15,-.3);
	glEnd();


 glBegin(GL_QUADS);
	glVertex2f(.17,.1);
	glVertex2f(.25,.2);
	glVertex2f(.2,.25);
	glVertex2f(.13,.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.3,.15);
	glVertex2f(.7,.6);
	glVertex2f(.55,.7);
	glVertex2f(.15,.3);
	glEnd();
	glPopMatrix();
	i+=0.1f;

	glFlush();  // Render now
}

void display_up() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	         // Clear the color buffer (background)
	int l;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;

glPushMatrix();
glRotatef(i,0,0,.1f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l *  twicePi / triangleAmount)),
			    y + (radius * sin(l * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.17,-.1);
	glVertex2f(.25,-.2);
	glVertex2f(.2,-.25);
	glVertex2f(.13,-.15);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(.3,-.15);
	glVertex2f(.7,-.6);
	glVertex2f(.55,-.7);
	glVertex2f(.15,-.3);
	glEnd();

 glBegin(GL_QUADS);
	glVertex2f(-.17,.1);
	glVertex2f(-.25,.2);
	glVertex2f(-.2,.25);
	glVertex2f(-.13,.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(-.3,.15);
	glVertex2f(-.7,.6);
	glVertex2f(-.55,.7);
	glVertex2f(-.15,.3);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(-.17,-.1);
	glVertex2f(-.25,-.2);
	glVertex2f(-.2,-.25);
	glVertex2f(-.13,-.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(-.3,-.15);
	glVertex2f(-.7,-.6);
	glVertex2f(-.55,-.7);
	glVertex2f(-.15,-.3);
	glEnd();


 glBegin(GL_QUADS);
	glVertex2f(.17,.1);
	glVertex2f(.25,.2);
	glVertex2f(.2,.25);
	glVertex2f(.13,.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.3,.15);
	glVertex2f(.7,.6);
	glVertex2f(.55,.7);
	glVertex2f(.15,.3);
	glEnd();
	glPopMatrix();
	i+=2.0f;

	glFlush();  // Render now
}

void display_down() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	         // Clear the color buffer (background)
	int l;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;

glPushMatrix();
glRotatef(i,0,0,.1f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l *  twicePi / triangleAmount)),
			    y + (radius * sin(l * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_QUADS);
	glVertex2f(.17,-.1);
	glVertex2f(.25,-.2);
	glVertex2f(.2,-.25);
	glVertex2f(.13,-.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.3,-.15);
	glVertex2f(.7,-.6);
	glVertex2f(.55,-.7);
	glVertex2f(.15,-.3);
	glEnd();



 glBegin(GL_QUADS);
	glVertex2f(-.17,.1);
	glVertex2f(-.25,.2);
	glVertex2f(-.2,.25);
	glVertex2f(-.13,.15);
	glEnd();



	glBegin(GL_QUADS);
	glVertex2f(-.3,.15);
	glVertex2f(-.7,.6);
	glVertex2f(-.55,.7);
	glVertex2f(-.15,.3);
	glEnd();



	glBegin(GL_QUADS);
	glVertex2f(-.17,-.1);
	glVertex2f(-.25,-.2);
	glVertex2f(-.2,-.25);
	glVertex2f(-.13,-.15);
	glEnd();



	glBegin(GL_QUADS);
	glVertex2f(-.3,-.15);
	glVertex2f(-.7,-.6);
	glVertex2f(-.55,-.7);
	glVertex2f(-.15,-.3);
	glEnd();



 glBegin(GL_QUADS);
	glVertex2f(.17,.1);
	glVertex2f(.25,.2);
	glVertex2f(.2,.25);
	glVertex2f(.13,.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.3,.15);
	glVertex2f(.7,.6);
	glVertex2f(.55,.7);
	glVertex2f(.15,.3);
	glEnd();
	glPopMatrix();
	i+=0.3f;


	glFlush();  // Render now
}

void display_stop() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	         // Clear the color buffer (background)
	int l;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20;

	GLfloat twicePi = 2.0f * PI;

glPushMatrix();
glRotatef(i,0,0,.1f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(l = 0; l <= triangleAmount;l++) {
			glVertex2f(
		            x + (radius * cos(l *  twicePi / triangleAmount)),
			    y + (radius * sin(l * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_QUADS);
	glVertex2f(.17,-.1);
	glVertex2f(.25,-.2);
	glVertex2f(.2,-.25);
	glVertex2f(.13,-.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.3,-.15);
	glVertex2f(.7,-.6);
	glVertex2f(.55,-.7);
	glVertex2f(.15,-.3);
	glEnd();



 glBegin(GL_QUADS);
	glVertex2f(-.17,.1);
	glVertex2f(-.25,.2);
	glVertex2f(-.2,.25);
	glVertex2f(-.13,.15);
	glEnd();



	glBegin(GL_QUADS);
	glVertex2f(-.3,.15);
	glVertex2f(-.7,.6);
	glVertex2f(-.55,.7);
	glVertex2f(-.15,.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-.17,-.1);
	glVertex2f(-.25,-.2);
	glVertex2f(-.2,-.25);
	glVertex2f(-.13,-.15);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(-.3,-.15);
	glVertex2f(-.7,-.6);
	glVertex2f(-.55,-.7);
	glVertex2f(-.15,-.3);
	glEnd();

 glBegin(GL_QUADS);
	glVertex2f(.17,.1);
	glVertex2f(.25,.2);
	glVertex2f(.2,.25);
	glVertex2f(.13,.15);
	glEnd();


	glBegin(GL_QUADS);
	glVertex2f(.3,.15);
	glVertex2f(.7,.6);
	glVertex2f(.55,.7);
	glVertex2f(.15,.3);
	glEnd();
	glPopMatrix();
	i+=0.0f;


	glFlush();  // Render now
}

void handleKeypress(unsigned char key,int x,int y)
{
    switch(key)
    {
    case 'u':
        glutDisplayFunc(display_up);
        break;

    case 'd':
        glutDisplayFunc(display_down);
        break;
    case 's':
        glutDisplayFunc(display_stop);
        break;

    glutPostRedisplay();
    }
}

void SpecialInput(int key, int x,int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:
       glutDisplayFunc(display_up);
       break;

    case GLUT_KEY_DOWN:
       glutDisplayFunc(display_down);
       break;

    case GLUT_KEY_LEFT:
       glutDisplayFunc(display_stop);
       break;

    case GLUT_KEY_RIGHT:
       glutDisplayFunc(display_stop);
       break;
    }
}

void handleMouse(int button,int state,int x,int y)
{
    if(button==GLUT_LEFT_BUTTON)
    {
        glutDisplayFunc(display_up);
    }
    if(button==GLUT_RIGHT_BUTTON)
    {
        glutDisplayFunc(display_down);
    }
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Rotated Fan"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutIdleFunc(Idle);
	glutKeyboardFunc(handleKeypress);
	glutSpecialFunc(SpecialInput);
	glutMouseFunc(handleMouse);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
