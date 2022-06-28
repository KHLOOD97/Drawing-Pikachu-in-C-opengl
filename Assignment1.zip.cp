#include <GLUT/glut.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <iostream>
float angle;
int times;
int type;
using namespace std;
GLint win_width = 3000,
win_hight = 2000;

void draw_Bodyline()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(0.5f, -0.250f);
    glVertex2f(0.6f, -0.150f);
    glVertex2f(0.650f, -0.1f);
    glVertex2f(0.7f, 0.0f);
       glVertex2f(0.7f, 0.1f);
       glVertex2f(0.650f, 0.3f);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.5f, 0.550f);
    glVertex2f(0.450f, 0.7f);
    glVertex2f(0.8f, 0.650f);
    glVertex2f(1.1f, 1.0f);
    glVertex2f(0.7f, 0.950f);
           glVertex2f(0.3f, 0.850f);
           glVertex2f(0.1f, 0.9f);
           glVertex2f(-0.1f, 0.9f);
           glVertex2f(-0.3f, 0.850f);
           glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.7f, 1.0f);
          glVertex2f(-1.1f, 1.2f);
          glVertex2f(-1.0f, 0.8f);
          glVertex2f(-0.6f, 0.7f);
          glVertex2f(-0.750f, 0.550f);
          glVertex2f(-0.8f, 0.3f);
          glVertex2f(-0.850f, 0.1f);
          glVertex2f(-0.850f, -0.1f);
          glVertex2f(-0.8f, -0.2f);
          glVertex2f(-0.750f, -0.250f);
          glVertex2f(-0.6f, -0.3f);
    glEnd();
}

void draw_Bodyline2()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(0.6f, -0.150f);
    glVertex2f(0.7f, -0.3f);
    glVertex2f(0.750f, -0.5f);
    glVertex2f(0.750f, -0.750f);
    glVertex2f(0.750f, -1.0f);
    glVertex2f(0.7f, -1.2f);
    glVertex2f(0.650f, -1.3f);
    glVertex2f(0.6f, -1.350f);
    glVertex2f(0.5f, -1.4f);
    glVertex2f(0.450f, -1.4f);
    glVertex2f(0.4f, -1.4f);
    glEnd();
}

void draw_Bodyline3()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(-0.750f, -0.250f);
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.850f, -0.8f);
    glVertex2f(-0.850f, -1.0f);
    glVertex2f(-0.750f, -1.2f);
    glVertex2f(-0.7f, -1.3f);
    glVertex2f(-0.6f, -1.4f);
    glVertex2f(-0.5f, -1.450f);
    glVertex2f(-0.450f, -1.450f);
    glVertex2f(-0.350f, -1.450f);
    glEnd();
}

void draw_Bodyline4()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-0.450f, -1.450f);
    glVertex2f(-0.550f, -1.6f);
    glVertex2f(-0.450f, -1.550f);
    glVertex2f(-0.450f, -1.6f);
    glVertex2f(-0.4f, -1.550f);
    glVertex2f(-0.4f, -1.650f);
    glVertex2f(-0.250f, -1.450f);
    glVertex2f(-0.05f, -1.350f);
    glVertex2f(0.3f, -1.450f);
    glVertex2f(0.5f, -1.7f);
    glVertex2f(0.450f, -1.550f);
    glVertex2f(0.550f, -1.6f);
    glVertex2f(0.5f, -1.550f);
    glVertex2f(0.6f, -1.550f);
    glVertex2f(0.450f, -1.4f);
    glEnd();
}

void draw_Bodyline5()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(0.350f, -0.5f);
    glVertex2f(0.250f, -0.950f);
    glVertex2f(0.3f, -0.9f);
    glVertex2f(0.3f, -1.0f);
    glVertex2f(0.4f, -0.9f);
    glVertex2f(0.4f, -1.0f);
    glVertex2f(0.650f,-0.6f);
    glEnd();
}

void draw_Bodyline6()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-0.550f, -0.450f);
    glVertex2f(-0.3f, -0.9f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.350f, -0.950f);
    glVertex2f(-0.350f, -1.05f);
    glVertex2f(-0.4f, -1.0f);
    glVertex2f(-0.4f, -1.1f);
    glVertex2f(-0.7f, -0.8f);
    glEnd();
}

