#include<GL/glut.h>

void disp()
{
glClearColor(0,0,0,1);
glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,500,0,500);
glMatrixMode(GL_MODELVIEW);
}

int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(900,900);
glutCreateWindow("Game Memanah Kotak");
glutDisplayFunc(disp);
glEnable(GL_DEPTH_TEST);
glutMainLoop();
return 0;
}
