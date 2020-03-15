#include <windows.h>  // for MS Windows
#include<GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
#define PI           3.14159265358979323846

void morning();
void day();
void night();
GLfloat j=0.2;
GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;
//GLfloat position = 0.0f;
GLfloat positionz = 0.0f;
GLfloat positionr = 0.0f;
//GLfloat speed = 0.02f;

GLfloat Bspeed=0.006f;
GLfloat speedr=0.06f;

GLfloat positionm = 0.0f;
GLfloat speedm = 0.007f;


void update(int value) {
    if(position <-1.0)
        position = 1.0f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);}

void update2(int value) {
if(position > 1.0)
        position = -1.0f;
    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update2, 0);
}
///for bird
void update3(int value) {
        if(positionz <-1.0)
        positionz = 1.0f;
    positionz -= Bspeed;
	glutPostRedisplay();
	glutTimerFunc(100, update3, 0);
}
void update4(int value) {
        if(positionz >1.0) //for bird
        positionz = -1.0f;
    positionz += Bspeed;
	glutPostRedisplay();
	glutTimerFunc(100, update4, 0);
}
///plane
void update5(int value) {

    if(positionm <-1.0)
        positionm = 1.2f;

    positionm -= speedm;

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);
}
///for rain
void update6(int value) {
        if(positionr <-1.0)
        positionr = 1.0f;
    positionr -=speedr;
	glutPostRedisplay();
	glutTimerFunc(100, update6, 0);
}

///mouse keyboard
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
			speedm += 0.1f;
			}

			if (button == GLUT_RIGHT_BUTTON)
	{
			speedm -= 0.1f;
			}
	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    Bspeed = 0.0f;
    break;
case 'd':
    glutDisplayFunc(day);
    break;
case 'm':
    glutDisplayFunc(morning);
    break;
case 'n':
    glutDisplayFunc(night);
    break;
case 'w':
    Bspeed = 0.1f;
    break;
glutPostRedisplay();

	}
}
void SpecialInput(int key, int x, int y)
{  switch(key)
{
case GLUT_KEY_UP:
        glutTimerFunc(100, update4, 0);
break;
case GLUT_KEY_DOWN:
        glutTimerFunc(100, update3, 0);
break;
case GLUT_KEY_LEFT:
    glutTimerFunc(100, update, 0);
break;
case GLUT_KEY_RIGHT:
    glutTimerFunc(100, update2, 0);
break;
}
glutPostRedisplay();}

void morning()
{
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
//sky
    glColor3ub(201,201,216);
    glBegin(GL_QUADS);
    glVertex2f(1,.45);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.45);
    glEnd();

    //Land
    glColor3ub(107, 107, 107);
    glBegin(GL_QUADS);
    glVertex2f(1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
///street light
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    //////////////////////////////////////

  glTranslatef(0,-.35,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();



  glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


glLoadIdentity();



///Road 1 middle
    /*glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();*/

glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(1,.1);
    glVertex2f(-1,.1);
    glEnd();

glColor3ub(253, 253, 150);
    glBegin(GL_LINES);
    glVertex2f(1,-.25);
    glVertex2f(-1,-.25);
    glEnd();

    ///road indicator left
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);GLfloat position1 = 0.0f;
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();

    //road indicator left
    glLoadIdentity();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
     glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();

     glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();




///plane

glLoadIdentity();
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
//glTranslatef(-(position+position1),-position1, 0.0f);
///main body
glColor3ub(153, 204, 255);
    glBegin(GL_QUADS);
    glVertex2f(.45,-.1);
    glVertex2f(.45,0);
    glVertex2f(-.0,0);
    glVertex2f(-.125,-.1);
    glEnd();

///end part
    glColor3ub(153, 204, 255);
    glBegin(GL_POLYGON);
    glVertex2f(.45,0);
    glVertex2f(.45,-.12);
    glVertex2f(.5,-.12);
    glVertex2f(.59,.12);
    glVertex2f(.54,.12);
    glEnd();
    ///lower layer
 glColor3ub(0, 153, 255);
    glBegin(GL_QUADS);
    glVertex2f(.5,-.12);
    glVertex2f(.51,-.1);
    glVertex2f(-.125,-.1);
    glVertex2f(-.145,-.12);
    glEnd();
///pilot part
glColor3ub(51, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.08);
    glVertex2f(.03,0);
    glVertex2f(0,0);
    glVertex2f(-.1,-.08);
    glEnd();
    ///cockpit part
glColor3ub(  215, 212, 211  );
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-.05);
    glVertex2f(0,0);
    glVertex2f(-.062,-.05);
    glEnd();


    ///door
glColor3ub(51, 102, 255);
   glBegin(GL_QUADS);
    glVertex2f(.08,-.08);
    glVertex2f(.08,-.012);
    glVertex2f(.05,-.012);
    glVertex2f(.05,-.08);
  glEnd();

///plane window

int i;

GLfloat x=0.13f; GLfloat y=-0.04f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


///plane pakha upper


 glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(-.05,0);
    glVertex2f(0,.07);
    glVertex2f(-.05,.07);
    glVertex2f(-.13,0);
    glEnd();


///plane pakha lower

 glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(0,-.19);
    glVertex2f(-.05,-.12);
    glVertex2f(-.13,-.12);
    glVertex2f(-.05,-.19);
    glEnd();



///plane wheel square front

 glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.15);
    glEnd();
 ///plane wheel front
    x=0.0275f;  y=-0.15f;  radius =.013f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



	///plane wheel square back1
	glTranslatef(-.25,0,0);

 glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.145);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.145);
    glEnd();
 ///plane wheel back1
    x=0.0275f;  y=-0.15f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

///plane wheel square back2
glTranslatef(.05,0,0);
glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.15);
    glEnd();
 ///plane wheel front
    x=0.0275f;  y=-0.15f;  radius =.013f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


glPopMatrix();



/*glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(1,-.5);
    glVertex2f(-1,-.5);
    glEnd();*/


    /////House
    /*glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
*/

/////////The sun
glLoadIdentity();
 x=-.1f;  y=0.8f;  radius =.1f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(228, 135, 135);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



///airport square circle

glLoadIdentity();
//int i;

 x=0.0f;  y=-.6f;  radius =.2f;
 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//airport big square
	glColor3ub(31, 46, 46);
    glBegin(GL_QUADS);
    glVertex2f(.8,-.8);
    glVertex2f(.8,-.6);
    glVertex2f(-.8,-.6);
    glVertex2f(-.8,-.8);
    glEnd();
    //airport mid square door
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.4,-.8);
    glVertex2f(.4,-.65);
    glVertex2f(-.4,-.65);
    glVertex2f(-.4,-.8);
    glEnd();
    //airport mid square door upper white
glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.4,-.7);
    glVertex2f(.4,-.65);
    glVertex2f(-.4,-.65);
    glVertex2f(-.4,-.7);
    glEnd();
//airport door lower part
    glColor3ub(0, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.9,-.85);
    glVertex2f(.8,-.8);
    glVertex2f(-.8,-.8);
    glVertex2f(-.9,-.85);
    glEnd();
    //airport door side right
    glColor3ub(102, 0, 51);
    glBegin(GL_QUADS);
    glVertex2f(.8,-.8);
    glVertex2f(.8,-.77);
    glVertex2f(.4,-.77);
    glVertex2f(.4,-.8);
    glEnd();
    //airport door side left
    glColor3ub(102, 0, 51);
    glBegin(GL_QUADS);
    glVertex2f(-.4,-.8);
    glVertex2f(-.4,-.77);
    glVertex2f(-.8,-.77);
    glVertex2f(-.8,-.8);
    glEnd();

    //airport door side window left
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();

    //airport door side window left separator
    glLoadIdentity();
    glColor3ub(31, 46, 46);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.045,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();

     //airport door side window right
     glLoadIdentity();
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

//airport door side window right separator
    glLoadIdentity();
    glColor3ub(31, 46, 46);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
    glTranslatef(.045,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
     glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
//airport mid square door seperator
glLoadIdentity();
   glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.4,-.73);
    glVertex2f(-.4,-.73);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    //airport square circle side square right
    glLoadIdentity();
    glColor3ub(51, 102, 255);
    glBegin(GL_QUADS);
    glVertex2f(.6,-.6);
    glVertex2f(.6,-.5);
    glVertex2f(.175,-.5);
    glVertex2f(.16,-.6);
    glEnd();

    //airport square circle side square right window
    /*glLoadIdentity();
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
    glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
    glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
*/



    //airport square circle side square left
    glLoadIdentity();
    glColor3ub(51, 102, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.6,-.6);
    glVertex2f(-.6,-.5);
    glVertex2f(-.175,-.5);
    glVertex2f(-.16,-.6);
    glEnd();

     //airport square circle separator
    glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(.17,-.53);
    glVertex2f(-.17,-.53);
    glEnd();

     glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(.1,-.6);
    glVertex2f(.12,-.45);
    glEnd();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(-.1,-.6);
    glVertex2f(-.12,-.45);
    glEnd();
 glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(0,-.6);
    glVertex2f(0,-.4);
    glEnd();



 //airport square circle side square left window
   /* glLoadIdentity();
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
   glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
    glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();*/