void draw_Bodyline7()
{
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.4,0.1);
    glVertex2f(0.7f, -1.2f);
    glVertex2f(0.750f, -1.0f);
    glVertex2f(0.750f, -0.750f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.9f, -0.650f);
    glVertex2f(1.05f, -0.750f);
    glVertex2f(0.9f, -0.950f);
    glVertex2f(0.7f, -1.2f);
    glEnd();
}

void draw_Bodyline8()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(0.9f, -0.650f);
    glVertex2f(0.9f, -0.7f);
    glVertex2f(0.750f, -0.5f);
    glVertex2f(0.950f, -0.350f);
    glVertex2f(0.750f, -0.1f);
    glVertex2f(0.9f, 0.2f);
    glVertex2f(1.4f, 0.8f);
    glVertex2f(1.4f, 0.05f);
    glVertex2f(1.150f, -0.150f);
    glVertex2f(1.3f, -0.350f);
    glVertex2f(0.950f, -0.550f);
    glVertex2f(1.05f, -0.750f);
    glEnd();
}

void draw_Bodyline9()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.5);
    glVertex2f(0.2f, -0.05f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(-0.05f, -0.05f);
    glVertex2f(-0.1f, -0.05f);
    glVertex2f(-0.2f, -0.1f);
    glVertex2f(-0.3f, -0.05f);
    glEnd();
}

void draw_Bodyline10()
{
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.5,0.5);
    glVertex2f(0.550f, 0.1f);
    glVertex2f(0.450f, 0.1f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.5f, -0.150f);
    glVertex2f(0.6f, -0.150f);
    glVertex2f(0.650f, 0.050f);
    glVertex2f(0.550f, 0.1f);
    glEnd();
}

void draw_earـshadowtriangle()
{
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.150f, 0.0f);
    glVertex2f(0.0f, 0.3f);
    glEnd();
}

void draw_earـshadowtriangle1()
{
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.0740f, 0.0f);
    glVertex2f(0.0f, 0.4f);
    glEnd();
}

void smeye_surprised()
{
    glEnable(GL_POINT_SMOOTH);
    glPointSize(8.0);
    glBegin(GL_POINTS);
    glColor3f(1,1,1);
    glVertex2f(-0.550,0.350);
    glEnd();
}
void smeye_sad()
{
    glEnable(GL_POINT_SMOOTH);
    glPointSize(14.0);
    glBegin(GL_POINTS);
    glColor3f(1,1,1);
    glVertex2f(-0.550,0.350);
    glEnd();
}

void eye()
{
    glEnable(GL_POINT_SMOOTH);
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glColor3f(0,0,0);
    glVertex2f(-0.54,0.3);
    glEnd();
    
}

void draw_ery_triangle()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,0);
    glVertex2f(1.1f, 1.0f);
    glVertex2f(1.3f, 0.950f);
    glVertex2f(0.8f, 0.650f);
    glEnd();
}
void draw_ery_triangle2()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,0);
    glVertex2f(-1.1f, 1.2f);
    glVertex2f(-1.0f, 0.8f);
    glVertex2f(-1.350f, 1.3f);
    glEnd();
}


void draw_cl_triangle()
{
    glBegin(GL_TRIANGLES);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(-0.7f, -1.3f);
    glVertex2f(0.650f, -1.3f);
    glVertex2f(-0.1f, 0.9f);
    glEnd();
}

void draw_cl()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);

    glVertex2f(0.48f, 0.0f);
    glVertex2f(0.45f, 0.7f);
    glVertex2f(-0.4f, 0.76f);
    glVertex2f(-0.7f, 0.4f);
    glVertex2f(-0.6f, 0.0f);
    glVertex2f(-0.1,0.0);
    glVertex2f(-0.1,0.7);

    glEnd();
    
}

void draw_cl2()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(0.6f, -0.150f);
    glVertex2f(0.4f, 0.1f);
    glVertex2f(-0.850f, 0.1f);
    glVertex2f(-0.850f, -0.1f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.750f, -0.250f);
    glVertex2f(-0.7f, -0.9f);
    glEnd();
}

