#include<windows.h>
#include<GL/glut.h>
#include<math.h>

#define PI 3.1416

float p = 180, q = 105;

float floatMaker(int x)
{
    return x / 255.0f;
//    return f;
}

float r1 = floatMaker(255);
float r2 = floatMaker(255);
float r3 = floatMaker(0);

float r4 = floatMaker(0);
float r5 = floatMaker(255);
float r6 = floatMaker(0);

float r7 = floatMaker(255);
float r8 = floatMaker(0);
float r9 = floatMaker(0);

float r10 = floatMaker(0);
float r11 = floatMaker(0);
float r12 = floatMaker(255);

float r13 = floatMaker(255);
float r14 = floatMaker(255);
float r15 = floatMaker(255);

float r16 = floatMaker(255);
float r17 = floatMaker(255);
float r18 = floatMaker(255);

float r19 = floatMaker(255);
float r20 = floatMaker(255);
float r21 = floatMaker(0);

float r22 = floatMaker(0);
float r23 = floatMaker(255);
float r24 = floatMaker(0);

float r25 = floatMaker(255);
float r26 = floatMaker(0);
float r27 = floatMaker(0);

float l1 = floatMaker(0);
float l2 = floatMaker(255);
float l3 = floatMaker(0);

float l4 = floatMaker(255);
float l5 = floatMaker(0);
float l6 = floatMaker(0);

float l7 = floatMaker(255);
float l8 = floatMaker(255);
float l9 = floatMaker(255);

float l10 = floatMaker(255);
float l11 = floatMaker(255);
float l12 = floatMaker(255);

float l13 = floatMaker(255);
float l14 = floatMaker(255);
float l15 = floatMaker(0);

float l16 = floatMaker(0);
float l17 = floatMaker(0);
float l18 = floatMaker(255);

float l19 = floatMaker(0);
float l20 = floatMaker(255);
float l21 = floatMaker(0);

float l22 = floatMaker(255);
float l23 = floatMaker(0);
float l24 = floatMaker(0);

float l25 = floatMaker(255);
float l26 = floatMaker(255);
float l27 = floatMaker(255);

float t1 = floatMaker(255);
float t2 = floatMaker(153);
float t3 = floatMaker(0);

float arm1 = 0;
float arm2 = 0;
float arm3 = 0;

//float p1 = 0, p2 = 0, p3 = 0;
//float q1 = 0, q2 = 0, q3 = 0;

float h1 = 180, h2 = 0, h3 = 0, h4 = 0;

void init()
{
    glClearColor(floatMaker(217), floatMaker(254), floatMaker(246), 1.0);
    glOrtho(0, 180, 0, 120, -5, 5);
}

void circle(float radius_x, float radius_y, float a, float b)
{
    int i=0;
    float angle = 0.0;

    glBegin(GL_POLYGON);

    for(i = 0; i < 100; i++)
    {
        angle = 2 * PI * i / 100;
        glVertex2f (a + cos(angle) * radius_x, b + sin(angle) * radius_y);
    }

    glEnd();
}

float s = 0;

void smile()
{
    glBegin(GL_POLYGON);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));    //Mouth
    glVertex2f(131.5, 63 + s);
    glVertex2f(128.5, 63 + s);
    glVertex2f(129.5, 64 - s);
    glVertex2f(130.5, 64 - s);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //chin
    glVertex2f(130.5, 62.5);
    glVertex2f(129.3, 62.5);

    glEnd();
}

void moveBird();