//////////////////////////////////////////////////////////





///tree right

glColor3ub(117, 91, 21);
    glBegin(GL_QUADS);
    glVertex2f(.92,-.75);
    glVertex2f(.92,-.6);
    glVertex2f(.88,-.6);
    glVertex2f(.88,-.75);
    glEnd();

 glColor3ub(23, 156, 3);
    glBegin(GL_TRIANGLES);
    glVertex2f(.95,-.6);
    glVertex2f(.90,-.4);
    glVertex2f(.85,-.6);
    glEnd();


///tree left

glLoadIdentity();
glColor3ub(117, 91, 21);
    glBegin(GL_QUADS);
    glVertex2f(-.92,-.75);
    glVertex2f(-.92,-.6);
    glVertex2f(-.88,-.6);
    glVertex2f(-.88,-.75);
    glEnd();

 glColor3ub(23, 156, 3);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.95,-.6);
    glVertex2f(-.90,-.4);
    glVertex2f(-.85,-.6);
    glEnd();


/////////////////////////////////////////////////////////////
//windmill part
//quads
	glTranslatef(-0.6f, 0.5f, 0.0f);
	glScalef(.55,.55,0);
    glColor3ub(0,0,0 );
    glBegin(GL_POLYGON);
    glVertex2f(0.03,-.5);
    glVertex2f(0.0,0);//
    glVertex2f(-0.03,-0.5);
    glEnd();

//center circel
//    int i;
    x=-.0f;  y=-.0f; radius =.02f;
     triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);//// color for all wings
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//for rotation


////////////


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.10,-0.01);
    glVertex2f(0.25,0.0);
    glVertex2f(0.10,0.01);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.10,-0.01);
    glVertex2f(-0.25,0.0);
    glVertex2f(-0.10,0.01);
    glVertex2f(-0.0,-0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.01,0.10);
    glVertex2f(0.0,0.25);
    glVertex2f(0.01,0.10);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.01,-0.10);
    glVertex2f(0.0,-0.25);
    glVertex2f(-0.01,-0.10);
    glVertex2f(0.0,0.0);
    glEnd();


    glLoadIdentity();




 //2nd windmill quads
    glTranslatef(-0.8f, 0.6f, 0.0f);//
    glScalef(.55,.55,0);
    glColor3ub(0,0,0 );
    glBegin(GL_POLYGON);
    glVertex2f(0.03,-.5);
    glVertex2f(0.0,0);//
    glVertex2f(-0.03,-0.5);
    glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();





    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.10,-0.01);
    glVertex2f(0.25,0.0);
    glVertex2f(0.10,0.01);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.10,-0.01);
    glVertex2f(-0.25,0.0);
    glVertex2f(-0.10,0.01);
    glVertex2f(-0.0,-0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.01,0.10);
    glVertex2f(0.0,0.25);
    glVertex2f(0.01,0.10);
    glVertex2f(0.0,0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.01,-0.10);
    glVertex2f(0.0,-0.25);
    glVertex2f(-0.01,-0.10);
    glVertex2f(0.0,0.0);
    glEnd();


    glLoadIdentity();




      ///cloud
///Cloud
	int iy;//1
   glTranslatef(-.1,0.5f, 0.0f);
      glTranslatef(positionm,0.0f, 0.0f);
    glScalef(.5f,.5f,0.0f);
	GLfloat xy=-.45f; GLfloat yy=.82f; GLfloat radiusy =.07f;
	int triangleAmounty = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiy = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xy,yy); // center of circle
		for(iy = 0; iy <= triangleAmounty;iy++) {
			glVertex2f(
		            xy + (radiusy * cos(iy *  twicePiy / triangleAmounty)),
			    yy + (radiusy * sin(iy * twicePiy / triangleAmounty))
			);
		}
	glEnd();

    int ix;//2
	GLfloat xx=-.49f; GLfloat yx=.9f; GLfloat radiusx =.07f;
	int triangleAmountx = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePix = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xx,yx); // center of circle
		for(ix = 0; ix <= triangleAmountx;ix++) {
			glVertex2f(
		            xx + (radiusx * cos(ix *  twicePix / triangleAmountx)),
			    yx + (radiusx * sin(ix * twicePix / triangleAmountx))
			);
		}
	glEnd();

    int iw;//3
	GLfloat xw=-.56f; GLfloat yw=.9f; GLfloat radiusw =.04f;
	int triangleAmountw = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiw = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xw,yw); // center of circle
		for(iw = 0; iw <= triangleAmountw;iw++) {
			glVertex2f(
		            xw + (radiusw * cos(iw *  twicePiw / triangleAmountw)),
			    yw + (radiusw * sin(iw * twicePiw / triangleAmountw))
			);
		}
	glEnd();

	    int iv;//4
	GLfloat xv=-.60f; GLfloat yv=.828f; GLfloat radiusv =.07f;
	int triangleAmountv = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiv = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xv,yv); // center of circle
		for(iv = 0; iv <= triangleAmountv;iv++) {
			glVertex2f(
		            xv + (radiusv * cos(iv *  twicePiv / triangleAmountv)),
			    yv + (radiusv * sin(iv * twicePiv/ triangleAmountv))
			);
		}
	glEnd();

	    int iu;//5
	GLfloat xu=-.52f; GLfloat yu=.79f; GLfloat radiusu =.05f;
	int triangleAmountu = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiu = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xu,yu); // center of circle
		for(iu = 0; iu <= triangleAmountu;iu++) {
			glVertex2f(
		            xu + (radiusu * cos(iu *  twicePiu / triangleAmountu)),
			    yu + (radiusu * sin(iu * twicePiu/ triangleAmountu))
			);
		}
	glEnd();
//Up cloud done
//down cloud
	int it;//1

	GLfloat xt=-.62f; GLfloat yt=.657f; GLfloat radiust =.07f;
	int triangleAmountt = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePit = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xt,yt); // center of circle
		for(it = 0; it <= triangleAmountt;it++) {
			glVertex2f(
		            xt + (radiust * cos(it *  twicePit / triangleAmountt)),
			    yt + (radiust * sin(it * twicePit / triangleAmountt))
			);
		}
	glEnd();
	int iq;//2

	GLfloat xq=-.675f; GLfloat yq=.75f; GLfloat radiusq =.07f;
	int triangleAmountq = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiq = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xq,yq); // center of circle
		for(iq = 0; iq <= triangleAmountq;iq++) {
			glVertex2f(
		            xq + (radiusq * cos(iq *  twicePiq / triangleAmountq)),
			    yq + (radiusq * sin(iq * twicePiq / triangleAmountq))
			);
		}
	glEnd();

	int is;//3
	GLfloat xs=-.756f; GLfloat ys=.77f; GLfloat radiuss =.04f;
	int triangleAmounts = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePis = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xs,ys); // center of circle
		for(is = 0; is <= triangleAmounts;is++) {
			glVertex2f(
		            xs + (radiuss * cos(is *  twicePis / triangleAmounts)),
			    ys + (radiuss * sin(is * twicePis / triangleAmounts))
			);
		}
	glEnd();

    int ir;//4
	GLfloat xr=-.8f; GLfloat yr=.7f; GLfloat radiusr =.07f;
	int triangleAmountr = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePir = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xr,yr); // center of circle
		for(ir = 0; ir <= triangleAmountr;ir++) {
			glVertex2f(
		            xr + (radiusr * cos(ir *  twicePir / triangleAmountr)),
			    yr + (radiusr * sin(ir * twicePir / triangleAmountr))
			);
		}
	glEnd();

    int ip;//5
	GLfloat xp=-.714f; GLfloat yp=.66f; GLfloat radiusp =.07f;
	int triangleAmountp = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePip = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xp,yp); // center of circle
		for(ip = 0; ip <= triangleAmountp;ip++) {
			glVertex2f(
		            xp + (radiusp * cos(ip *  twicePip / triangleAmountp)),
			    yp + (radiusp * sin(ip * twicePip / triangleAmountp))
			);
		}
	glEnd();


    	glLoadIdentity();

    	///Cloud-2




//end cloud
glFlush();
//glutTimerFunc(5000,day,0);

}


void day()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    //gluOrtho2D(-2,2,-1,1);

glLoadIdentity();
//sky
    glColor3ub(135, 206, 235);
    glBegin(GL_QUADS);
    glVertex2f(1,.45);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.45);
    glEnd();