void draw_cl3()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.0f, -1.3f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.6f, 0.1f);
    glEnd();
}

void draw_cl4()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.0f, -0.6f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.6f, -1.0f);
 
    glEnd();
}

void draw_cl5()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(-0.450f, -1.450f);
    glVertex2f(-0.550f, -1.6f);
    glVertex2f(-0.450f, -1.550f);
    glVertex2f(-0.450f, -1.6f);
    glVertex2f(-0.4f, -1.550f);
    glVertex2f(-0.4f, -1.650f);
    glVertex2f(-0.250f, -1.450f);
    glVertex2f(-0.05f, -1.350f);
    glVertex2f(-0.05f, -1.350f);
    glVertex2f(0.05f, -1.330f);
    glVertex2f(0.1f, -1.330f);
    glVertex2f(-0.4f, -0.8f);

    glEnd();
}

void draw_cl6()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(0.3f, -1.450f);
glVertex2f(0.5f, -1.7f);
glVertex2f(0.450f, -1.550f);
glVertex2f(0.550f, -1.6f);
glVertex2f(0.5f, -1.550f);
glVertex2f(0.6f, -1.550f);
glVertex2f(0.450f, -1.4f);
    glVertex2f(0.4f, -1.2f);
    glVertex2f(0.2f, -1.4f);
    glVertex2f(0.050f, -1.38f);
    glVertex2f(0.1f, -1.38f);
    glVertex2f(0.0f, -1.37f);
    glVertex2f(0.0f, -1.34f);
    glVertex2f(0.0f, -1.34f);
    glVertex2f(0.0f, -1.32f);
    glVertex2f(0.3f, -1.1f);
glEnd();
}

void draw_cl7()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(0.5f, -0.250f);
    glVertex2f(0.6f, -0.150f);
    glVertex2f(0.650f, -0.1f);
    glVertex2f(0.7f, 0.0f);
       glVertex2f(0.7f, 0.1f);
       glVertex2f(0.650f, 0.3f);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.5f, 0.550f);
    glVertex2f(0.450f, 0.7f);
    glEnd();
}

void draw_cl8()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.996, 0.011);
    glVertex2f(-0.5f, 0.8f);
glVertex2f(-0.7f, 1.0f);
   glVertex2f(-1.1f, 1.2f);
   glVertex2f(-1.0f, 0.8f);
   glVertex2f(-0.6f, 0.7f);
   glVertex2f(-0.750f, 0.550f);
   glVertex2f(-0.8f, 0.3f);
   glVertex2f(-0.850f, 0.1f);
   glVertex2f(-0.850f, -0.1f);
   glVertex2f(-0.8f, -0.2f);
   glVertex2f(-0.750f, -0.250f);
   glVertex2f(-0.6f, -0.3f);
    glEnd();
}


void draw_cl9()
{
    glBegin(GL_POLYGON);
    glVertex2f(0.450f, 0.7f);
    glVertex2f(0.8f, 0.650f);
    glVertex2f(1.1f, 1.0f);
    glVertex2f(0.7f, 0.950f);
           glVertex2f(0.3f, 0.850f);
           glVertex2f(0.1f, 0.9f);
           glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.3f, 0.850f);
    glVertex2f(-0.52f, 0.8f);
    glVertex2f(-0.5f, 0.3f);

    glEnd();
}

void draw_cl10()
{
    glBegin(GL_POLYGON);
    glVertex2f(0.450f, 0.7f);
    glVertex2f(0.1f, 0.7f);
    glVertex2f(0.5f, 0.4f);

    glEnd();
    
    
}
void draw_nose_triangle()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0,0,0);
    glVertex2f(-0.05f, 0.1f);
    glVertex2f(0.05f, 0.150f);
    glVertex2f(-0.150f, 0.150f);
    glEnd();
}
void draw_chest_triangle()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.572, 0.364, 0.094);
    glVertex2f(-0.05f, 0.1f);
    glVertex2f(0.05f, 0.150f);
    glVertex2f(-0.150f, 0.150f);
    glEnd();
}
void draw_line_sad_eye()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(0.4f, 0.450f);
    glVertex2f(0.23f, 0.49f);

    glEnd();
}
void draw_line_sad_eye2()
{
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-0.58f, 0.370f);
    glVertex2f(-0.41f, 0.42f);

    glEnd();
}

