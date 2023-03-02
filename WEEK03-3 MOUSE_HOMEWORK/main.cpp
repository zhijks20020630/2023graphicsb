#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glPushMatrix();
    glTranslatef( X,Y,Z );
    glBegin(GL_POLYGON);
    glVertex2f(-0.09,0.41);
    glVertex2f(-0.19,0.48);
    glVertex2f(-0.30,0.53);
    glVertex2f(-0.37,0.53);
    glVertex2f(-0.47,0.54);
    glVertex2f(-0.55,0.52);
    glVertex2f(-0.66,0.38);
    glVertex2f(-0.67,0.21);
    glVertex2f(-0.65,0.07);
    glVertex2f(-0.59,-0.11);
    glVertex2f(-0.51,-0.22);
    glVertex2f(-0.35,-0.38);
    glVertex2f(-0.23,-0.43);
    glVertex2f(0.02,-0.46);
    glVertex2f(0.23,-0.46);
    glVertex2f(0.34,-0.38);
    glVertex2f(0.57,-0.10);
    glVertex2f(0.66,0.32);
    glVertex2f(0.71,0.62);
    glVertex2f(0.60,0.71);
    glVertex2f(0.37,0.79);
    glVertex2f(0.21,0.73);
    glVertex2f(0.06,0.61);
    glVertex2f(-0.03,0.49);
    glVertex2f(-0.03,0.47);
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}
void mouse(int button, int state,int x,int y)
{
    X = (x-150)/150.0;
    Y = -(y-150)/150.0;
    if(state==GLUT_DOWN) printf(" glVertex2f(%.2f,%.2f);\n",X,Y);
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week03");

    glutMouseFunc(mouse);
	glutDisplayFunc(display);

	glutMainLoop();
}