///Land
    glColor3ub(107, 107, 107);
    glBegin(GL_QUADS);
    glVertex2f(1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();

    ///street light
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    //////////////////////////////////////

  glTranslatef(0,-.35,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();



  glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();


glLoadIdentity();





///Road 1 middle
    /*glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();*/

glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(1,.1);
    glVertex2f(-1,.1);
    glEnd();

glColor3ub(253, 253, 150);
    glBegin(GL_LINES);
    glVertex2f(1,-.25);
    glVertex2f(-1,-.25);
    glEnd();

    ///road indicator left
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);GLfloat position1 = 0.0f;
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();

    //road indicator left
    glLoadIdentity();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
     glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();

     glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();




///plane

glLoadIdentity();
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
//glTranslatef(-(position+position1),-position1, 0.0f);
///main body
glColor3ub(153, 204, 255);
    glBegin(GL_QUADS);
    glVertex2f(.45,-.1);
    glVertex2f(.45,0);
    glVertex2f(-.0,0);
    glVertex2f(-.125,-.1);
    glEnd();

///end part
    glColor3ub(153, 204, 255);
    glBegin(GL_POLYGON);
    glVertex2f(.45,0);
    glVertex2f(.45,-.12);
    glVertex2f(.5,-.12);
    glVertex2f(.59,.12);
    glVertex2f(.54,.12);
    glEnd();
    ///lower layer
 glColor3ub(0, 153, 255);
    glBegin(GL_QUADS);
    glVertex2f(.5,-.12);
    glVertex2f(.51,-.1);
    glVertex2f(-.125,-.1);
    glVertex2f(-.145,-.12);
    glEnd();
///pilot part
glColor3ub(51, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.08);
    glVertex2f(.03,0);
    glVertex2f(0,0);
    glVertex2f(-.1,-.08);
    glEnd();
    ///cockpit part
glColor3ub(  215, 212, 211  );
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-.05);
    glVertex2f(0,0);
    glVertex2f(-.062,-.05);
    glEnd();


    ///door
glColor3ub(51, 102, 255);
   glBegin(GL_QUADS);
    glVertex2f(.08,-.08);
    glVertex2f(.08,-.012);
    glVertex2f(.05,-.012);
    glVertex2f(.05,-.08);
  glEnd();

///plane window

int i;

GLfloat x=0.13f; GLfloat y=-0.04f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


///plane pakha upper


 glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(-.05,0);
    glVertex2f(0,.07);
    glVertex2f(-.05,.07);
    glVertex2f(-.13,0);
    glEnd();


///plane pakha lower

 glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(0,-.19);
    glVertex2f(-.05,-.12);
    glVertex2f(-.13,-.12);
    glVertex2f(-.05,-.19);
    glEnd();



///plane wheel square front

 glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.15);
    glEnd();
 ///plane wheel front
    x=0.0275f;  y=-0.15f;  radius =.013f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



	///plane wheel square back1
	glTranslatef(-.25,0,0);

 glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.145);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.145);
    glEnd();
 ///plane wheel back1
    x=0.0275f;  y=-0.15f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

///plane wheel square back2
glTranslatef(.05,0,0);
glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.15);
    glEnd();
 ///plane wheel front
    x=0.0275f;  y=-0.15f;  radius =.013f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


glPopMatrix();



/*glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(1,-.5);
    glVertex2f(-1,-.5);
    glEnd();*/


    /////House
    /*glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
*/

///The sun
glLoadIdentity();
 x=-.1f;  y=0.8f;  radius =.1f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 53);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

glLoadIdentity();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.1,.9);
    glVertex2f(-.1,.95);
    glEnd();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.15,.85);
    glVertex2f(-.2,.9);
    glEnd();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.2,.8);
    glVertex2f(-.25,.8);
    glEnd();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.15,.75);
    glVertex2f(-.2,.7);
    glEnd();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.1,.7);
    glVertex2f(-.1,.65);
    glEnd();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.05,.75);
    glVertex2f(-.0,.7);
    glEnd();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.0,.8);
    glVertex2f(.05,.8);
    glEnd();
glColor3ub(250, 250, 53);
    glBegin(GL_LINES);
    glVertex2f(-.05,.85);
    glVertex2f(.0,.9);
    glEnd();



///airport square circle

glLoadIdentity();
//int i;

 x=0.0f;  y=-.6f;  radius =.2f;
 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//airport big square
	glColor3ub(31, 46, 46);
    glBegin(GL_QUADS);
    glVertex2f(.8,-.8);
    glVertex2f(.8,-.6);
    glVertex2f(-.8,-.6);
    glVertex2f(-.8,-.8);
    glEnd();
    //airport mid square door
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.4,-.8);
    glVertex2f(.4,-.65);
    glVertex2f(-.4,-.65);
    glVertex2f(-.4,-.8);
    glEnd();
    //airport mid square door upper white
glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.4,-.7);
    glVertex2f(.4,-.65);
    glVertex2f(-.4,-.65);
    glVertex2f(-.4,-.7);
    glEnd();
//airport door lower part
    glColor3ub(0, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.9,-.85);
    glVertex2f(.8,-.8);
    glVertex2f(-.8,-.8);
    glVertex2f(-.9,-.85);
    glEnd();
    //airport door side right
    glColor3ub(102, 0, 51);
    glBegin(GL_QUADS);
    glVertex2f(.8,-.8);
    glVertex2f(.8,-.77);
    glVertex2f(.4,-.77);
    glVertex2f(.4,-.8);
    glEnd();
    //airport door side left
    glColor3ub(102, 0, 51);
    glBegin(GL_QUADS);
    glVertex2f(-.4,-.8);
    glVertex2f(-.4,-.77);
    glVertex2f(-.8,-.77);
    glVertex2f(-.8,-.8);
    glEnd();

    //airport door side window left
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();

    //airport door side window left separator
    glLoadIdentity();
    glColor3ub(31, 46, 46);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.045,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();

     //airport door side window right
     glLoadIdentity();
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

    glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(133,130,130);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
//airport door side window right separator
    glLoadIdentity();
    glColor3ub(31, 46, 46);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
    glTranslatef(.045,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
     glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
//airport mid square door seperator
glLoadIdentity();
   glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.4,-.73);
    glVertex2f(-.4,-.73);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    //airport square circle side square right
    glLoadIdentity();
    glColor3ub(51, 102, 255);
    glBegin(GL_QUADS);
    glVertex2f(.6,-.6);
    glVertex2f(.6,-.5);
    glVertex2f(.175,-.5);
    glVertex2f(.16,-.6);
    glEnd();

    //airport square circle side square right window
    /*glLoadIdentity();
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
    glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
    glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
*/



    //airport square circle side square left
    glLoadIdentity();
    glColor3ub(51, 102, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.6,-.6);
    glVertex2f(-.6,-.5);
    glVertex2f(-.175,-.5);
    glVertex2f(-.16,-.6);
    glEnd();

     //airport square circle separator
    glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(.17,-.53);
    glVertex2f(-.17,-.53);
    glEnd();

     glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(.1,-.6);
    glVertex2f(.12,-.45);
    glEnd();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(-.1,-.6);
    glVertex2f(-.12,-.45);
    glEnd();
 glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(0,-.6);
    glVertex2f(0,-.4);
    glEnd();



 //airport square circle side square left window
   /* glLoadIdentity();
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
   glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
    glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();*/

//////////////////////////////////////////////////////////
///2nd plane


//plane
glLoadIdentity();
glPushMatrix();
glTranslatef(positionz,0.0f, 0.0f);
glTranslatef(.4,.8,0);
glScalef(.5,.5,0);


//main body
glColor3ub(153, 204, 255);
    glBegin(GL_QUADS);
    glVertex2f(.45,-.1);
    glVertex2f(.45,0);
    glVertex2f(-.0,0);
    glVertex2f(-.125,-.1);
    glEnd();

//end part
    glColor3ub(153, 204, 255);
    glBegin(GL_POLYGON);
    glVertex2f(.45,0);
    glVertex2f(.45,-.12);
    glVertex2f(.5,-.12);
    glVertex2f(.59,.12);
    glVertex2f(.54,.12);
    glEnd();
    //lower layer
 glColor3ub(0, 153, 255);
    glBegin(GL_QUADS);
    glVertex2f(.5,-.12);
    glVertex2f(.51,-.1);
    glVertex2f(-.125,-.1);
    glVertex2f(-.145,-.12);
    glEnd();
//pilot part
    glColor3ub(51, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.08);
    glVertex2f(.03,0);
    glVertex2f(0,0);
    glVertex2f(-.1,-.08);
    glEnd();

//cockpit part
    glColor3ub(  215, 212, 211  );
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-.05);
    glVertex2f(0,0);
    glVertex2f(-.062,-.05);
    glEnd();


    //door
    glColor3ub(51, 102, 255);
   glBegin(GL_QUADS);
    glVertex2f(.08,-.08);
    glVertex2f(.08,-.012);
    glVertex2f(.05,-.012);
    glVertex2f(.05,-.08);
  glEnd();

//plane pakha upper
glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(.25,0);
    glVertex2f(.3,.07);
    glVertex2f(.25,.07);
    glVertex2f(.18,0);
    glEnd();

//plane pakha lower
glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(.3,-.19);
    glVertex2f(.25,-.12);
    glVertex2f(.18,-.12);
    glVertex2f(.25,-.19);
    glEnd();


