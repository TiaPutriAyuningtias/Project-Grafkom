#include<stdio.h>
#include<GL/glut.h>
#include<string.h>

int maxy=600, count=0, maxx=500, n=3, m=3,r,q;
int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
int x=25,y=50;
char str[10];
void id1();
void id();
void draw_target();
void redraw();

//menggambar panah
void disp()
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
glColor3f(1,1,0);
bitmap_output(120,50,"Shoot The Triangle",GLUT_BITMAP_TIMES_ROMAN_24);
counting();

//titik gambar panah
glColor3f(0,1,1);
glBegin(GL_LINES);
glVertex2d(x,y);
glVertex2d(x+50,y);
glEnd();
glLineWidth(2);
glBegin(GL_LINES);
glVertex2d(x,y+2);
glVertex2d(x+50,y-2);
glEnd();
glBegin(GL_LINES);
glVertex2d(x,y-2);
glVertex2d(x+50,y-2);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2d (x+50,y+3);
glVertex2d(x+60,y);
glVertex2d(x+50,y-5);
glEnd();
glBegin(GL_QUADS);
glVertex2d(x,y+3);
glVertex2d(x,y-3);
glVertex2d(x-10,y-5);
glVertex2d(x-10,y+5);
glEnd();
draw_target();
glFlush();
glutSwapBuffers();
}

void init()
{
glClearColor(0.10,0.10,0.20,0.50);
glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glMatrixMode(GL_MODELVIEW);
}

//menggambar targetnya yaitu segitiga
void draw_target()
{
if(count1==0)
{
//baris 1 kolom 1
glColor3f(1,0,0);
glBegin(GL_TRIANGLES);
glVertex2d(290,460);
glVertex2d(310,450);
glVertex2d(290,440);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(285,465);
glVertex2d(320,450);
glVertex2d(285,435);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(290,460);
glVertex2d(310,450);
glVertex2d(290,440);
glEnd();
}
if(count2==0)
{
//baris 2 kolom 2
glColor3f(0,0,1);
glBegin(GL_TRIANGLES);
glVertex2d(365,410);
glVertex2d(385,400);
glVertex2d(365,390);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(360,415);
glVertex2d(395,400);
glVertex2d(360,385);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(365,410);
glVertex2d(385,400);
glVertex2d(365,390);
glEnd();
}
if(count3==0)
{
//baris 1 kolom 2
glColor3f(1,0,1);
glBegin(GL_TRIANGLES);
glVertex2d(390,490);
glVertex2d(410,480);
glVertex2d(390,470);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(385,495);
glVertex2d(420,480);
glVertex2d(385,465);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(390,490);
glVertex2d(410,480);
glVertex2d(390,470);
glEnd();
}
if(count4==0)
{
//baris 2 kolom 1
glColor3f(0,1,0);
glBegin(GL_TRIANGLES);
glVertex2d(240,380);
glVertex2d(260,370);
glVertex2d(240,360);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(235,385);
glVertex2d(270,370);
glVertex2d(235,355);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(240,380);
glVertex2d(260,370);
glVertex2d(240,360);
glEnd();
}
if(count5==0)
{
//baris 3 kolom 2
glColor3f(1,1,0);
glBegin(GL_TRIANGLES);
glVertex2d(340,340);
glVertex2d(360,330);
glVertex2d(340,320);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(335,345);
glVertex2d(370,330);
glVertex2d(335,315);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(340,340);
glVertex2d(360,330);
glVertex2d(340,320);
glEnd();
}
if(count6==0)
{
//kolom 3 baris 1
glColor3f(1,0,0);
glBegin(GL_TRIANGLES);
glVertex2d(440,300);
glVertex2d(460,290);
glVertex2d(440,280);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(435,305);
glVertex2d(470,290);
glVertex2d(435,275);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(440,300);
glVertex2d(460,290);
glVertex2d(440,280);
glEnd();
}
if(count7==0)
{
//baris 4 kolom 2
glColor3f(1,0,1);
glBegin(GL_TRIANGLES);
glVertex2d(320,255);
glVertex2d(340,245);
glVertex2d(320,235);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(315,260);
glVertex2d(350,245);
glVertex2d(315,230);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(320,255);
glVertex2d(340,245);
glVertex2d(320,235);
glEnd();
}
if(count8==0)
{
//baris 3 kolom 1
glColor3f(0,0,1);
glBegin(GL_TRIANGLES);
glVertex2d(190,210);
glVertex2d(210,200);
glVertex2d(190,190);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(185,215);
glVertex2d(220,200);
glVertex2d(185,185);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(190,210);
glVertex2d(210,200);
glVertex2d(190,190);
glEnd();
}
if(count9==0)
{
//baris 2 kolom 3
glColor3f(1,1,0);
glBegin(GL_TRIANGLES);
glVertex2d(390,160);
glVertex2d(410,150);
glVertex2d(390,140);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(385,165);
glVertex2d(420,150);
glVertex2d(385,135);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(390,160);
glVertex2d(410,150);
glVertex2d(390,140);
glEnd();
}
if(count10==0)
{
//baris 5 kolom 2
glColor3f(0,1,0);
glBegin(GL_TRIANGLES);
glVertex2d(290,110);
glVertex2d(310,100);
glVertex2d(290,90);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2d(285,115);
glVertex2d(320,100);
glVertex2d(285,85);
glEnd();
}
else
{
glColor3f(1,1,1);
glBegin(GL_TRIANGLES);
glVertex2d(290,110);
glVertex2d(310,100);
glVertex2d(290,90);
glEnd();
}
glFlush();
}

//Memindahkan panah dengan menekan huruf "r" pada keyboard
void id1()
{
x+=m;
target();
if(x+110>maxx)
{
x=25;
y=0;
count++;
glutIdleFunc(id);
}
glutPostRedisplay();
}

//set key to perform desired operation
void keys(unsigned char k,int r,int q)
{
if(k=='r')
glutIdleFunc(id1);
if(k=='q')
exit(0);
}

//sub menu to display instructions
void demo_menu(int i)
{
switch(i)
{
case 5:
case 6:
case 7:
case 8:break;
}
}

//sub menu to display designer names
void demo(int i)
{
switch(i)
{
case 9:
case 10:
case 11:break;
}
}
void game(int id)
{
switch(id);
{
}
}

int main(int argc,char **argv)
{
int sub_menu;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(1000,850);
glutInitWindowPosition(170,0);
glutCreateWindow("Shoot The Triangle");
sub_menu=glutCreateMenu(demo_menu);
glutAddMenuEntry("r untuk bergerak ke kanan",5);
glutAddMenuEntry("Sebanyak 10 Kotak akan muncul",6);
glutAddMenuEntry("Anda Kalah jika jumlah panah berjumlah 15 buah anak panah",7);
glutAddMenuEntry("Jika Tidak Kamu menang",8);
glutCreateMenu(game);
glutAddSubMenu("Instuksi",sub_menu);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutDisplayFunc(disp);
glutIdleFunc(id);
glutKeyboardFunc(keys);
init();
glEnable(GL_DEPTH_TEST);
glutMainLoop();
return 0;
}