void draw_sad_mouth()
{
    glBegin(GL_POLYGON);
    glColor3f(0.933, 0.321, 0.356);
    glVertex2f(-0.150f, -0.13f);
    glVertex2f(-0.09f, -0.1f);
    glVertex2f(-0.06f, -0.1f);
    glVertex2f(0.03f, -0.13f);
    glEnd();
}

void happy_mothe(){
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(-0.25f, -0.01);
    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.01f, 0.01f);
    glVertex2f(0.19f, -0.05f);
    glVertex2f(0.25f, 0.01f);
    glEnd();
}
void happy_mothe1(){
    glBegin(GL_POLYGON);
    glColor3f(0.933, 0.321, 0.356);
    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.01f, 0.01f);
    glVertex2f(0.19f, -0.05f);
    glEnd();
}

void happy_mothe3(){
    glBegin(GL_POLYGON);
    glColor3f(0.999, 0.399, 0.399);

    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.13f, -0.15f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.05f, -0.25f);
    glVertex2f(-0.0f, -0.25f);
    glVertex2f(0.03f, -0.23f);
    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.1f, -0.15f);
    glVertex2f(0.14f, -0.1f);
    glVertex2f(0.19f, -0.05f);
    glEnd();
}
void happy_mothe33(){
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.1, 0.1);
    glVertex2f(-0.2f, -0.05f);
    glVertex2f(-0.13f, -0.15f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(-0.05f, -0.25f);
    glVertex2f(-0.0f, -0.25f);
    glVertex2f(0.03f, -0.23f);
    glVertex2f(0.05f, -0.2f);
    glVertex2f(0.1f, -0.15f);
    glVertex2f(0.14f, -0.1f);
    glVertex2f(0.19f, -0.05f);
    glEnd();
}

void sp_mouth()
{
    glEnable(GL_POINT_SMOOTH);
    glPointSize(40.0);
    glBegin(GL_POINTS);
    glColor3f(0.999, 0.399, 0.399);
    glVertex2f(-0.06,-0.13);
    glEnd();
}

void init() {
    glClearColor(0.898, 0.909, 0.890,0.0f); // Set background color to black and opaque
}
void Reshape(int width , int hight){ //دالة لمنع الشخصية من التمطط
    glViewport(0, 0, 700, 700);
}
static void mouse(int button ,int state, int x , int y){
    if(button==GLUT_LEFT_BUTTON){
        if(state==GLUT_UP){
    if(type<3){
        type+=1;}else{type=1;}
    }
}
}
void allbody(){

    draw_cl();
    draw_cl10();
    draw_cl9();
    draw_cl8();
    draw_cl7();
    draw_cl6();
    draw_cl5();
    draw_cl4();
    draw_cl3();
    draw_cl2();
    draw_cl_triangle();
    //draw_Bodyline();
   draw_Bodyline2(); //جزء من الذيل
    draw_Bodyline3();
   // draw_Bodyline4();
    draw_Bodyline5();
    draw_Bodyline6();
    draw_Bodyline7();
    draw_Bodyline8();
    draw_ery_triangle2();//اذن بيكاتشو
   draw_ery_triangle();//اذن بيكاتشو
    draw_Bodyline10();// خد بيكاتشو
    draw_nose_triangle(); // انف بياكتشو
    
    glPushMatrix();
    glScalef(2, 4.5, 2);
    glTranslatef(0.02, -0.256, 0.0);
    glColor3f(0.572, 0.364, 0.070);
    draw_chest_triangle();
    glPopMatrix();
    // خد بيكاتشو سويت له ترانزليت
    glPushMatrix();
    glTranslatef(-1.240, 0.0, 0.0);
    glColor3f(0.8,0.5,0.5);
    draw_Bodyline10();
    glPopMatrix();
    
    //......... ظل الاذاني
    glPushMatrix();
    glTranslatef(0.5, 0.560, 0.0);
    glRotatef(90,0.0,0.0, 1.0);
    glRotatef(90,0.0,0.0, 1.0);
    glRotatef(108,0.0,0.0, 1.0);
    glColor3f(0.913, 0.913, 0.541);
    draw_earـshadowtriangle();
    glPopMatrix();
    //......... ظل الاذاني
    glPushMatrix();
    glTranslatef(-0.619, 0.710, 0.0);
    glRotatef(90,0.0,0.0, 1.0);
    glRotatef(90,0.1,0.0, 1.0);
    glRotatef(90,0.0,0.0, 1.0);
    glRotatef(166.58,0.0,0.0, 1.0);
    glColor3f(0.913, 0.913, 0.541);
    draw_earـshadowtriangle1();
    glPopMatrix();
    glEnd();
}
   // ...............وجهه متفاجئ...............................