///plane window

 i;

 x=0.13f;  y=-0.04f; radius =.02f;
	triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();
	glPopMatrix();







///tree right

glColor3ub(117, 91, 21);
    glBegin(GL_QUADS);
    glVertex2f(.92,-.75);
    glVertex2f(.92,-.6);
    glVertex2f(.88,-.6);
    glVertex2f(.88,-.75);
    glEnd();

 glColor3ub(23, 156, 3);
    glBegin(GL_TRIANGLES);
    glVertex2f(.95,-.6);
    glVertex2f(.90,-.4);
    glVertex2f(.85,-.6);
    glEnd();


///tree left

glLoadIdentity();
glColor3ub(117, 91, 21);
    glBegin(GL_QUADS);
    glVertex2f(-.92,-.75);
    glVertex2f(-.92,-.6);
    glVertex2f(-.88,-.6);
    glVertex2f(-.88,-.75);
    glEnd();

 glColor3ub(23, 156, 3);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.95,-.6);
    glVertex2f(-.90,-.4);
    glVertex2f(-.85,-.6);
    glEnd();


/////////////////////////////////////////////////////////////
//windmill part
//quads
	glTranslatef(-0.6f, 0.5f, 0.0f);
	glScalef(.55,.55,0);
    glColor3ub(0,0,0 );
    glBegin(GL_POLYGON);
    glVertex2f(0.03,-.5);
    glVertex2f(0.0,0);//
    glVertex2f(-0.03,-0.5);
    glEnd();

//center circel
//    int i;
    x=-.0f;  y=-.0f; radius =.02f;
     triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);//// color for all wings
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//for rotation

	glPushMatrix();
	glRotatef(j,0,0,1);
////////////


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.10,-0.01);
    glVertex2f(0.25,0.0);
    glVertex2f(0.10,0.01);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.10,-0.01);
    glVertex2f(-0.25,0.0);
    glVertex2f(-0.10,0.01);
    glVertex2f(-0.0,-0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.01,0.10);
    glVertex2f(0.0,0.25);
    glVertex2f(0.01,0.10);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.01,-0.10);
    glVertex2f(0.0,-0.25);
    glVertex2f(-0.01,-0.10);
    glVertex2f(0.0,0.0);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    j+=.2;



 //2nd windmill quads
    glTranslatef(-0.8f, 0.6f, 0.0f);//
    glScalef(.55,.55,0);
    glColor3ub(0,0,0 );
    glBegin(GL_POLYGON);
    glVertex2f(0.03,-.5);
    glVertex2f(0.0,0);//
    glVertex2f(-0.03,-0.5);
    glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glPushMatrix();
	glRotatef(j,0,0,1);



    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.10,-0.01);
    glVertex2f(0.25,0.0);
    glVertex2f(0.10,0.01);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.10,-0.01);
    glVertex2f(-0.25,0.0);
    glVertex2f(-0.10,0.01);
    glVertex2f(-0.0,-0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.01,0.10);
    glVertex2f(0.0,0.25);
    glVertex2f(0.01,0.10);
    glVertex2f(0.0,0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.01,-0.10);
    glVertex2f(0.0,-0.25);
    glVertex2f(-0.01,-0.10);
    glVertex2f(0.0,0.0);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    j+=.02;



      ///cloud
///Cloud
	int iy;//1
   glTranslatef(-.1,0.5f, 0.0f);
      glTranslatef(positionm,0.0f, 0.0f);
    glScalef(.5f,.5f,0.0f);
	GLfloat xy=-.45f; GLfloat yy=.82f; GLfloat radiusy =.07f;
	int triangleAmounty = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiy = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xy,yy); // center of circle
		for(iy = 0; iy <= triangleAmounty;iy++) {
			glVertex2f(
		            xy + (radiusy * cos(iy *  twicePiy / triangleAmounty)),
			    yy + (radiusy * sin(iy * twicePiy / triangleAmounty))
			);
		}
	glEnd();

    int ix;//2
	GLfloat xx=-.49f; GLfloat yx=.9f; GLfloat radiusx =.07f;
	int triangleAmountx = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePix = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xx,yx); // center of circle
		for(ix = 0; ix <= triangleAmountx;ix++) {
			glVertex2f(
		            xx + (radiusx * cos(ix *  twicePix / triangleAmountx)),
			    yx + (radiusx * sin(ix * twicePix / triangleAmountx))
			);
		}
	glEnd();

    int iw;//3
	GLfloat xw=-.56f; GLfloat yw=.9f; GLfloat radiusw =.04f;
	int triangleAmountw = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiw = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xw,yw); // center of circle
		for(iw = 0; iw <= triangleAmountw;iw++) {
			glVertex2f(
		            xw + (radiusw * cos(iw *  twicePiw / triangleAmountw)),
			    yw + (radiusw * sin(iw * twicePiw / triangleAmountw))
			);
		}
	glEnd();

	    int iv;//4
	GLfloat xv=-.60f; GLfloat yv=.828f; GLfloat radiusv =.07f;
	int triangleAmountv = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiv = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xv,yv); // center of circle
		for(iv = 0; iv <= triangleAmountv;iv++) {
			glVertex2f(
		            xv + (radiusv * cos(iv *  twicePiv / triangleAmountv)),
			    yv + (radiusv * sin(iv * twicePiv/ triangleAmountv))
			);
		}
	glEnd();

	    int iu;//5
	GLfloat xu=-.52f; GLfloat yu=.79f; GLfloat radiusu =.05f;
	int triangleAmountu = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiu = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xu,yu); // center of circle
		for(iu = 0; iu <= triangleAmountu;iu++) {
			glVertex2f(
		            xu + (radiusu * cos(iu *  twicePiu / triangleAmountu)),
			    yu + (radiusu * sin(iu * twicePiu/ triangleAmountu))
			);
		}
	glEnd();
//Up cloud done
//down cloud
	int it;//1

	GLfloat xt=-.62f; GLfloat yt=.657f; GLfloat radiust =.07f;
	int triangleAmountt = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePit = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xt,yt); // center of circle
		for(it = 0; it <= triangleAmountt;it++) {
			glVertex2f(
		            xt + (radiust * cos(it *  twicePit / triangleAmountt)),
			    yt + (radiust * sin(it * twicePit / triangleAmountt))
			);
		}
	glEnd();
	int iq;//2

	GLfloat xq=-.675f; GLfloat yq=.75f; GLfloat radiusq =.07f;
	int triangleAmountq = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiq = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xq,yq); // center of circle
		for(iq = 0; iq <= triangleAmountq;iq++) {
			glVertex2f(
		            xq + (radiusq * cos(iq *  twicePiq / triangleAmountq)),
			    yq + (radiusq * sin(iq * twicePiq / triangleAmountq))
			);
		}
	glEnd();

	int is;//3
	GLfloat xs=-.756f; GLfloat ys=.77f; GLfloat radiuss =.04f;
	int triangleAmounts = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePis = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xs,ys); // center of circle
		for(is = 0; is <= triangleAmounts;is++) {
			glVertex2f(
		            xs + (radiuss * cos(is *  twicePis / triangleAmounts)),
			    ys + (radiuss * sin(is * twicePis / triangleAmounts))
			);
		}
	glEnd();

    int ir;//4
	GLfloat xr=-.8f; GLfloat yr=.7f; GLfloat radiusr =.07f;
	int triangleAmountr = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePir = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xr,yr); // center of circle
		for(ir = 0; ir <= triangleAmountr;ir++) {
			glVertex2f(
		            xr + (radiusr * cos(ir *  twicePir / triangleAmountr)),
			    yr + (radiusr * sin(ir * twicePir / triangleAmountr))
			);
		}
	glEnd();

    int ip;//5
	GLfloat xp=-.714f; GLfloat yp=.66f; GLfloat radiusp =.07f;
	int triangleAmountp = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePip = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xp,yp); // center of circle
		for(ip = 0; ip <= triangleAmountp;ip++) {
			glVertex2f(
		            xp + (radiusp * cos(ip *  twicePip / triangleAmountp)),
			    yp + (radiusp * sin(ip * twicePip / triangleAmountp))
			);
		}
	glEnd();
	glLoadIdentity();
//end cloud
glFlush();
//glutTimerFunc(5000,night,0);
}





