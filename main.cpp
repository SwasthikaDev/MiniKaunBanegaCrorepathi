#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include <stdlib.h>
#include <string.h>
#include <mmsystem.h>
#include<math.h>
#include<time.h>

void drawstring();
void fpage();
void drawrectangle();
void display();
void instruction();
void writepixel(float x, float y);
void keys(unsigned char key,int x,int y);
void mydisplay();
void circle (int x, int y, int r);
void firework(int maxx);
void Draw();
int i,j,z,x,y,id1,id2,id3,id4,id5;
float angle,x2,y2;
void qfont();
void qfont1();
void qfont2();
void qfont3();
void qfont4();
void qfont5();
void qfont6();
void qfont7();
void qfont8();
void qfont9();
void flip1();
void flip2();
void flip3();
void flip4();
void flip5();
void flip6();
void flip7();
void flip8();
void flip9();
void flip10();
void qfont10();
void qfont11();
void key2(unsigned char key,int x,int y);
void key3(unsigned char key,int x,int y);
void DrawCircle(float cx, float cy, float r, int num_segments);
void DrawCircle1(float cx, float cy, float r, int num_segments);
void game1();
void keyg1(unsigned char key,int x,int y);
void keyg2(unsigned char key,int x,int y);
void game2();
void game3();
void keyg3(unsigned char key,int x,int y);
void game4();
void keyg4(unsigned char key,int x,int y);
void game5();
void keyg5(unsigned char key,int x,int y);
void game6();
void keyg6(unsigned char key,int x,int y);
void game7();
void keyg7(unsigned char key,int x,int y);
void game8();
void keyg8(unsigned char key,int x,int y);
void game9();
void keyg9(unsigned char key,int x,int y);
void game10();
void keyg10(unsigned char key,int x,int y);
void lost();
void won();
void delay(int number_of_seconds);
void f1(unsigned char key,int x,int y);
void f2(unsigned char key,int x,int y);
void f3(unsigned char key,int x,int y);
void f4(unsigned char key,int x,int y);
void f5(unsigned char key,int x,int y);
void f6(unsigned char key,int x,int y);
void f7(unsigned char key,int x,int y);
void f8(unsigned char key,int x,int y);
void f9(unsigned char key,int x,int y);
void f10(unsigned char key,int x,int y);



void init()
{
    glClearColor(0,0,0,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,100,100,0);
	glMatrixMode(GL_MODELVIEW);
    glFlush();
}

void drawstring(float x,float y,float z,char *msg)
{

    glRasterPos3f(x,y,z);

    for(int i=0;i<strlen(msg);i++)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg[i]);
    }
}
void drawrectangle()
{

    glColor3f(255,255,255);
    glLineWidth(8);
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(10,10);
    glVertex2i(30,10);
    glVertex2i(30,25);
    glVertex2i(10,25);
    glEnd();

  glBegin(GL_POLYGON);
    glVertex2i(8,8);
    glVertex2i(33,8);
    glVertex2i(33,28);
    glVertex2i(8,28);
    glEnd();


}
void circle(int x1, int y1, int r)
{
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<361.0f;angle+=0.2)
{
    x2 = x1+sin(angle)*r;
    y2 = y1+cos(angle)*r;
    glVertex2f(x2,y2);
}

glEnd();
}

void DrawCircle(float cx, float cy, float r, int num_segments)
{
    glBegin(GL_LINE_LOOP);
    for(int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component

        glVertex2f(x + cx, y + cy);//output vertex

    }
    glEnd();
}