void Sp(){
    sp_mouth();
     //draw_Bodyline9();// فم بيكاتشو للوجهه المتفاجئ
    eye();//عين بيكاتشو
//العين هنا عملتلها ترانزليت
    smeye_surprised();
    glPushMatrix();
    glTranslatef(0.83, 0.0, 0.0);
    glColor3f(0,0,0);
    eye();
    glPopMatrix();
   
    // البؤبؤ
    glPushMatrix();
glTranslatef(0.83, 0.0, 0.0);
glColor3f(0,0,0);
    smeye_surprised();
    glPopMatrix();
    glEnd();
   
}
    //..................بيكاتشو الوجهه الحزين........................
void sad(){
     draw_sad_mouth();
     draw_line_sad_eye();
     draw_line_sad_eye2();
    glPushMatrix();
    glTranslatef(0.86, 0.09, 0.0);
    glColor3f(0,0,0);
    eye();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.046, 0.02, 0.0);
    glColor3f(0,0,0);
    eye();
    glPopMatrix();
    
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.09, -0.0, 0.0);
    smeye_sad();
    glPopMatrix();
    glFlush();
    
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.84, 0.07, 0.0);
    smeye_sad();
    glPopMatrix();
    glEnd();
}

//..................بيكاتشو الوجهه السعيد........................

void Happy(){

    happy_mothe();
    happy_mothe1();
    happy_mothe33();
    happy_mothe3();
    eye();//عين بيكاتشو
//العين هنا عملتلها ترانزليت
    glPushMatrix();
    glTranslatef(0.88, 0.0, 0.0);
    glColor3f(0,0,0);
    eye();
    glPopMatrix();
    
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.03, -0.04, 0.0);
    smeye_sad();
    glPopMatrix();
    glFlush();
    
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(0.87, -0.04, 0.0);
    smeye_sad();
    glPopMatrix();
}
// Switch between faces using key presses (mouse)
static void pecamove(int x){
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-2, 2, -2, 2);
    if(x==1){
            glPushMatrix();
            glRotatef(angle, 0, 0, 1);
            allbody();
            Sp();
            glPopMatrix();
            glEnd();
            
    }
    else    if(x==2){
            glPushMatrix();
            glRotatef(angle, 0, 1, 0);
            allbody();
            Happy();
            glPopMatrix();
            glEnd();
            
        }
    else      if(x==3){
            glPushMatrix();
            glRotatef(angle, 1, 0, 0);
            allbody();
            sad();
            glPopMatrix();
            glEnd();
    }

}
void timer(int t){
    glutTimerFunc(150, timer, t);
    t++;
    angle+=12;
    glutPostRedisplay();
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-2, 2, -2, 2);
    glColor3f(7.5f, 5.1f, 0.1f);
    
    pecamove(type);
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);   
    glutInitWindowSize(700, 700); // Set the window's initial
    glutInitWindowPosition(400, 70);// Position the window's
    glutCreateWindow(" Pikachu "); // Create a window with the given title
    init();
    angle=0;
    times=1;
    glutDisplayFunc(display);// Register display
    glutTimerFunc(150, timer, times);
    glutReshapeFunc(Reshape);//دالة المط
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