void PlaneBD(int val)
{


//plane
glLoadIdentity();
glPushMatrix();
glScalef(j,j, 0.0f);
glTranslatef(positionz,0.0f, 0.0f);
glTranslatef(.4,.8,0);
glScalef(.5,.5,0);



//main body
glColor3ub(153, 204, 255);
    glBegin(GL_QUADS);
    glVertex2f(.45,-.1);
    glVertex2f(.45,0);
    glVertex2f(-.0,0);
    glVertex2f(-.125,-.1);
    glEnd();

//end part
    glColor3ub(153, 204, 255);
    glBegin(GL_POLYGON);
    glVertex2f(.45,0);
    glVertex2f(.45,-.12);
    glVertex2f(.5,-.12);
    glVertex2f(.59,.12);
    glVertex2f(.54,.12);
    glEnd();
    //lower layer
 glColor3ub(0, 153, 255);
    glBegin(GL_QUADS);
    glVertex2f(.5,-.12);
    glVertex2f(.51,-.1);
    glVertex2f(-.125,-.1);
    glVertex2f(-.145,-.12);
    glEnd();
//pilot part
    glColor3ub(51, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.08);
    glVertex2f(.03,0);
    glVertex2f(0,0);
    glVertex2f(-.1,-.08);
    glEnd();

//cockpit part
    glColor3ub(  215, 212, 211  );
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-.05);
    glVertex2f(0,0);
    glVertex2f(-.062,-.05);
    glEnd();


    //door
    glColor3ub(51, 102, 255);
   glBegin(GL_QUADS);
    glVertex2f(.08,-.08);
    glVertex2f(.08,-.012);
    glVertex2f(.05,-.012);
    glVertex2f(.05,-.08);
  glEnd();

//plane pakha upper
glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(.25,0);
    glVertex2f(.3,.07);
    glVertex2f(.25,.07);
    glVertex2f(.18,0);
    glEnd();

//plane pakha lower
glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(.3,-.19);
    glVertex2f(.25,-.12);
    glVertex2f(.18,-.12);
    glVertex2f(.25,-.19);
    glEnd();


///plane window

GLfloat i;

GLfloat x=0.13f; GLfloat y=-0.04f;GLfloat radius =.02f;
GLfloat	triangleAmount = 20; //# of triangles used to draw circle
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();
j-=.1;
glutTimerFunc(1000,PlaneBD,0);
glLoadIdentity();
}


void night()
{
      glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
///sky
glLoadIdentity();
    glColor3ub(100, 102, 97);
    glBegin(GL_QUADS);
    glVertex2f(1,.45);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.45);
    glEnd();

//Land
glColor3ub(  122, 130, 124  );
    glBegin(GL_QUADS);
    glVertex2f(1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();

    ///The moon
 int i;
glLoadIdentity();
GLfloat x=-.1f; GLfloat y=0.8f; GLfloat radius =.1f;
GLfloat	 triangleAmount = 20; //# of triangles used to draw circle
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub( 242, 249, 243 );
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	//int i;
glLoadIdentity();
 x=-.07f;  y=0.85f;  radius =.1f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(100, 102, 97);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


    ///cloud
///Cloud
	int iy;//1
   glTranslatef(-.1,0.5f, 0.0f);
      glTranslatef(positionm,0.0f, 0.0f);
    glScalef(.5f,.5f,0.0f);
	GLfloat xy=-.45f; GLfloat yy=.82f; GLfloat radiusy =.07f;
	int triangleAmounty = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiy = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xy,yy); // center of circle
		for(iy = 0; iy <= triangleAmounty;iy++) {
			glVertex2f(
		            xy + (radiusy * cos(iy *  twicePiy / triangleAmounty)),
			    yy + (radiusy * sin(iy * twicePiy / triangleAmounty))
			);
		}
	glEnd();

    int ix;//2
	GLfloat xx=-.49f; GLfloat yx=.9f; GLfloat radiusx =.07f;
	int triangleAmountx = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePix = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xx,yx); // center of circle
		for(ix = 0; ix <= triangleAmountx;ix++) {
			glVertex2f(
		            xx + (radiusx * cos(ix *  twicePix / triangleAmountx)),
			    yx + (radiusx * sin(ix * twicePix / triangleAmountx))
			);
		}
	glEnd();

    int iw;//3
	GLfloat xw=-.56f; GLfloat yw=.9f; GLfloat radiusw =.04f;
	int triangleAmountw = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiw = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xw,yw); // center of circle
		for(iw = 0; iw <= triangleAmountw;iw++) {
			glVertex2f(
		            xw + (radiusw * cos(iw *  twicePiw / triangleAmountw)),
			    yw + (radiusw * sin(iw * twicePiw / triangleAmountw))
			);
		}
	glEnd();

	    int iv;//4
	GLfloat xv=-.60f; GLfloat yv=.828f; GLfloat radiusv =.07f;
	int triangleAmountv = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiv = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xv,yv); // center of circle
		for(iv = 0; iv <= triangleAmountv;iv++) {
			glVertex2f(
		            xv + (radiusv * cos(iv *  twicePiv / triangleAmountv)),
			    yv + (radiusv * sin(iv * twicePiv/ triangleAmountv))
			);
		}
	glEnd();

	    int iu;//5
	GLfloat xu=-.52f; GLfloat yu=.79f; GLfloat radiusu =.05f;
	int triangleAmountu = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
		GLfloat twicePiu = 2.0f * PI;
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xu,yu); // center of circle
		for(iu = 0; iu <= triangleAmountu;iu++) {
			glVertex2f(
		            xu + (radiusu * cos(iu *  twicePiu / triangleAmountu)),
			    yu + (radiusu * sin(iu * twicePiu/ triangleAmountu))
			);
		}
	glEnd();
//Up cloud done
//down cloud
	int it;//1

	GLfloat xt=-.62f; GLfloat yt=.657f; GLfloat radiust =.07f;
	int triangleAmountt = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePit = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xt,yt); // center of circle
		for(it = 0; it <= triangleAmountt;it++) {
			glVertex2f(
		            xt + (radiust * cos(it *  twicePit / triangleAmountt)),
			    yt + (radiust * sin(it * twicePit / triangleAmountt))
			);
		}
	glEnd();
	int iq;//2

	GLfloat xq=-.675f; GLfloat yq=.75f; GLfloat radiusq =.07f;
	int triangleAmountq = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePiq = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xq,yq); // center of circle
		for(iq = 0; iq <= triangleAmountq;iq++) {
			glVertex2f(
		            xq + (radiusq * cos(iq *  twicePiq / triangleAmountq)),
			    yq + (radiusq * sin(iq * twicePiq / triangleAmountq))
			);
		}
	glEnd();

	int is;//3
	GLfloat xs=-.756f; GLfloat ys=.77f; GLfloat radiuss =.04f;
	int triangleAmounts = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePis = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xs,ys); // center of circle
		for(is = 0; is <= triangleAmounts;is++) {
			glVertex2f(
		            xs + (radiuss * cos(is *  twicePis / triangleAmounts)),
			    ys + (radiuss * sin(is * twicePis / triangleAmounts))
			);
		}
	glEnd();

    int ir;//4
	GLfloat xr=-.8f; GLfloat yr=.7f; GLfloat radiusr =.07f;
	int triangleAmountr = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePir = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xr,yr); // center of circle
		for(ir = 0; ir <= triangleAmountr;ir++) {
			glVertex2f(
		            xr + (radiusr * cos(ir *  twicePir / triangleAmountr)),
			    yr + (radiusr * sin(ir * twicePir / triangleAmountr))
			);
		}
	glEnd();

    int ip;//5
	GLfloat xp=-.714f; GLfloat yp=.66f; GLfloat radiusp =.07f;
	int triangleAmountp = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePip = 2.0f * PI;
	glColor3ub(255, 255,255);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xp,yp); // center of circle
		for(ip = 0; ip <= triangleAmountp;ip++) {
			glVertex2f(
		            xp + (radiusp * cos(ip *  twicePip / triangleAmountp)),
			    yp + (radiusp * sin(ip * twicePip / triangleAmountp))
			);
		}
	glEnd();
	glLoadIdentity();
//end cloud