void mydisplay()
{

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(35,10,0,"             NMAM Institute Of Technology, Nitte.");
    drawstring(40,15,0,"Department Of Computer Science");
    drawstring(45,25,0,"Mini Project Name : ");
    drawstring(40,30,0,"KAUN BANEGA CROREPATHI");
    drawstring(40,40,0,"********************************");
    drawstring(40,45,0,"Swasthika - 4NM18CS199");
    drawstring(40,55,0,"********************************");
    drawstring(40,65,0,"Submitted To - Mr.Pradeep Kanchan");
    drawstring(40,70,0,"Date : 10-05-2021");
    drawstring(63,85,0,"Press N to Next");
    drawstring(19,17,0,"KBC");
    drawstring(18,20,0,"GAME");
    drawrectangle();
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(60,80);
    glVertex2i(80,80);
    glVertex2i(80,90);
    glVertex2i(60,90);
    glEnd();

    glutSwapBuffers();

}

void writepixel(float x, float y )
{
glPointSize(25);
glBegin(GL_POINTS);
glColor3f(0.0,0.5,1);
glVertex2f(x,y);
glEnd();
glFlush();
}

void display()
{
     glClearColor(0,0,0,0);
 	glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(255,255,255);
    circle(50,50,10);
    glColor3f(0,0,0);
    drawstring(47,50,0,"KBC GAME");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(60,80);
    glVertex2i(80,80);
    glVertex2i(80,90);
    glVertex2i(60,90);
    glEnd();
    glColor3f(255,255,255);
    drawstring(63,85,0,"Press C to Continue");
    DrawCircle(50, 50, 18, 12);
    DrawCircle(50, 50, 20, 12);
    DrawCircle(50, 50, 22, 12);
    DrawCircle(50, 50, 24, 12);
    DrawCircle(50, 50, 26, 12);
    DrawCircle(50, 50, 28, 12);
    DrawCircle(50, 50, 30, 12);
    DrawCircle(50, 50, 32, 12);
    glutKeyboardFunc(key2);
    glutSwapBuffers();
}
void instruction()
{  PlaySound(TEXT("kb.wav"),NULL,SND_ASYNC);
     glClearColor(0,0,0,0);
 	glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(255,255,255);
    drawstring(45,5,0,"*INSTRUCTIONS*");
    drawstring(47,10,0,"14) 7 Crore");
    drawstring(47,15,0,"13) 1 Crore");
    drawstring(47,20,0,"12)50,00,000");
    drawstring(47,25,0,"11) 25,00,000");
    drawstring(47,30,0,"10) 12,50,000");
    drawstring(47,35,0,"9) 6,40,000");
    drawstring(47,40,0,"8) 3,20,000");
    drawstring(47,45,0,"7) 1,60,000");
    drawstring(47,50,0,"6) 80,000");
    drawstring(47,55,0,"5) 60,000");
    drawstring(47,60,0,"4) 40,000");
    drawstring(47,65,0,"3) 20,000");
    drawstring(47,70,0,"2) 10,000");
    drawstring(47,75,0,"1) 5,000");
    drawstring(13,87,0,"##LIFE LINES##");
    DrawCircle(66, 87, 7, 6);
    drawstring(63,87,0,"  50 - 50 ");
    drawstring(34,87,0,"  FLIP ");
    DrawCircle(37, 87, 7, 6);
      drawstring(19,17,0,"KBC");
    drawstring(18,20,0,"GAME");
    drawrectangle();
    drawstring(85,93,0,"Press S to Start");
    glutKeyboardFunc(key3);
    glutSwapBuffers();
}
void qfont()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
 // DrawCircle(50, 18, 5, 20);

  DrawCircle(56, 83, 7, 6);
  drawstring(65,85,0,"Press Z to use 50 50 ");
  drawstring(53,83,0,"  50 - 50 ");
  drawstring(34,83,0,"  FLIP ");
  drawstring(18,85,0,"Press N to FLIP ");
  DrawCircle(37, 83, 7, 6);

   drawstring(88,20,0,"14) 7 Crore");
    drawstring(88,25,0,"13) 1 Crore");
    drawstring(88,30,0,"12)50,00,000");
    drawstring(88,35,0,"11) 25,00,000");
    drawstring(88,40,0,"10) 12,50,000");
    drawstring(88,45,0,"9) 6,40,000");
    drawstring(88,50,0,"8) 3,20,000");
    drawstring(88,55,0,"7) 1,60,000");
    drawstring(88,60,0,"6) 80,000");
    drawstring(88,65,0,"5) 60,000");
    drawstring(88,70,0,"4) 40,000");
    drawstring(88,75,0,"3) 20,000");
    drawstring(88,80,0,"2) 10,000");
    drawstring(88,85,0,"1) 5,000");
    drawstring(88,10,0,"**SCORE**");

  for(int i=60;i>0;i--)
    { char s;
     s =i;
   //  drawstring( 50,18,0,"s");
    }
  glRasterPos3f(50,18,0);
}