float p1 = 0;

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(floatMaker(255), floatMaker(128), floatMaker(128)); //The sun
    circle(9, 9, 150, 105);

    glPushMatrix();

    glTranslatef(p1, 0, 0);

    glColor3f(floatMaker(166), floatMaker(166), floatMaker(166)); //Cloud
    circle(6, 5, 70 - 75, 105 - 7);

    glColor3f(floatMaker(166), floatMaker(166), floatMaker(166)); //Cloud
    circle(6, 5, 50 - 75, 105 - 7);

    glColor3f(floatMaker(166), floatMaker(166), floatMaker(166)); //Cloud
    circle(6.5, 5, 60 - 75, 102 - 7);

    glColor3f(floatMaker(166), floatMaker(166), floatMaker(166)); //Cloud
    circle(9, 5, 60 - 75, 109 - 7);

    if(p1 <= 215)
        p1 += 0.003;
    else
        p1 = 0;

    glutPostRedisplay();

    glPopMatrix();

    glPushMatrix();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(255), floatMaker(128), floatMaker(128));  //Ray
    glVertex2f(150, 118);
    glVertex2f(150, 115);

    glColor3f(floatMaker(255), floatMaker(128), floatMaker(128));  //Ray
    glVertex2f(154, 116.5);
    glVertex2f(153, 114.5);

    glColor3f(floatMaker(255), floatMaker(128), floatMaker(128));  //Ray
    glVertex2f(146, 116.5);
    glVertex2f(147, 114.5);

    glColor3f(floatMaker(255), floatMaker(128), floatMaker(128));  //Ray
    glVertex2f(141, 116);
    glVertex2f(144, 113);

    glColor3f(floatMaker(255), floatMaker(128), floatMaker(128));  //Ray
    glVertex2f(159, 116);
    glVertex2f(156, 113);

    glEnd();

    glColor3f(floatMaker(102), floatMaker(51), floatMaker(0));  //Tree
    glBegin(GL_QUADS);

    glVertex2f(45, 0);  //Tree 1
    glVertex2f(45, 60);
    glVertex2f(43, 60);
    glVertex2f(43, 0);

    glVertex2f(45 - 24, 0);  //Tree 2
    glVertex2f(45 - 24, 60);
    glVertex2f(43 - 24, 60);
    glVertex2f(43 - 24, 0);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(floatMaker(0), floatMaker(102), floatMaker(0));   //Tree 1
    glVertex2f(52, 55);
    glVertex2f(44, 63);
    glVertex2f(36, 55);

    glColor3f(floatMaker(0), floatMaker(128), floatMaker(0));   //Tree 1
    glVertex2f(51, 60);
    glVertex2f(44, 68);
    glVertex2f(37, 60);

    glColor3f(floatMaker(0), floatMaker(153), floatMaker(0));   //Tree 1
    glVertex2f(49, 65);
    glVertex2f(44, 71);
    glVertex2f(39, 65);

    glColor3f(floatMaker(0), floatMaker(102), floatMaker(0));   //Tree 2
    glVertex2f(52 - 24, 55 + 3);
    glVertex2f(44 - 24, 63 + 3);
    glVertex2f(36 - 24, 55 + 3);

    glColor3f(floatMaker(0), floatMaker(128), floatMaker(0));   //Tree 2
    glVertex2f(51 - 24, 60 + 3);
    glVertex2f(44 - 24, 68 + 3);
    glVertex2f(37 - 24, 60 + 3);

    glColor3f(floatMaker(0), floatMaker(153), floatMaker(0));   //Tree 2
    glVertex2f(49 - 24, 65 + 3);
    glVertex2f(44 - 24, 71 + 3);
    glVertex2f(39 - 24, 65 + 3);

    glColor3f(floatMaker(173), floatMaker(231), floatMaker(219));   //Mountain
    glVertex2f(180, 0);
    glVertex2f(80, 65);
    glVertex2f(-50, 0);

    glColor3f(floatMaker(154), floatMaker(203), floatMaker(193));   //Mountain
    glVertex2f(110, 0);
    glVertex2f(30, 55);
    glVertex2f(-180, 0);

    glColor3f(floatMaker(173), floatMaker(231), floatMaker(219));   //Mountain
    glVertex2f(250, 0);
    glVertex2f(170, 60);
    glVertex2f(40, 0);

    glColor3f(floatMaker(154), floatMaker(203), floatMaker(193));   //Mountain
    glVertex2f(250, 0);
    glVertex2f(130, 55);
    glVertex2f(40, 0);

    glColor3f(floatMaker(123), floatMaker(169), floatMaker(159));   //Mountain
    glVertex2f(150, 0);
    glVertex2f(70, 50);
    glVertex2f(-20, 0);

    glEnd();

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0)); //The Ball background
    circle(8.9, 8.9, 46.2, 9.7);

    glColor3f(floatMaker(234), floatMaker(99), floatMaker(32)); //The Ball
    circle(8.5, 8.5, 46.2, 9.7);

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Ball line
    glVertex2f(39, 14);
    glVertex2f(54.2, 12);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Ball line
    glVertex2f(38, 6);
    glVertex2f(53, 4);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Ball line
    glVertex2f(46, 18.1);
    glVertex2f(44, 1.1);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Ball line
    glVertex2f(47, 18.1);
    glVertex2f(45, 1.2);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Ball line
    glVertex2f(48, 18);
    glVertex2f(46, 1.2);

    glEnd();

    glColor3f(floatMaker(77), floatMaker(73), floatMaker(62));  //Table
    glBegin(GL_QUADS);

    glVertex2f(155, 0);
    glVertex2f(155, 28);
    glVertex2f(55, 28);
    glVertex2f(55, 0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(58, 25, 0.0);
    glVertex3f(152, 25, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(58, 25, 0.0);
    glVertex3f(58, 4, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(152, 25, 0.0);
    glVertex3f(152, 4, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(58, 4, 0.0);
    glVertex3f(152, 4, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(58, 21, 0.0);
    glVertex3f(152, 21, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(58, 17, 0.0);
    glVertex3f(152, 17, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(58, 13, 0.0);
    glVertex3f(152, 13, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(58, 9, 0.0);
    glVertex3f(152, 9, 0.0);

    glEnd();

    glColor3f(floatMaker(175), floatMaker(142), floatMaker(115));  //Outside table
    glBegin(GL_QUADS);

    glVertex2f(155, 28);
    glVertex2f(165, 31);
    glVertex2f(65, 31);
    glVertex2f(55, 28);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(55, 28, 0.0);
    glVertex3f(155, 28, 0.0);

    glEnd();

    glColor3f(floatMaker(97), floatMaker(93), floatMaker(80));  //Outside table
    glBegin(GL_QUADS);

    glVertex2f(165, 0);
    glVertex2f(165, 31);
    glVertex2f(155, 28);
    glVertex2f(155, 0);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(155, 28, 0.0);
    glVertex3f(165, 31, 0.0);

    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(155, 0, 0.0);
    glVertex3f(155, 28, 0.0);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(55, 28, 0.0);
    glVertex3f(65, 31, 0.0);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(floatMaker(53), floatMaker(46), floatMaker(36));  //inside table
    glVertex3f(65, 31, 0.0);
    glVertex3f(165, 31, 0.0);

    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Floor
    glVertex3f(0, 0, 0.0);
    glVertex3f(180, 0, 0.0);

    glEnd();

    glPopMatrix();


    //Dynamic Objects Here
    //************************************The Arm of the boy************************************

    glBegin(GL_QUADS);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));    //Hand1 arm
    glVertex2f(110, 40);
    glVertex2f(98 + arm1, 40 + arm1);
    glVertex2f(98 + arm2, 37 + arm3);
    glVertex2f(107, 35);

//    glColor3f(floatMaker(255), floatMaker(0), floatMaker(0));    //Hand1 palm
//    glVertex2f(102.5, 47);
//    glVertex2f(102.5 + p1, 48);
//    glVertex2f(102.5 + p2, 51.5);
//    glVertex2f(102.5 - p3, 50);
//
//    glColor3f(floatMaker(255), floatMaker(0), floatMaker(0));    //Hand1 thumb
//    glVertex2f(106 + q1, 48);
//    glVertex2f(106 + q2, 48.5);
//    glVertex2f(106 + q3, 49.5);
//    glVertex2f(106, 49.7);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 arm border 1
    glVertex2f(110, 40);
    glVertex2f(98 + arm1, 40 + arm1);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 arm border 2
    glVertex2f(98 + arm1, 40 + arm1);
    glVertex2f(98 + arm2, 37 + arm3);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 arm border 3
    glVertex2f(98 + arm2, 37 + arm3);
    glVertex2f(107, 35);

    glEnd();

    //************************************The Rubik's Cube************************************
    glPushMatrix();

    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 0.0f);    //Right side
    glVertex2f(90, 39);
    glVertex2f(90, 29);
    glVertex2f(98, 31);
    glVertex2f(98, 41);

    glColor3f(r1, r2, r3);    //Right side 1
    glVertex2f(90.3, 38.8);
    glVertex2f(90.3, 35.8);
    glVertex2f(92.5, 36.4);
    glVertex2f(92.5, 39.4);

    glColor3f(r4, r5, r6);    //Right side 2
    glVertex2f(90.3, 35.3);
    glVertex2f(90.3, 32.7);
    glVertex2f(92.5, 33.3);
    glVertex2f(92.5, 36);

    glColor3f(r7, r8, r9);    //Right side 3
    glVertex2f(90.3, 32.3);
    glVertex2f(90.3, 29.3);
    glVertex2f(92.5, 30);
    glVertex2f(92.5, 32.9);

    glColor3f(r10, r11, r12);    //Right side 4
    glVertex2f(92.7, 39.3);
    glVertex2f(92.7, 36.6);
    glVertex2f(95, 37.2);
    glVertex2f(95, 40.1);

    glColor3f(r13, r14, r15);    //Right side 5
    glVertex2f(92.7, 36);
    glVertex2f(92.7, 33.3);
    glVertex2f(95, 34);
    glVertex2f(95, 36.8);

    glColor3f(r16, r17, r18);    //Right side 6
    glVertex2f(92.7, 33);
    glVertex2f(92.7, 30);
    glVertex2f(95, 30.6);
    glVertex2f(95, 33.7);

    glColor3f(r19, r20, r21);    //Right side 7
    glVertex2f(95.2, 40);
    glVertex2f(95.2, 37.3);
    glVertex2f(97.8, 38.2);
    glVertex2f(97.8, 40.7);

    glColor3f(r22, r23, r24);    //Right side 8
    glVertex2f(95.2, 36.8);
    glVertex2f(95.2, 34);
    glVertex2f(97.8, 34.8);
    glVertex2f(97.8, 37.8);

    glColor3f(r25, r26, r27);    //Right side 9
    glVertex2f(95.2, 33.6);
    glVertex2f(95.2, 30.7);
    glVertex2f(97.8, 31.4);
    glVertex2f(97.8, 34.5);

    glColor3f(0.0f, 0.0f, 0.0f);    //Left side
    glVertex2f(82, 41);
    glVertex2f(82, 31);
    glVertex2f(90, 29);
    glVertex2f(90, 39);

    glColor3f(l1, l2, l3);    //Left side 1
    glVertex2f(82.2, 40.7);
    glVertex2f(82.2, 37.8);
    glVertex2f(84.6, 37);
    glVertex2f(84.6, 40);

    glColor3f(l4, l5, l6);    //Left side 2
    glVertex2f(82.2, 37.4);
    glVertex2f(82.2, 34.6);
    glVertex2f(84.6, 33.7);
    glVertex2f(84.6, 36.6);

    glColor3f(l7, l8, l9);    //Left side 3
    glVertex2f(82.2, 34.2);
    glVertex2f(82.2, 31.3);
    glVertex2f(84.6, 30.6);
    glVertex2f(84.6, 33.4);

    glColor3f(l10, l11, l12);    //Left side 4
    glVertex2f(84.8, 40);
    glVertex2f(84.8, 37);
    glVertex2f(87, 36.4);
    glVertex2f(87, 39.4);

    glColor3f(l13, l14, l15);    //Left side 5
    glVertex2f(84.8, 36.6);
    glVertex2f(84.8, 33.8);
    glVertex2f(87, 33);
    glVertex2f(87, 36);

    glColor3f(l16, l17, l18);    //Left side 6
    glVertex2f(84.8, 33.4);
    glVertex2f(84.8, 30.7);
    glVertex2f(87, 30);
    glVertex2f(87, 32.6);

    glColor3f(l19, l20, l21);    //Left side 7
    glVertex2f(87.3, 39.3);
    glVertex2f(87.3, 36.2);
    glVertex2f(89.8, 35.7);
    glVertex2f(89.8, 38.6);

    glColor3f(l22, l23, l24);    //Left side 8
    glVertex2f(87.3, 35.9);
    glVertex2f(87.3, 33);
    glVertex2f(89.8, 32.6);
    glVertex2f(89.8, 35.3);

    glColor3f(l25, l26, l27);    //Left side 9
    glVertex2f(87.3, 32.7);
    glVertex2f(87.3, 30);
    glVertex2f(89.8, 29.4);
    glVertex2f(89.8, 32.2);

    glColor3f(0.0f, 0.0f, 0.0f);    //Top side
    glVertex2f(82, 41);
    glVertex2f(90, 39);
    glVertex2f(98, 41);
    glVertex2f(90, 43.5);

    glColor3f(t1, t2, t3);    //Top side 1
    glVertex2f(82.4, 40.9);
    glVertex2f(90.1, 39.1);
    glVertex2f(97.6, 41);
    glVertex2f(90.1, 43.1);

    glEnd();

    glLineWidth(1.2);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Top side margin 1
    glVertex2f(84.5, 41.5);
    glVertex2f(92, 39.7);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Top side margin 2
    glVertex2f(87, 42.5);
    glVertex2f(95, 40.5);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Top side margin 3
    glVertex2f(84, 40);
    glVertex2f(93, 42.5);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Top side margin 4
    glVertex2f(87.5, 39.5);
    glVertex2f(96.1, 41.8);

    glEnd();

    glPopMatrix();


    //************************************The Bird************************************
    glPushMatrix();

    glTranslatef(p, q, 0);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0)); //eye1
//        circle(1, 1.5, 95, 108);
    circle(1, 1.5, 95-100+13, 108-q);

    glColor3f(floatMaker(255), floatMaker(255), floatMaker(255)); //eyeball1
//        circle(0.3, 0.6, 95.1, 108.6);
    circle(0.3, 0.6, 95.1-100+13, 108.6-q);

//        glColor3f(floatMaker(0), floatMaker(0), floatMaker(0)); //Body background
//        circle(6.35, 6.35, 100, 105);

    glColor3f(floatMaker(0), floatMaker(220), floatMaker(0)); //Body
//        circle(6, 6, 100, 105);
    circle(6, 6, 13, 0);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0)); //eye2
//        circle(1, 1.5, 99, 108);
    circle(1, 1.5, 99-100+13, 108-q);

    glColor3f(floatMaker(255), floatMaker(255), floatMaker(255)); //eyeball2
//        circle(0.4, 0.7, 99.2, 108.5);
    circle(0.4, 0.7, 99.2-100+13, 108.5-q);

    glBegin(GL_TRIANGLES);

    glColor3f(floatMaker(230), floatMaker(230), floatMaker(0));   //Beak
    glVertex2f(89-100+13, 105-q);
    glVertex2f(97-100+13, 104-q);
    glVertex2f(95.5-100+13, 107-q);

    glEnd();

    glLineWidth(1.2);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Beak margin
    glVertex2f(89-100+13, 105-q);
    glVertex2f(97-100+13, 104-q);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Beak margin
    glVertex2f(89-100+13, 105-q);
    glVertex2f(95.5-100+13, 107-q);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);    //Wing

    glVertex2f(102-100+13, 105.5-q); //point1
    glVertex2f(102.5-100+13, 103-q); //point2
    glVertex2f(108-100+13, 101-q); //point3
    glVertex2f(107-100+13, 103-q); //point4
    glVertex2f(111-100+13, 102-q); //point5
    glVertex2f(109-100+13, 104-q); //point6
    glVertex2f(113-100+13, 104-q); //point7
    glVertex2f(110.5-100+13, 106-q); //point8
    glVertex2f(114-100+13, 106-q); //point9
    glVertex2f(108-100+13, 108.5-q); //point10
    glVertex2f(105-100+13, 108-q); //point11

    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg left
    glVertex2f(101-100+13, 97.5-q);
    glVertex2f(101-100+13, 100-q);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg left fingers
    glVertex2f(101-100+13, 97.5-q);
    glVertex2f(99-100+13, 96-q);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg left fingers
    glVertex2f(101-100+13, 97.5-q);
    glVertex2f(100.5-100+13, 96-q);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg left fingers
    glVertex2f(101-100+13, 97.5-q);
    glVertex2f(102-100+13, 96-q);


    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg right
    glVertex2f(99-100+13, 97.5-q);
    glVertex2f(99-100+13, 99.5-q);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg right fingers
    glVertex2f(99-100+13, 98-q);
    glVertex2f(98-100+13, 96.5-q);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg right fingers
    glVertex2f(99-100+13, 98-q);
    glVertex2f(96-100+13, 97-q);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Leg right fingers
    glVertex2f(99-100+13, 98-q);
    glVertex2f(97.5-100+13, 97-q);

    glEnd();

    glPopMatrix();


    //************************************The Handkerchief************************************
    glPushMatrix();

    glTranslatef(h1, 0, 0);

    glBegin(GL_POLYGON);

    glColor3f(floatMaker(234), floatMaker(0), floatMaker(0));
    glVertex2f(86 - 100 + 22 + h4, 96.5 - 1.8 - h2 + h3); //point1
    glVertex2f(81 - 100 + 22 + h4, 93 - 1.8 - h2 + h3); //point2
    glVertex2f(78 - 100 + 22 + h4, 85 - 1.8 - h2 + h3); //point3
    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));
    glVertex2f(79 - 100 + 22 + h4, 80 - 1.8 - h2 + h3); //point4
    glColor3f(floatMaker(234), floatMaker(0), floatMaker(0));
    glVertex2f(82 - 100 + 22 + h4, 82 - 1.8 - h2 + h3); //point5
    glVertex2f(89 - 100 + 22 + h4, 78 - 1.8 - h2 + h3); //point6
    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));
    glVertex2f(95 - 100 + 22 + h4, 83 - 1.8 - h2 + h3); //point7
    glColor3f(floatMaker(234), floatMaker(0), floatMaker(0));
    glVertex2f(96 - 100 + 22 + h4, 79 - 1.8 - h2 + h3); //point8
    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));
    glVertex2f(102 - 100 + 22 + h4, 82 - 1.8 - h2 + h3); //point9
    glColor3f(floatMaker(234), floatMaker(0), floatMaker(0));
    glVertex2f(95 - 100 + 22 + h4, 96.5 - 1.8 - h2 + h3); //point10
    glVertex2f(92 - 100 + 22 + h4, 98 - 1.8 - h2 + h3); //point11

    glEnd();

    glPopMatrix();

    //************************************The Boy************************************
    glPushMatrix();

    glBegin(GL_TRIANGLES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));   //Hair 1
    glVertex2f(123, 73);
    glVertex2f(122, 78);
    glVertex2f(126, 75);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));   //Hair 2
    glVertex2f(123, 73);
    glVertex2f(125, 81);
    glVertex2f(130, 75);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));   //Hair 3
    glVertex2f(125, 75);
    glVertex2f(129, 83);
    glVertex2f(133, 75);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));   //Hair 4
    glVertex2f(129, 75);
    glVertex2f(133, 81);
    glVertex2f(137, 73);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));   //Hair 5
    glVertex2f(131, 75);
    glVertex2f(137, 78);
    glVertex2f(137, 73);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(floatMaker(255), floatMaker(0), floatMaker(255));    //T-shirt
    glVertex2f(126, 56);    //point 1
    glVertex2f(116, 55);    //point 2
    glVertex2f(112, 45);    //point 3
    glVertex2f(118, 45);    //point 4
    glVertex2f(120, 48);    //point 5
    glVertex2f(121, 31);    //point 6
    glVertex2f(139, 31);    //point 7
    glVertex2f(140, 50);    //point 8
    glVertex2f(141, 45);    //point 9
    glVertex2f(147, 45);    //point 10
    glVertex2f(143, 55);    //point 11
    glVertex2f(134, 56);    //point 12

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));    //Hand2 muscle
    glVertex2f(146, 45);
    glVertex2f(141, 45);
    glVertex2f(143, 31.1);
    glVertex2f(147, 31.1);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand2 border 1
    glVertex2f(141, 45);
    glVertex2f(143, 31.1);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand2 border 2
    glVertex2f(147, 31.1);
    glVertex2f(146, 45);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand2 joint
    glVertex2f(143.5, 37);
    glVertex2f(145, 37);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));    //Hand1 muscle
    glVertex2f(112, 45);
    glVertex2f(110, 40);
    glVertex2f(113, 36);
    glVertex2f(118, 45);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));   //Hand1 elbow
    glVertex2f(110, 40);
    glVertex2f(107, 35);
    glVertex2f(113, 36);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));    //Hand1 elbow
    glVertex2f(107, 35);
    glVertex2f(109, 34);
    glVertex2f(111, 34.5);
    glVertex2f(113, 36);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 border 4
    glVertex2f(112, 45);
    glVertex2f(110, 40);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 border 5
    glVertex2f(113, 36);
    glVertex2f(118, 45);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 border 6
    glVertex2f(111, 34.5);
    glVertex2f(113, 36);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 border 7
    glVertex2f(109, 34);
    glVertex2f(111, 34.5);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Hand1 border 8
    glVertex2f(107, 35);
    glVertex2f(109, 34);

    glEnd();

    glBegin(GL_QUADS);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));    //Neck
    glVertex2f(126.5, 62);
    glVertex2f(126, 56);
    glVertex2f(134, 56);
    glVertex2f(133.5, 62);

    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));   //Neck
    glVertex2f(126, 56);
    glVertex2f(130, 53);
    glVertex2f(134, 56);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(floatMaker(234), floatMaker(198), floatMaker(136));    //Face

    glVertex2f(125, 75); //point1
    glVertex2f(123, 73); //point2
    glVertex2f(124, 64); //point3
    glVertex2f(129, 60); //point4
    glVertex2f(131, 60); //point5
    glVertex2f(136, 64); //point6
    glVertex2f(137, 73); //point7
    glVertex2f(135, 75); //point8

    glEnd();

    smile();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Eyebrow1
    glVertex2f(128, 72.2);
    glVertex2f(126, 72.2);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Eyebrow2
    glVertex2f(134, 72.2);
    glVertex2f(132, 72.2);

    glEnd();

    glColor3f(floatMaker(255), floatMaker(255), floatMaker(255));   //eye1
    circle(1.5, 1.8, 127, 70);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));   //eyeball1
    circle(0.7, 0.9, 126.6, 69.5);

    glColor3f(floatMaker(255), floatMaker(255), floatMaker(255));   //eye2
    circle(1.5, 1.8, 133, 70);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));   //eyeball2
    circle(0.7, 0.9, 132.6, 69.5);

    glBegin(GL_QUADS);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));    //Ear left
    glVertex2f(123.2, 71);
    glVertex2f(122, 71.1);
    glVertex2f(122.8, 67);
    glVertex2f(124, 66.5);

    glColor3f(floatMaker(208), floatMaker(141), floatMaker(70));    //Ear right
    glVertex2f(136.7, 71);
    glVertex2f(136, 66.5);
    glVertex2f(137.2, 67);
    glVertex2f(138, 71.1);

    glEnd();

    glLineWidth(1.2);
    glBegin(GL_LINES);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Nose
    glVertex2f(130, 68);
    glVertex2f(129, 66);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Nose
    glVertex2f(130.5, 66);
    glVertex2f(129, 66);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Face border
    glVertex2f(123, 73); //point2
    glVertex2f(124, 64); //point3

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Face border
    glVertex2f(124, 64); //point3
    glVertex2f(129, 60); //point4

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Face border
    glVertex2f(129, 60); //point4
    glVertex2f(131, 60); //point5

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Face border
    glVertex2f(131, 60); //point5
    glVertex2f(136, 64); //point6

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //Face border
    glVertex2f(136, 64); //point6
    glVertex2f(137, 73); //point7

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //neck border
    glVertex2f(126.5, 62);
    glVertex2f(126, 56);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //neck border
    glVertex2f(126, 56);
    glVertex2f(130, 53);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //neck border
    glVertex2f(130, 53);
    glVertex2f(134, 56);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //neck border
    glVertex2f(134, 56);
    glVertex2f(133.5, 62);

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 1
    glVertex2f(126, 56);    //point 1
    glVertex2f(116, 55);    //point 2

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 2
    glVertex2f(116, 55);    //point 2
    glVertex2f(112, 45);    //point 3

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 3
    glVertex2f(112, 45);    //point 3
    glVertex2f(118, 45);    //point 4

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 4
    glVertex2f(118, 45);    //point 4
    glVertex2f(120, 48);    //point 5

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 5
    glVertex2f(120, 48);    //point 5
    glVertex2f(121, 31);    //point 6

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 6
    glVertex2f(121, 31);    //point 6
    glVertex2f(139, 31);    //point 7

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 7
    glVertex2f(139, 31);    //point 7
    glVertex2f(139.8, 46);    //point 8

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 8
    glVertex2f(139.8, 46);    //point 8
    glVertex2f(141, 45);    //point 9

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 9
    glVertex2f(141, 45);    //point 9
    glVertex2f(147, 45);    //point 10

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 10
    glVertex2f(147, 45);    //point 10
    glVertex2f(143, 55);    //point 11

    glColor3f(floatMaker(0), floatMaker(0), floatMaker(0));  //T-shirt border 11
    glVertex2f(143, 55);    //point 11
    glVertex2f(134, 56);    //point 12

    glEnd();

    glPopMatrix();

    glFlush();
}