glLoadIdentity();
    ///street light
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    glTranslatef(.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    //////////////////////////////////////

  glTranslatef(0,-.35,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();


  glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

    glTranslatef(-.3,0,0);
glColor3ub(68, 65, 65 );
    glBegin(GL_TRIANGLES);
    glVertex2f(-.8,.10);
    glVertex2f(-.77,.13);
    glVertex2f(-.83,.13);
    glEnd();
glColor3ub(255, 255, 255 );
    glBegin(GL_QUADS);
    glVertex2f(-.83,.13);
    glVertex2f(-.77,.13);
    glVertex2f(-.70,.20);
    glVertex2f(-.90,.20);
    glEnd();

glLoadIdentity();


///Road 1 middle
    /*glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();*/

glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(1,.1);
    glVertex2f(-1,.1);
    glEnd();

glColor3ub(253, 253, 150);
    glBegin(GL_LINES);
    glVertex2f(1,-.25);
    glVertex2f(-1,-.25);
    glEnd();

    ///road indicator left
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(-.18,0,0);
    glColor3ub(255, 255, 255);GLfloat position1 = 0.0f;
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();

    //road indicator left
    glLoadIdentity();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
     glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();

     glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();
    glTranslatef(.18,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.06,-.085);
    glVertex2f(.06,-.075);
    glVertex2f(-.06,-.075);
    glVertex2f(-.06,-.085);
    glEnd();




///plane

glLoadIdentity();
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
//glTranslatef(-(position+position1),-position1, 0.0f);
///main body
glColor3ub(153, 204, 255);
    glBegin(GL_QUADS);
    glVertex2f(.45,-.1);
    glVertex2f(.45,0);
    glVertex2f(-.0,0);
    glVertex2f(-.125,-.1);
    glEnd();

///end part
    glColor3ub(153, 204, 255);
    glBegin(GL_POLYGON);
    glVertex2f(.45,0);
    glVertex2f(.45,-.12);
    glVertex2f(.5,-.12);
    glVertex2f(.59,.12);
    glVertex2f(.54,.12);
    glEnd();
    ///lower layer
 glColor3ub(0, 153, 255);
    glBegin(GL_QUADS);
    glVertex2f(.5,-.12);
    glVertex2f(.51,-.1);
    glVertex2f(-.125,-.1);
    glVertex2f(-.145,-.12);
    glEnd();
///pilot part
glColor3ub(51, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.08);
    glVertex2f(.03,0);
    glVertex2f(0,0);
    glVertex2f(-.1,-.08);
    glEnd();
    ///cockpit part
glColor3ub(  215, 212, 211  );
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-.05);
    glVertex2f(0,0);
    glVertex2f(-.062,-.05);
    glEnd();


    ///door
glColor3ub(51, 102, 255);
   glBegin(GL_QUADS);
    glVertex2f(.08,-.08);
    glVertex2f(.08,-.012);
    glVertex2f(.05,-.012);
    glVertex2f(.05,-.08);
  glEnd();

///plane window

//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


///plane pakha upper


 glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(-.05,0);
    glVertex2f(0,.07);
    glVertex2f(-.05,.07);
    glVertex2f(-.13,0);
    glEnd();


///plane pakha lower

 glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(0,-.19);
    glVertex2f(-.05,-.12);
    glVertex2f(-.13,-.12);
    glVertex2f(-.05,-.19);
    glEnd();



///plane wheel square front

 glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.15);
    glEnd();
 ///plane wheel front
    x=0.0275f;  y=-0.15f;  radius =.013f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();



	///plane wheel square back1
	glTranslatef(-.25,0,0);

 glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.145);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.145);
    glEnd();
 ///plane wheel back1
    x=0.0275f;  y=-0.15f;  radius =.01f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

///plane wheel square back2
glTranslatef(.05,0,0);
glColor3ub(245,245,245);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.12);
    glVertex2f(.025,-.12);
    glVertex2f(.025,-.15);
    glEnd();
 ///plane wheel front
    x=0.0275f;  y=-0.15f;  radius =.013f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


glPopMatrix();



/*glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(1,-.5);
    glVertex2f(-1,-.5);
    glEnd();*/


    /////House
    /*glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.1,.45);
    glVertex2f(-1,.45);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
*/



///airport square circle

glLoadIdentity();
//int i;

 x=0.0f;  y=-.6f;  radius =.2f;
 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 102, 153);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//airport big square
	glColor3ub(31, 46, 46);
    glBegin(GL_QUADS);
    glVertex2f(.8,-.8);
    glVertex2f(.8,-.6);
    glVertex2f(-.8,-.6);
    glVertex2f(-.8,-.8);
    glEnd();
    //airport mid square door
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.4,-.8);
    glVertex2f(.4,-.65);
    glVertex2f(-.4,-.65);
    glVertex2f(-.4,-.8);
    glEnd();
    //airport mid square door upper white
glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.4,-.7);
    glVertex2f(.4,-.65);
    glVertex2f(-.4,-.65);
    glVertex2f(-.4,-.7);
    glEnd();
//airport door lower part
    glColor3ub(0, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.9,-.85);
    glVertex2f(.8,-.8);
    glVertex2f(-.8,-.8);
    glVertex2f(-.9,-.85);
    glEnd();
    //airport door side right
    glColor3ub(102, 0, 51);
    glBegin(GL_QUADS);
    glVertex2f(.8,-.8);
    glVertex2f(.8,-.77);
    glVertex2f(.4,-.77);
    glVertex2f(.4,-.8);
    glEnd();
    //airport door side left
    glColor3ub(102, 0, 51);
    glBegin(GL_QUADS);
    glVertex2f(-.4,-.8);
    glVertex2f(-.4,-.77);
    glVertex2f(-.8,-.77);
    glVertex2f(-.8,-.8);
    glEnd();

    //airport door side window left
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glVertex2f(-.47,-.68);
    glVertex2f(-.47,-.74);
    glEnd();

    //airport door side window left separator
    glLoadIdentity();
    glColor3ub(31, 46, 46);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.045,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();
    glTranslatef(-.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(-.43,-.74);
    glVertex2f(-.43,-.68);
    glEnd();

     //airport door side window right
     glLoadIdentity();
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
    glTranslatef(.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
    glTranslatef(.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

    glTranslatef(.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

    glTranslatef(.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glVertex2f(.47,-.68);
    glVertex2f(.47,-.74);
    glEnd();

//airport door side window right separator
    glLoadIdentity();
    glColor3ub(31, 46, 46);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
    glTranslatef(.045,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
     glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
glTranslatef(.05,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.43,-.74);
    glVertex2f(.43,-.68);
    glEnd();
//airport mid square door seperator
glLoadIdentity();
   glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.4,-.73);
    glVertex2f(-.4,-.73);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    glTranslatef(-.1,0,0);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(.3,-.7);
    glVertex2f(.3,-.8);
    glEnd();

    //airport square circle side square right
    glLoadIdentity();
    glColor3ub(51, 102, 255);
    glBegin(GL_QUADS);
    glVertex2f(.6,-.6);
    glVertex2f(.6,-.5);
    glVertex2f(.175,-.5);
    glVertex2f(.16,-.6);
    glEnd();

    //airport square circle side square right window
    /*glLoadIdentity();
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
    glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
    glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();glTranslated(-.06,0,0);
glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(.66,-.57);
    glVertex2f(.66,-.52);
    glVertex2f(.61,-.52);
    glVertex2f(.61,-.57);
    glEnd();
*/



    //airport square circle side square left
    glLoadIdentity();
    glColor3ub(51, 102, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.6,-.6);
    glVertex2f(-.6,-.5);
    glVertex2f(-.175,-.5);
    glVertex2f(-.16,-.6);
    glEnd();

     //airport square circle separator
    glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(.17,-.53);
    glVertex2f(-.17,-.53);
    glEnd();

     glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(.1,-.6);
    glVertex2f(.12,-.45);
    glEnd();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(-.1,-.6);
    glVertex2f(-.12,-.45);
    glEnd();
 glLoadIdentity();
    glColor3ub(0, 0, 153);
    glBegin(GL_LINES);
    glVertex2f(0,-.6);
    glVertex2f(0,-.4);
    glEnd();



 //airport square circle side square left window
   /* glLoadIdentity();
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
   glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
    glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();
glTranslated(.06,0,0);
   glBegin(GL_QUADS);
    glVertex2f(-.61,-.52);
    glVertex2f(-.61,-.57);
    glVertex2f(-.66,-.57);
    glVertex2f(-.66,-.52);
    glEnd();*/

//////////////////////////////////////////////////////////
///2nd plane


//plane

glLoadIdentity();
glPushMatrix();
glTranslatef(positionz,0.0f, 0.0f);
glTranslatef(.4,.8,0);
glScalef(.00005,.00005,0);
glScalef(j,j, 0.0f);


//main body
glColor3ub(153, 204, 255);
    glBegin(GL_QUADS);
    glVertex2f(.45,-.1);
    glVertex2f(.45,0);
    glVertex2f(-.0,0);
    glVertex2f(-.125,-.1);
    glEnd();

//end part
    glColor3ub(153, 204, 255);
    glBegin(GL_POLYGON);
    glVertex2f(.45,0);
    glVertex2f(.45,-.12);
    glVertex2f(.5,-.12);
    glVertex2f(.59,.12);
    glVertex2f(.54,.12);
    glEnd();
    //lower layer
 glColor3ub(0, 153, 255);
    glBegin(GL_QUADS);
    glVertex2f(.5,-.12);
    glVertex2f(.51,-.1);
    glVertex2f(-.125,-.1);
    glVertex2f(-.145,-.12);
    glEnd();
//pilot part
    glColor3ub(51, 51, 204);
    glBegin(GL_QUADS);
    glVertex2f(.03,-.08);
    glVertex2f(.03,0);
    glVertex2f(0,0);
    glVertex2f(-.1,-.08);
    glEnd();

//cockpit part
    glColor3ub(  215, 212, 211  );
    glBegin(GL_TRIANGLES);
    glVertex2f(0,-.05);
    glVertex2f(0,0);
    glVertex2f(-.062,-.05);
    glEnd();


    //door
    glColor3ub(51, 102, 255);
   glBegin(GL_QUADS);
    glVertex2f(.08,-.08);
    glVertex2f(.08,-.012);
    glVertex2f(.05,-.012);
    glVertex2f(.05,-.08);
  glEnd();

//plane pakha upper
glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(.25,0);
    glVertex2f(.3,.07);
    glVertex2f(.25,.07);
    glVertex2f(.18,0);
    glEnd();

//plane pakha lower
glColor3ub(163, 188, 192);
    glBegin(GL_QUADS);
    glVertex2f(.3,-.19);
    glVertex2f(.25,-.12);
    glVertex2f(.18,-.12);
    glVertex2f(.25,-.19);
    glEnd();


///plane window

 i;

 x=0.13f;  y=-0.04f; radius =.02f;
	triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	glTranslatef(0.063,0,0);
//int i;

 x=0.13f;  y=-0.04f;  radius =.02f;
	 triangleAmount = 20; //# of triangles used to draw circle
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();
glPopMatrix();
j-=.1;
glutTimerFunc(.10,PlaneBD,0);






///tree right

glColor3ub(117, 91, 21);
    glBegin(GL_QUADS);
    glVertex2f(.92,-.75);
    glVertex2f(.92,-.6);
    glVertex2f(.88,-.6);
    glVertex2f(.88,-.75);
    glEnd();

 glColor3ub(23, 156, 3);
    glBegin(GL_TRIANGLES);
    glVertex2f(.95,-.6);
    glVertex2f(.90,-.4);
    glVertex2f(.85,-.6);
    glEnd();


///tree left

glLoadIdentity();
glColor3ub(117, 91, 21);
    glBegin(GL_QUADS);
    glVertex2f(-.92,-.75);
    glVertex2f(-.92,-.6);
    glVertex2f(-.88,-.6);
    glVertex2f(-.88,-.75);
    glEnd();

 glColor3ub(23, 156, 3);
    glBegin(GL_TRIANGLES);
    glVertex2f(-.95,-.6);
    glVertex2f(-.90,-.4);
    glVertex2f(-.85,-.6);
    glEnd();


/////////////////////////////////////////////////////////////
//windmill part
//quads
glLoadIdentity();
	glTranslatef(-0.6f, 0.5f, 0.0f);
	glScalef(.55,.55,0);
    glColor3ub(0,0,0 );
    glBegin(GL_POLYGON);
    glVertex2f(0.03,-.5);
    glVertex2f(0.0,0);//
    glVertex2f(-0.03,-0.5);
    glEnd();

//center circel
//    int i;
    x=-.0f;  y=-.0f; radius =.02f;
     triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);//// color for all wings
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//for rotation

	glPushMatrix();
	glRotatef(j,0,0,1);
////////////


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.10,-0.01);
    glVertex2f(0.25,0.0);
    glVertex2f(0.10,0.01);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.10,-0.01);
    glVertex2f(-0.25,0.0);
    glVertex2f(-0.10,0.01);
    glVertex2f(-0.0,-0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.01,0.10);
    glVertex2f(0.0,0.25);
    glVertex2f(0.01,0.10);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.01,-0.10);
    glVertex2f(0.0,-0.25);
    glVertex2f(-0.01,-0.10);
    glVertex2f(0.0,0.0);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    j+=.2;



 //2nd windmill quads
    glTranslatef(-0.8f, 0.6f, 0.0f);//
    glScalef(.55,.55,0);
    glColor3ub(0,0,0 );
    glBegin(GL_POLYGON);
    glVertex2f(0.03,-.5);
    glVertex2f(0.0,0);//
    glVertex2f(-0.03,-0.5);
    glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250, 250, 250);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glPushMatrix();
	glRotatef(j,0,0,1);



    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.10,-0.01);
    glVertex2f(0.25,0.0);
    glVertex2f(0.10,0.01);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.10,-0.01);
    glVertex2f(-0.25,0.0);
    glVertex2f(-0.10,0.01);
    glVertex2f(-0.0,-0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.01,0.10);
    glVertex2f(0.0,0.25);
    glVertex2f(0.01,0.10);
    glVertex2f(0.0,0.0);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(0.01,-0.10);
    glVertex2f(0.0,-0.25);
    glVertex2f(-0.01,-0.10);
    glVertex2f(0.0,0.0);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    j+=.02;