void qfont11()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
 // DrawCircle(50, 18, 5, 20);

/*  DrawCircle(56, 83, 7, 6);
  drawstring(65,85,0,"Press Z to use 50 50 ");
  drawstring(53,83,0,"  50 - 50 ");
  drawstring(34,83,0,"  FLIP ");
  drawstring(18,85,0,"Press N to FLIP ");
  DrawCircle(37, 83, 7, 6);
    for(int i=60;i>0;i--)
    { char s;
     s =i;
   //  drawstring( 50,18,0,"s");
    }*/
  glRasterPos3f(50,18,0);
}



void keys(unsigned char key,int x,int y)
{
if(key=='N'|| key == 'n')
{
    glutDisplayFunc(display);
    glutPostRedisplay();
}
}

void key2(unsigned char key,int x,int y)
{
   if (key=='C'|| key == 'c')
{    PlaySound(TEXT("start.wav"),NULL,SND_ASYNC);
    delay(5);
    glutDestroyWindow(id1);
    glutInitWindowSize(3200,1200);
    id2=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(instruction);
    init();
}
}
void key3(unsigned char key,int x,int y)
{
 if(key=='S'|| key == 's')
{
    glutDisplayFunc(game1);
    glutPostRedisplay();
}
}


void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();


    while (clock() < start_time + milli_seconds);
}


void flip1() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q) Which Indian state share the longest land border with Bhutan?");
    drawstring(28,50,0,"(a) Sikkim");
    drawstring(60,50,0,"(b) Assam");
    drawstring(28,65,0,"(c) Arunachal ");
    drawstring(60,65,0,"(d)  Bengal");
    delay(0.7);
    qfont11();
    glutKeyboardFunc(f1);
    glutSwapBuffers();
}
void f1(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game2);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }

void flip2() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q)Who invented mechanical calculator called Pascaline?");
    drawstring(25,50,0,"(a)Charles Babbage");
    drawstring(57,50,0,"(b)Blaise Pascal");
    drawstring(25,65,0,"(c)Alan Turing");
    drawstring(57,65,0,"(d)Lee De Forest");
    delay(0.7);
    qfont11();
    glutKeyboardFunc(f2);
    glutSwapBuffers();
}
void f2(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game3);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }

void flip3() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q)Which was the world�s first successful electronic computer?");
    drawstring(28,50,0,"(a) PARAM");
    drawstring(60,50,0,"(b) ENIAC");
    drawstring(28,65,0,"(c) Pascaline");
    drawstring(60,65,0,"(d)  CRAY");
    delay(0.7);
    qfont11();
    glutKeyboardFunc(f3);
    glutSwapBuffers();
}
void f3(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game4);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }

void flip4() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q) Oncology is the study of what?");
    drawstring(28,50,0,"(a) Birds");
    drawstring(60,50,0,"(b) Cancer");
    drawstring(28,65,0,"(c) Ant");
    drawstring(60,65,0,"(d) Skin");
    delay(0.7);
    qfont();
    glutKeyboardFunc(f4);
    glutSwapBuffers();
}
void f4(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game5);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }

