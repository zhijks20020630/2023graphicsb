#include <GL/glut.h>
float X=0,Y=0,Z=0; ///使用global變數
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///清背景
    glPushMatrix();///備份矩陣
    glTranslatef( X,Y,Z );///照著x,y,z移動
    glutSolidTeapot(0.3);

    glPopMatrix();///還原矩陣

    glutSwapBuffers();
}
void mouse(int button, int state,int x,int y)
{
    X = (x-150)/150.0; ///減一半, 除一半
    Y = (y-150)/150.0; ///減一半, 除一半,Y變負的
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