void moveBird()
{
    p -= 0.01;

    if(h1 >= 79)
        h1 -= 0.01;

    else
    {
        if(h2 <= 49)
            h2 += 0.015;
    }

    glutPostRedisplay();
}

void temp() {}

void my_mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            PlaySound("bird.wav", NULL, SND_FILENAME| SND_ASYNC);
            glutIdleFunc(moveBird);
        }
        break;

    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(temp);
        }
        break;

    default:
        break;
    }
}

void spe_key(int key, int x, int y)
{

    switch (key)
    {
//    case GLUT_KEY_LEFT:
//        tx -=5;
//        glutPostRedisplay();
//        break;
//
//    case GLUT_KEY_RIGHT:
//        tx +=5;
//        glutPostRedisplay();
//        break;
//
//    case GLUT_KEY_DOWN:
//        ty -=5;
//        glutPostRedisplay();
//        break;

    case GLUT_KEY_UP:

        if(h2 > 49)
        {
            PlaySound("magic.wav", NULL, SND_FILENAME| SND_ASYNC);

            r1 = floatMaker(255);
            r2 = floatMaker(255);
            r3 = floatMaker(255);

            r4 = floatMaker(255);
            r5 = floatMaker(255);
            r6 = floatMaker(255);

            r7 = floatMaker(255);
            r8 = floatMaker(255);
            r9 = floatMaker(255);

            r10 = floatMaker(255);
            r11 = floatMaker(255);
            r12 = floatMaker(255);

            r13 = floatMaker(255);
            r14 = floatMaker(255);
            r15 = floatMaker(255);

            r16 = floatMaker(255);
            r17 = floatMaker(255);
            r18 = floatMaker(255);

            r19 = floatMaker(255);
            r20 = floatMaker(255);
            r21 = floatMaker(255);

            r22 = floatMaker(255);
            r23 = floatMaker(255);
            r24 = floatMaker(255);

            r25 = floatMaker(255);
            r26 = floatMaker(255);
            r27 = floatMaker(255);

            l1 = floatMaker(0);
            l2 = floatMaker(255);
            l3 = floatMaker(0);

            l4 = floatMaker(0);
            l5 = floatMaker(255);
            l6 = floatMaker(0);

            l7 = floatMaker(0);
            l8 = floatMaker(255);
            l9 = floatMaker(0);

            l10 = floatMaker(0);
            l11 = floatMaker(255);
            l12 = floatMaker(0);

            l13 = floatMaker(0);
            l14 = floatMaker(255);
            l15 = floatMaker(0);

            l16 = floatMaker(0);
            l17 = floatMaker(255);
            l18 = floatMaker(0);

            l19 = floatMaker(0);
            l20 = floatMaker(255);
            l21 = floatMaker(0);

            l22 = floatMaker(0);
            l23 = floatMaker(255);
            l24 = floatMaker(0);

            l25 = floatMaker(0);
            l26 = floatMaker(255);
            l27 = floatMaker(0);

            s = 1;
            arm1 = 8;
            arm2 = 5;
            arm3 = 10;

            h3 = 15;
            h4 = 12;
        }

//        p1 = 4;
//        p2 = 3;
//        p3 = 1;
//
//        q1 = 0.5;
//        q2 = 3;
//        q3 = 2.5;

//        glutIdleFunc(smile);

        glutPostRedisplay();
        break;

    default:
        break;
    }
}

int main()
{
    glutInitWindowSize(900, 600);
    glutInitWindowPosition(250, 100);
    glutCreateWindow("Cube Solver Bird");
    init();
    glutDisplayFunc(myDisplay);

    glutSpecialFunc(spe_key);
    glutMouseFunc(my_mouse);

    glutMainLoop();

    return 0;
}