void flip5() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q) Numismatics is the study of what?");
    drawstring(28,50,0,"(a) Number");
    drawstring(60,50,0,"(b) Coin");
    drawstring(28,65,0,"(c) Note");
    drawstring(60,65,0,"(d) Cheque");
    delay(0.7);
    qfont();
    glutKeyboardFunc(f5);
    glutSwapBuffers();
}
void f5(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game6);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }

void flip6() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q) Ornithology is the study of?");
    drawstring(28,50,0,"(a) Cats");
    drawstring(60,50,0,"(b) Birds");
    drawstring(28,65,0,"(c) Thigh");
    drawstring(60,65,0,"(d) Noise");
    delay(0.7);
    qfont11();
    glutKeyboardFunc(f6);
    glutSwapBuffers();
}
void f6(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game7);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }

void flip7() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q) The energy of food is measured in what?");
    drawstring(28,50,0,"(a) Celsius");
    drawstring(60,50,0,"(b) Calorie");
    drawstring(28,65,0,"(c) Kelvin");
    drawstring(60,65,0,"(d) Fat");
    delay(0.7);
    qfont11();
    glutKeyboardFunc(f7);
    glutSwapBuffers();
}
void f7(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game8);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }
void flip8() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q) Name the instrument used to measure Relative Humidity??");
    drawstring(28,50,0,"(a) Barometer");
    drawstring(60,50,0,"(b) Hygrometer");
    drawstring(28,65,0,"(c) Hydrometer");
    drawstring(60,65,0,"(d) Thermometer");
    delay(0.7);
    qfont11();
    glutKeyboardFunc(f8);
    glutSwapBuffers();
}
void f8(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game9);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }
void flip9() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q) Coronagraph is used for is the study of ?");
    drawstring(28,50,0,"(a) Vein");
    drawstring(60,50,0,"(b) Sun's Corona");
    drawstring(28,65,0,"(c) BP");
    drawstring(60,65,0,"(d) Arteries");
    qfont11();
    glutKeyboardFunc(f9);
    glutSwapBuffers();
}
void f9(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game10);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }
void flip10() {
    PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(39,20,0," FLIP THE QUESTION");
    drawstring(30,30,0," Q)Chirology is the study of what?");
    drawstring(28,50,0,"(a) Feet");
    drawstring(60,50,0,"(b) Hands");
    drawstring(28,65,0,"(c) Comets");
    drawstring(60,65,0,"(d) Skull");
    delay(0.7);
    qfont11();
    glutKeyboardFunc(f10);
    glutSwapBuffers();
}
void f10(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(won);
    init();
}
else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }






void game1() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q1) The Central Rice Research Station is situated in?");
    drawstring(28,50,0,"(a) Chennai");
    drawstring(60,50,0,"(b) Cuttack");
    drawstring(28,65,0,"(c) Bangalore");
    drawstring(60,65,0,"(d) Delhi");
    qfont();
    glutKeyboardFunc(keyg1);
    glutSwapBuffers();
}
void keyg1(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
    delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game2);
    init();
}

else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont1();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{   PlaySound(TEXT("flip.wav"),NULL,SND_ASYNC);
    delay(3);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip1);
    init();
}

else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
} }


void qfont1()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q1) The Central Rice Research Station is situated in?");
    drawstring(28,50,0,"(a) Chennai");
    drawstring(60,50,0,"(b) Cuttack");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();

  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game2() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q2) Who among the following wrote Sanskrit grammar?");
    drawstring(28,50,0,"(a) Kalidasa");
    drawstring(60,50,0,"(b) Charak");
    drawstring(28,65,0,"(c) Panini");
    drawstring(60,65,0,"(d) Aryabhatt");
    qfont();
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,87);
    glVertex2i(87,82);
    glVertex2i(95,82);
    glVertex2i(95,87);
    glEnd();
    glutKeyboardFunc(keyg2);
    glutSwapBuffers();
}
void keyg2(unsigned char key,int x,int y)
{
   if (key=='C'|| key == 'c')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game3);
    init();
}
else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont2();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip2);
    init();
}