//end cloud
   ///rain
    //Rain Effect

    ///rain
    //Rain Effect
    glLoadIdentity();
    glTranslatef(0.0f,positionr,0.0f);

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.9,0.6);
    glVertex2f(-0.93,0.5);

    glVertex2f(-0.8,0.6);
    glVertex2f( -0.83,0.5);

    glVertex2f( -0.7,0.6);
    glVertex2f(-0.73,0.5);

    glVertex2f(-0.6,0.6);
    glVertex2f(-0.63,0.5);

    glVertex2f(-0.5,0.6);
    glVertex2f( -0.53,0.5);

    glVertex2f( -0.4,0.6);
    glVertex2f(-0.43,0.5);

    glVertex2f(-0.3,0.6);
    glVertex2f(-0.33,0.5);

    glVertex2f(-0.2,0.6);
    glVertex2f( -0.23,0.5);

    glVertex2f( -0.1,0.6);
    glVertex2f(-0.13,0.5);

    glVertex2f(0.03,0.6);
    glVertex2f(0.0,0.5);

    glVertex2f(0.13,0.6);
    glVertex2f( 0.1,0.5);

    glVertex2f( 0.23,0.6);
    glVertex2f(0.2,0.5);

   glVertex2f(0.33,0.6);
    glVertex2f(0.3,0.5);

    glVertex2f(0.43,0.6);
    glVertex2f( 0.4,0.5);

    glVertex2f( 0.53,0.6);
    glVertex2f(0.5,0.5);

    glVertex2f(0.63,0.6);
    glVertex2f(0.6,0.5);

    glVertex2f(0.73,0.6);
    glVertex2f( 0.7,0.5);

    glVertex2f( 0.83,0.6);
    glVertex2f(0.8,0.5);

    glVertex2f(0.93,0.6);
    glVertex2f(0.9,0.5);
//2nd line rain
    glVertex2f(-0.9,0.4);
    glVertex2f(-0.93,0.3);

    glVertex2f(-0.8,0.4);
    glVertex2f( -0.83,0.3);

    glVertex2f( -0.7,0.4);
    glVertex2f(-0.73,0.3);

    glVertex2f(-0.6,0.4);
    glVertex2f(-0.63,0.3);

    glVertex2f(-0.5,0.4);
    glVertex2f( -0.53,0.3);

    glVertex2f( -0.4,0.4);
    glVertex2f(-0.43,0.3);

    glVertex2f(-0.3,0.4);
    glVertex2f(-0.33,0.3);

    glVertex2f(-0.2,0.4);
    glVertex2f( -0.23,0.3);

    glVertex2f( -0.1,0.4);
    glVertex2f(-0.13,0.3);

    glVertex2f(0.03,0.4);
    glVertex2f(0.0,0.3);

    glVertex2f(0.13,0.4);
    glVertex2f( 0.1,0.3);

    glVertex2f( 0.23,0.4);
    glVertex2f(0.2,0.3);

   glVertex2f(0.33,0.4);
    glVertex2f(0.3,0.3);

    glVertex2f(0.43,0.4);
    glVertex2f( 0.4,0.3);

    glVertex2f( 0.53,0.4);
    glVertex2f(0.5,0.3);

    glVertex2f(0.63,0.4);
    glVertex2f(0.6,0.3);

    glVertex2f(0.73,0.4);
    glVertex2f( 0.7,0.3);

    glVertex2f( 0.83,0.4);
    glVertex2f(0.8,0.3);

    glVertex2f(0.93,0.4);
    glVertex2f(0.9,0.3);
//3rd line rain
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.93,0.1);

    glVertex2f(-0.8,0.2);
    glVertex2f( -0.83,0.1);

    glVertex2f( -0.7,0.2);
    glVertex2f(-0.73,0.1);

    glVertex2f(-0.6,0.2);
    glVertex2f(-0.63,0.1);

    glVertex2f(-0.5,0.2);
    glVertex2f( -0.53,0.1);

    glVertex2f( -0.4,0.2);
    glVertex2f(-0.43,0.1);

    glVertex2f(-0.3,0.2);
    glVertex2f(-0.33,0.1);

    glVertex2f(-0.2,0.2);
    glVertex2f( -0.23,0.1);

    glVertex2f( -0.1,0.2);
    glVertex2f(-0.13,0.1);

    glVertex2f(0.03,0.2);
    glVertex2f(0.0,0.1);

    glVertex2f(0.13,0.2);
    glVertex2f( 0.1,0.1);

    glVertex2f( 0.23,0.2);
    glVertex2f(0.2,0.1);

   glVertex2f(0.33,0.2);
    glVertex2f(0.3,0.1);

    glVertex2f(0.43,0.2);
    glVertex2f( 0.4,0.1);

    glVertex2f( 0.53,0.2);
    glVertex2f(0.5,0.1);

    glVertex2f(0.63,0.2);
    glVertex2f(0.6,0.1);

    glVertex2f(0.73,0.2);
    glVertex2f( 0.7,0.1);

    glVertex2f( 0.83,0.2);
    glVertex2f(0.8,0.1);

    glVertex2f(0.93,0.2);
    glVertex2f(0.9,0.1);
