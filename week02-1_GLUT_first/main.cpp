#include <GL/glut.h>
void display()
{
    glColor3f(1,1,0); ///����
	glutSolidTeapot( 0.5 ); ///�e�X��߯���

	glColor3f(0,1,0); ///���
	glutSolidTeapot( 0.3 ); ///�e�X��ߤp����

	glutSwapBuffers(); ///�洫��ܥX��
}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv); ///�}�lGLUT���\��
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///�]�wGLUT����ܼҦ�
	glutCreateWindow("week02");
	glutDisplayFunc(display); ///�n��ܪ��禡
	glutMainLoop(); ///�̫�n��glutMainLoop() �D�n�j��d�̫᭱
}