else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}

void qfont2()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q2) Who among the following wrote Sanskrit grammar?");
    drawstring(60,50,0,"(b) Charak");
    drawstring(28,65,0,"(c) Panini");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
 // DrawCircle(50, 18, 5, 20);

 // DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game3() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q3) The metal whose salts are sensitive to light is?");
    drawstring(28,50,0,"(a) Zinc");
    drawstring(60,50,0,"(b) Silver");
    drawstring(28,65,0,"(c) Copper");
    drawstring(60,65,0,"(d) Aluminum");
    qfont();
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,77);
    glVertex2i(87,82);
    glVertex2i(95,82);
    glVertex2i(95,77);
    glEnd();
    glutKeyboardFunc(keyg3);
    glutSwapBuffers();
}
void keyg3(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo1.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game4);
    init();
}
else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont3();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip3);
    init();
}

else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}
void qfont3()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q3) The metal whose salts are sensitive to light is?");
    drawstring(60,50,0,"(b) Silver");
    drawstring(60,65,0,"(d) Aluminum");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
  //DrawCircle(50, 18, 5, 20);

//  DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game4() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q4) Patanjali is well known for the compilation of ?");
    drawstring(28,50,0,"(a) Yoga Sutra");
    drawstring(60,50,0,"(b) Panchatantra");
    drawstring(28,65,0,"(c) Brahma Sutra");
    drawstring(60,65,0,"(d) Ayurveda");
    qfont();
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,77);
    glVertex2i(87,72);
    glVertex2i(95,72);
    glVertex2i(95,77);
    glEnd();
    glutKeyboardFunc(keyg4);
    glutSwapBuffers();
}
void keyg4(unsigned char key,int x,int y)
{
   if (key=='A'|| key == 'a')
{   PlaySound(TEXT("congo1.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game5);
    init();
}
else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont4();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip4);
    init();
}

 else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}

void qfont4()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q4) Patanjali is well known for the compilation of ?");
    drawstring(28,50,0,"(a) Yoga Sutra");
    drawstring(60,50,0,"(b) Panchatantra");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
  //DrawCircle(50, 18, 5, 20);

 // DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game5() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q5) Tsunamis are not caused by");
    drawstring(28,50,0,"(a) Hurricanes");
    drawstring(60,50,0,"(b) Earthquakes");
    drawstring(28,65,0,"(c) Undersea landslides");
    drawstring(60,65,0,"(d) Volcanic eruptions");
    qfont();
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,72);
    glVertex2i(87,67);
    glVertex2i(95,67);
    glVertex2i(95,72);
    glEnd();
    glutKeyboardFunc(keyg5);
    glutSwapBuffers();
}
void keyg5(unsigned char key,int x,int y)
{
   if (key=='A'|| key == 'a')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game6);
    init();
}
else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont5();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip5);
    init();
}

 else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}

void qfont5()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q5) Tsunamis are not caused by");
    drawstring(28,50,0,"(a) Hurricanes");
    drawstring(60,65,0,"(d) Volcanic eruptions");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
 // DrawCircle(50, 18, 5, 20);

 // DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game6() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q6) The hottest planet in the solar system?");
    drawstring(28,50,0,"(a) Mercury");
    drawstring(60,50,0,"(b) Venus");
    drawstring(28,65,0,"(c) Mars");
    drawstring(60,65,0,"(d) Jupiter");
    qfont();
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,67);
    glVertex2i(87,62);
    glVertex2i(95,62);
    glVertex2i(95,67);
    glEnd();
    glutKeyboardFunc(keyg6);
    glutSwapBuffers();
}
void keyg6(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo1.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game7);
    init();
}
else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont6();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip6);
    init();
}