//4th line rain
    glVertex2f(-0.9,0.0);
    glVertex2f(-0.93,-0.1);

    glVertex2f(-0.8,0.0);
    glVertex2f( -0.83,-0.1);

    glVertex2f( -0.7,0.0);
    glVertex2f(-0.73,-0.1);

    glVertex2f(-0.6,0.0);
    glVertex2f(-0.63,-0.1);

    glVertex2f(-0.5,0.0);
    glVertex2f( -0.53,-0.1);

    glVertex2f( -0.4,0.0);
    glVertex2f(-0.43,-0.1);

    glVertex2f(-0.3,0.0);
    glVertex2f(-0.33,-0.1);

    glVertex2f(-0.2,0.0);
    glVertex2f( -0.23,-0.1);

    glVertex2f( -0.1,0.0);
    glVertex2f(-0.13,-0.1);

    glVertex2f(0.03,0.0);
    glVertex2f(0.0,-0.1);

    glVertex2f(0.13,0.0);
    glVertex2f( 0.1,-0.1);

    glVertex2f( 0.23,0.0);
    glVertex2f(0.2,-0.1);

   glVertex2f(0.33,0.0);
    glVertex2f(0.3,-0.1);

    glVertex2f(0.43,0.0);
    glVertex2f( 0.4,-0.1);

    glVertex2f( 0.53,0.0);
    glVertex2f(0.5,-0.1);

    glVertex2f(0.63,0.0);
    glVertex2f(0.6,-0.1);

    glVertex2f(0.73,0.0);
    glVertex2f( 0.7,-0.1);

    glVertex2f( 0.83,0.0);
    glVertex2f(0.8,-0.1);

    glVertex2f(0.93,0.0);
    glVertex2f(0.9,-0.1);
//5th line rain
    glVertex2f(-0.9,-0.2);
    glVertex2f(-0.93,-0.3);

    glVertex2f(-0.8,-0.2);
    glVertex2f( -0.83,-0.3);

    glVertex2f( -0.7,-0.2);
    glVertex2f(-0.73,-0.3);

    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.63,-0.3);

    glVertex2f(-0.5,-0.2);
    glVertex2f( -0.53,-0.3);

    glVertex2f( -0.4,-0.2);
    glVertex2f(-0.43,-0.3);

    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.33,-0.3);

    glVertex2f(-0.2,-0.2);
    glVertex2f( -0.23,-0.3);

    glVertex2f( -0.1,-0.2);
    glVertex2f(-0.13,-0.3);

    glVertex2f(0.03,-0.2);
    glVertex2f(0.0,-0.3);

    glVertex2f(0.13,-0.2);
    glVertex2f( 0.1,-0.3);

    glVertex2f( 0.23,-0.2);
    glVertex2f(0.2,-0.3);

   glVertex2f(0.33,-0.2);
    glVertex2f(0.3,-0.3);

    glVertex2f(0.43,-0.2);
    glVertex2f( 0.4,-0.3);

    glVertex2f( 0.53,-0.2);
    glVertex2f(0.5,-0.3);

    glVertex2f(0.63,-0.2);
    glVertex2f(0.6,-0.3);

    glVertex2f(0.73,-0.2);
    glVertex2f( 0.7,-0.3);

    glVertex2f( 0.83,-0.2);
    glVertex2f(0.8,-0.3);

    glVertex2f(0.93,-0.2);
    glVertex2f(0.9,-0.3);
//6th line rain
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.93,-0.5);

    glVertex2f(-0.8,-0.4);
    glVertex2f( -0.83,-0.5);

    glVertex2f( -0.7,-0.4);
    glVertex2f(-0.73,-0.5);

    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.63,-0.5);

    glVertex2f(-0.5,-0.4);
    glVertex2f( -0.53,-0.5);

    glVertex2f( -0.4,-0.4);
    glVertex2f(-0.43,-0.5);

    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.33,-0.5);

    glVertex2f(-0.2,-0.4);
    glVertex2f( -0.23,-0.5);

    glVertex2f( -0.1,-0.4);
    glVertex2f(-0.13,-0.5);

    glVertex2f(0.03,-0.4);
    glVertex2f(0.0,-0.5);

    glVertex2f(0.13,-0.4);
    glVertex2f( 0.1,-0.5);

    glVertex2f( 0.23,-0.4);
    glVertex2f(0.2,-0.5);

   glVertex2f(0.33,-0.4);
    glVertex2f(0.3,-0.5);

    glVertex2f(0.43,-0.4);
    glVertex2f( 0.4,-0.5);

    glVertex2f( 0.53,-0.4);
    glVertex2f(0.5,-0.5);

    glVertex2f(0.63,-0.4);
    glVertex2f(0.6,-0.5);

    glVertex2f(0.73,-0.4);
    glVertex2f( 0.7,-0.5);

    glVertex2f( 0.83,-0.4);
    glVertex2f(0.8,-0.5);

    glVertex2f(0.93,-0.4);
    glVertex2f(0.9,-0.5);
//7th line rain
    glVertex2f(-0.9,-0.6);
    glVertex2f(-0.93,-0.7);

    glVertex2f(-0.8,-0.6);
    glVertex2f( -0.83,-0.7);

    glVertex2f( -0.7,-0.6);
    glVertex2f(-0.73,-0.7);

    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.63,-0.7);

    glVertex2f(-0.5,-0.6);
    glVertex2f( -0.53,-0.7);

    glVertex2f( -0.4,-0.6);
    glVertex2f(-0.43,-0.7);

    glVertex2f(-0.3,-0.6);
    glVertex2f(-0.33,-0.7);

    glVertex2f(-0.2,-0.6);
    glVertex2f( -0.23,-0.7);

    glVertex2f( -0.1,-0.6);
    glVertex2f(-0.13,-0.7);

    glVertex2f(0.03,-0.6);
    glVertex2f(0.0,-0.7);

    glVertex2f(0.13,-0.6);
    glVertex2f( 0.1,-0.7);

    glVertex2f( 0.23,-0.6);
    glVertex2f(0.2,-0.7);

    glVertex2f(0.33,-0.6);
    glVertex2f(0.3,-0.7);

    glVertex2f(0.43,-0.6);
    glVertex2f( 0.4,-0.7);

    glVertex2f( 0.53,-0.6);
    glVertex2f(0.5,-0.7);

    glVertex2f(0.63,-0.6);
    glVertex2f(0.6,-0.7);

    glVertex2f(0.73,-0.6);
    glVertex2f( 0.7,-0.7);

    glVertex2f( 0.83,-0.6);
    glVertex2f(0.8,-0.7);

    glVertex2f(0.93,-0.6);
    glVertex2f(0.9,-0.7);
//8th line rain
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.93,-0.9);

    glVertex2f(-0.8,-0.8);
    glVertex2f( -0.83,-0.9);

    glVertex2f( -0.7,-0.8);
    glVertex2f(-0.73,-0.9);

    glVertex2f(-0.6,-0.8);
    glVertex2f(-0.63,-0.9);

    glVertex2f(-0.5,-0.8);
    glVertex2f( -0.53,-0.9);

    glVertex2f( -0.4,-0.8);
    glVertex2f(-0.43,-0.9);

    glVertex2f(-0.3,-0.8);
    glVertex2f(-0.33,-0.9);

    glVertex2f(-0.2,-0.8);
    glVertex2f( -0.23,-0.9);

    glVertex2f( -0.1,-0.8);
    glVertex2f(-0.13,-0.9);

    glVertex2f(0.03,-0.8);
    glVertex2f(0.0,-0.9);

    glVertex2f(0.13,-0.8);
    glVertex2f( 0.1,-0.9);

    glVertex2f( 0.23,-0.8);
    glVertex2f(0.2,-0.9);

   glVertex2f(0.33,-0.8);
    glVertex2f(0.3,-0.9);

    glVertex2f(0.43,-0.8);
    glVertex2f( 0.4,-0.9);

    glVertex2f( 0.53,-0.8);
    glVertex2f(0.5,-0.9);

    glVertex2f(0.63,-0.8);
    glVertex2f(0.6,-0.9);

    glVertex2f(0.73,-0.8);
    glVertex2f( 0.7,-0.9);

    glVertex2f( 0.83,-0.8);
    glVertex2f(0.8,-0.9);

    glVertex2f(0.93,-0.8);
    glVertex2f(0.9,-0.9);

    glLoadIdentity();
    glEnd();


glFlush();

}



void display() {


glutDisplayFunc(morning);







}

void idle()
{
    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(990,880);   // Set the window's initial width & height
    glutInitWindowPosition(100,50);
    glutCreateWindow("Airport Scenario"); // Create a window with the given title
    glutDisplayFunc(display);
   // glutDisplayFunc(morning); // Register display callback handler for window re-paint
  glutIdleFunc(idle);
  // glutTimerFunc(100, update, 0);
  glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
   // glutTimerFunc(100, update4, 0);
        glutTimerFunc(100, update5, 0);
    glutTimerFunc(100, update6, 0);
    glutKeyboardFunc(handleKeypress);
      glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);

    glutMainLoop();           // Enter the event-processing loop
    return 0;
}


