#include<GL/glut.h>

void disp()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,0);
glFlush();
glutSwapBuffers();
}
  
void init()
{
glClearColor(0,0,0,1);
glColor3f(1,0,0);
gluOrtho2D(0,500,0,500);
}

int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(900,900);
glutCreateWindow("Game Memanah Kotak");
glutDisplayFunc(disp);
init();
glEnable(GL_DEPTH_TEST);
glutMainLoop();
return 0;
}