else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}
void qfont6()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q6) The hottest planet in the solar system?");
    drawstring(60,50,0,"(b) Venus");
    drawstring(60,65,0,"(d) Jupiter");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
  //DrawCircle(50, 18, 5, 20);

 // DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game7() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q7) Which is the oldest port in India?");
    drawstring(28,50,0,"(a) Mumbai");
    drawstring(60,50,0,"(b) Chennai");
    drawstring(28,65,0,"(c) Kolkata");
    drawstring(60,65,0,"(d) Vishakhapatnam");
    qfont();
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,62);
    glVertex2i(87,57);
    glVertex2i(95,57);
    glVertex2i(95,62);
    glEnd();
    glutKeyboardFunc(keyg7);
    glutSwapBuffers();
}
void keyg7(unsigned char key,int x,int y)
{
   if (key=='b'|| key == 'B')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
     delay(2);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game8);
    init();
}
else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont7();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip7);
    init();
}

 else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}

void qfont7()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q7) Which is the oldest port in India?");
    drawstring(60,50,0,"(b) Chennai");
    drawstring(28,65,0,"(c) Kolkata");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
  //DrawCircle(50, 18, 5, 20);

  //DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game8() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q8)Hitler party which came into power in 1933 is known as");
    drawstring(28,50,0,"(a) Ku-Klux-Klan");
    drawstring(60,50,0,"(b) Democratic Party");
    drawstring(28,65,0,"(c) Labour Party");
    drawstring(60,65,0,"(d) Nazi Party");
    qfont();
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,57);
    glVertex2i(87,52);
    glVertex2i(95,52);
    glVertex2i(95,57);
    glEnd();
    glutKeyboardFunc(keyg8);
    glutSwapBuffers();
}
void keyg8(unsigned char key,int x,int y)
{
   if (key=='D'|| key == 'd')
{   PlaySound(TEXT("congo2.wav"),NULL,SND_ASYNC);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game9);
    init();
}

else if(key=='Z'|| key == 'z')
{   PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
     glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont8();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip8);
    init();
}

 else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}

void qfont8()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q8)Hitler party which came into power in 1933 is known as");
    drawstring(28,65,0,"(c) Labour Party");
    drawstring(60,65,0,"(d) Nazi Party");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
 // DrawCircle(50, 18, 5, 20);

  //DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game9() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q9)Epsom (England) is the place associated with?");
    drawstring(28,50,0,"(a) Shooting");
    drawstring(60,50,0,"(b) Horse racing");
    drawstring(28,65,0,"(c) Polo");
    drawstring(60,65,0,"(d) Snooker");
    qfont();
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,52);
    glVertex2i(87,47);
    glVertex2i(95,47);
    glVertex2i(95,52);
    glEnd();
    glutKeyboardFunc(keyg9);
    glutSwapBuffers();
}
void keyg9(unsigned char key,int x,int y)
{
   if (key=='B'|| key == 'b')
{   PlaySound(TEXT("congo.wav"),NULL,SND_ASYNC);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(won);
    init();
}

else if(key=='Z'|| key == 'z')
{    PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
     glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont9();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip9);
    init();
}
 else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game10);
    init();
}
}

void qfont9()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q9)Epsom (England) is the place associated with?");
    drawstring(60,50,0,"(b) Horse racing");
    drawstring(60,65,0,"(d) Snooker");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
//  DrawCircle(50, 18, 5, 20);

 // DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void game10() {

    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    drawstring(30,30,0," Q10)Which musical instruments is played by Amjad Ali Khan?");
    drawstring(28,50,0,"(a) Veena");
    drawstring(60,50,0,"(b) Tabla");
    drawstring(28,65,0,"(c) Sarod");
    drawstring(60,65,0,"(d) Guitar");
    qfont();
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(87,47);
    glVertex2i(87,42);
    glVertex2i(95,42);
    glVertex2i(95,47);
    glEnd();
    glutKeyboardFunc(keyg10);
    glutSwapBuffers();
}
void keyg10(unsigned char key,int x,int y)
{
   if (key=='C'|| key == 'c')
{   PlaySound(TEXT("congo2.wav"),NULL,SND_ASYNC);
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(game2);
    init();
}
else if(key=='Z'|| key == 'z')
{  PlaySound(TEXT("50.wav"),NULL,SND_ASYNC);
     glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    qfont10();
    glutSwapBuffers();
}
else if(key=='N'|| key == 'n')
{
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(flip10);
    init();
}

 else {
    glutDestroyWindow(id2);
    glutInitWindowSize(3200,1200);
    id3=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(lost);
    init();
}
}
void qfont10()
{   PlaySound(TEXT("tik.wav"),NULL,SND_ASYNC);
    glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glLineWidth(8);
    drawstring(37,10,0,"Type any option among 'A' 'B' 'C' 'D' ");
    drawstring(30,30,0," Q10)Which musical instruments is played by Amjad Ali Khan?");
    drawstring(60,50,0,"(b) Tabla");
    drawstring(28,65,0,"(c) Sarod");
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(20,25);
    glVertex2i(80,25);
    glVertex2i(80,35);
    glVertex2i(20,35);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,45);
    glVertex2i(40,45);
    glVertex2i(40,55);
    glVertex2i(25,55);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,45);
    glVertex2i(70,45);
    glVertex2i(70,55);
    glVertex2i(55,55);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(25,60);
    glVertex2i(40,60);
    glVertex2i(40,70);
    glVertex2i(25,70);
    glEnd();

   glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2i(55,60);
    glVertex2i(70,60);
    glVertex2i(70,70);
    glVertex2i(55,70);
    glEnd();
 // DrawCircle(50, 18, 5, 20);

  //DrawCircle(48, 83, 7, 6);
  glRasterPos3f(50,18,0);

    for(int i=60;i>60;i--)
    {

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i);
    }
}
void lost() {
PlaySound(TEXT("lost.wav"),NULL,SND_ASYNC);
 glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    circle(50,50,10);
    glColor3f(0,0,0);
    drawstring(45,50,0,"GAME_LOST");
    glColor3f(255,255,255);
    DrawCircle(50, 50, 18, 12);
    DrawCircle(50, 50, 20, 12);
    DrawCircle(50, 50, 22, 12);
    DrawCircle(50, 50, 24, 12);
    DrawCircle(50, 50, 26, 12);
    DrawCircle(50, 50, 28, 12);
    DrawCircle(50, 50, 30, 12);
    DrawCircle(50, 50, 32, 12);
    glutKeyboardFunc(key2);
    glutSwapBuffers();
}

void won() {
    PlaySound(TEXT("win.wav"),NULL,SND_ASYNC);
 glClear(GL_CURRENT_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glColor3f(255,255,255);
    circle(50,50,10);
    glColor3f(0,0,0);
    drawstring(45,50,0,"GAME_WON");
    glColor3f(255,255,255);
    DrawCircle(50, 50, 18, 12);
    DrawCircle(50, 50, 20, 12);
    DrawCircle(50, 50, 22, 12);
    DrawCircle(50, 50, 24, 12);
    DrawCircle(50, 50, 26, 12);
    DrawCircle(50, 50, 28, 12);
    DrawCircle(50, 50, 30, 12);
    DrawCircle(50, 50, 32, 12);
    glutKeyboardFunc(key2);
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
   PlaySound(TEXT("intro.wav"),NULL,SND_ASYNC);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_DOUBLE);
    glutInitWindowSize(3200,1200);
    id1=glutCreateWindow("KAUN BANEGA CROREPATHI - GAME");
    glutDisplayFunc(mydisplay);
    glutKeyboardFunc(keys);
    init();
    glutMainLoop();
    return 0;
}
