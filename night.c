#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include <stdlib.h>

void border();
void tree1();
void color();
void tree2();
void circle1(GLfloat x,GLfloat y,GLfloat radius);
void moon2();
void sun1();
void sun2();

void daycolorchange(void);
void modifynight();

void menu(int id)
{
	int n=0;
	while(n<1)
	{
	switch(id)
	{
	   case 1:exit(0);
		break;
	   case 2:moon2();
	        break;
	   case 3:sun2();
		break;
	}
	n++;
	}
}

void border()
{
     glClear(GL_COLOR_BUFFER_BIT);
     glColor3f(1.0,1.0,1.0);
     
        glBegin(GL_LINE_STRIP);
	  glVertex2f(1000,400);//lines
	  glVertex2f(800,400);
        glEnd();
	
	glBegin(GL_LINE_STRIP);//lines
	  glVertex2f(475,400);
	  glVertex2f(200,400);
        glEnd();
	
	glBegin(GL_LINE_STRIP);//lines
	  glVertex2f(75,400);
	  glVertex2f(0,400);
        glEnd();
	
        glBegin(GL_LINE_STRIP);
	  glVertex2f(0,400);//mountain
	  glVertex2f(250,700);
	  glVertex2f(430,400);
	glEnd();
	
        glBegin(GL_LINE_STRIP);
	  glVertex2f(430,400);//mountain
	  glVertex2f(750,700);
	  glVertex2f(1000,400);
	glEnd();

	glBegin(GL_LINE_LOOP);
	  glVertex2f(350,225);//front wall
	  glVertex2f(350,50);
	  glVertex2f(600,50);
	  glVertex2f(600,225);
	glEnd();
	 
        glBegin(GL_LINE_LOOP);//front roof
	  glVertex2f(475,400);
	  glVertex2f(325,225);
	  glVertex2f(600,225);
	glEnd();
	  
        glBegin(GL_LINE_STRIP);
	  glVertex2f(600,225);//side wall
	  glVertex2f(600,50);
	  glVertex2f(800,250);
	  glVertex2f(800,420);
	glEnd();
		  
        glBegin(GL_LINE_LOOP);
	  glVertex2f(475,400);//side roof
	  glVertex2f(675,580);
	  glVertex2f(800,420);
	  glVertex2f(600,225);
        glEnd();

	glBegin(GL_LINE_STRIP);
	  glVertex2f(425,50);//door
          glVertex2f(425,150);
	  glVertex2f(525,150);
	  glVertex2f(525,50);
	glEnd();
	
        tree1();
	glFlush();
	glutSwapBuffers();
}

void tree1()
{
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
      glVertex2f(100,250);
      glVertex2f(175,250);
      glVertex2f(175,75);
      glVertex2f(100,75);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
      glVertex2f(100,250);
      glVertex2f(0,250);
      glVertex2f(75,350);
      glVertex2f(25,350);
      glVertex2f(100,425);
      glVertex2f(50,425);
      glVertex2f(140,500);
      glVertex2f(225,425);
      glVertex2f(175,425);
      glVertex2f(250,350);
      glVertex2f(200,350);
      glVertex2f(275,250);
      glVertex2f(175,250);
    glEnd();
}

void tree2()//day
{
     glColor3f(0.3,0.0,0.0);
     glBegin(GL_POLYGON);
       glVertex2f(100,250);
       glVertex2f(175,250);
       glVertex2f(175,75);
       glVertex2f(100,75);
     glEnd();
     glColor3f(0.0,0.3,0.01);
     glBegin(GL_POLYGON);
       glVertex2f(100,250);
       glVertex2f(0,250);
       glVertex2f(75,350);
       glVertex2f(25,350);
       glVertex2f(100,425);
       glVertex2f(50,425);
       glVertex2f(140,500);
       glVertex2f(225,425);
       glVertex2f(175,425);
       glVertex2f(250,350);
       glVertex2f(200,350);
       glVertex2f(275,250);
       glVertex2f(175,250);
     glEnd();
}

void tree3()//night
{
    glColor3f(0.4,0.19,0.05);
    glBegin(GL_POLYGON);
      glVertex3f(100,250,1);
      glVertex3f(175,250,1);
      glVertex3f(175,75,1);
      glVertex3f(100,75,1);
    glEnd();
    glColor3f(0.0,0.3,0.0);
    glBegin(GL_POLYGON);
      glVertex2f(100,250);
      glVertex2f(0,250);
      glVertex2f(75,350);
      glVertex2f(25,350);
      glVertex2f(100,425);
      glVertex2f(50,425);
      glVertex2f(140,500);
      glVertex2f(225,425);
      glVertex2f(175,425);
      glVertex2f(250,350); 
      glVertex2f(200,350);
      glVertex2f(275,250);
      glVertex2f(175,250);
    glEnd();
}

void color()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	/*sky*/
        glColor3f(0.4,0.7,1.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,1000);
	  glVertex2f(0,1000);
	glEnd();
	/*ground*/
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,0);
	  glVertex2f(0,0);
	glEnd();
	/*hills*/
	glColor3f(0.3,0.1,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);//mountain
	  glVertex2f(250,700);
	  glVertex2f(430,400);
	glEnd();
	glBegin(GL_POLYGON);
	  glVertex2f(430,400);//mountain
	  glVertex2f(750,700);
	  glVertex2f(1000,400);
	glEnd();
	
        glColor3f(0.7,0.6,0.6);/*front wall*/
	glBegin(GL_POLYGON);
	  glVertex2f(350,225);
	  glVertex2f(350,50);
	  glVertex2f(600,50);
	  glVertex2f(600,225);
	glEnd();
	
	glColor3f(0.5,0.0,0.0);/*front roof*/
	glBegin(GL_POLYGON);
          glVertex2f(475,400);
	  glVertex2f(325,225);
	  glVertex2f(600,225);
	glEnd();
	
	glColor3f(0.7,0.5,0.5);
	glBegin(GL_POLYGON);
	  glVertex2f(475,400);//side roof
	  glVertex2f(675,580);
	  glVertex2f(800,420);
	  glVertex2f(600,225);
	glEnd();
	
	glColor3f(0.7,0.5,0.5);/*side wall*/
	glBegin(GL_POLYGON);
	  glVertex2f(600,225);
	  glVertex2f(600,50);
	  glVertex2f(800,250);
	  glVertex2f(800,420);
	glEnd();

	glBegin(GL_POLYGON);
	 glVertex2f(425,50);//door
	 glVertex2f(425,150);
	 glVertex2f(525,150);
	 glVertex2f(525,50);
	glEnd();

	tree2();
	glColor3f(1.0,1.0,0.0);
	
	glColor3f(0.5,0.5,0.5);
	 circle1(850.0,800.0,20.0);
	 circle1(875.0,790.0,30.0);
	 circle1(910.0,793.0,40.0);
         circle1(950.0,790.0,30.0);
	glColor3f(1.0,1.0,0.0);
}

void circle1(GLfloat x, GLfloat y, GLfloat radius) 
  { 
    float angle;   
    glBegin(GL_POLYGON);
    int i; 
    for(i=0;i<100;i++) 
	{ 
        angle = i*2*(3.14/100); 
        glVertex2f(x+(cos(angle)*radius),y+(sin(angle)*radius)); 
    } 
    glEnd(); 
  }  

void moon1(void);
void nightmode()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
        
        glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,1000);
	  glVertex2f(0,1000);
	glEnd();//blue backround
	
        glColor3f(0.0,0.4,0.0);
	glBegin(GL_POLYGON);//ground color
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,0);
	  glVertex2f(0,0);
	glEnd();
	
        glColor3f(1.0,1.0,1.0);
          circle1(50.0,700.0,2.0);
	  circle1(150.0,750.0,1.0);
	  circle1(550.0,800.0,1.0);
	  circle1(600.0,750.0,1.0);
	  circle1(450.0,600.0,1.0);
	  circle1(400.0,850.0,2.0);//exxtra
	  circle1(350.0,850.0,1.0);
	  circle1(55.0,850.0,2.0);
          circle1(65.0,900.0,2.0);
          circle1(400.0,650.0,1.0);
          circle1(200.0,800.0,2.0);

	glColor3f(0.2,0.1,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);//mountain
	  glVertex2f(250,700);
	  glVertex2f(430,400);
	glEnd();
	
        glBegin(GL_POLYGON);
	  glVertex2f(430,400);//mountain
	  glVertex2f(750,700);
	  glVertex2f(1000,400);
	glEnd();

        glColor3f(0.7,0.6,0.6);
	glBegin(GL_POLYGON);
	  glVertex2f(350,225);//*front wall*//
	  glVertex2f(350,50);
	  glVertex2f(600,50);
	  glVertex2f(600,225);
	glEnd();
	
        glColor3f(0.3,0.0,0.0);
        glBegin(GL_POLYGON);//front roof
	  glVertex2f(475,400);
	  glVertex2f(325,225);
	  glVertex2f(600,225);
	glEnd();
	 
	glColor3f(0.7,0.5,0.5);
	glBegin(GL_POLYGON);
	  glVertex2f(600,225);//side wall
	  glVertex2f(600,50);
	  glVertex2f(800,250);
	  glVertex2f(800,420);
	glEnd();
		 
        glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(475,400);//side roof
	  glVertex2f(675,580);
	  glVertex2f(800,420);
	  glVertex2f(600,225);
	glEnd();
       
        glBegin(GL_POLYGON);
	  glVertex2f(425,50);//door
	  glVertex2f(425,150);
	  glVertex2f(525,150);
	  glVertex2f(525,50);
        glEnd();
				  
	tree3();
}

void daycolorchange()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	/*sky*/
        glColor3f(0.4,0.7,1.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,1000);
	  glVertex2f(0,1000);
	glEnd();
	/*ground*/
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,0);
	  glVertex2f(0,0);
	glEnd();
	/*hills*/
	glColor3f(0.3,0.1,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);//mountain
	  glVertex2f(250,700);
	  glVertex2f(430,400);
	glEnd();
	
        glBegin(GL_POLYGON);
	  glVertex2f(430,400);//mountain
	  glVertex2f(750,700);
	  glVertex2f(1000,400);
	glEnd();
	/*front wall*/
        glColor3f(0.8,0.8,0.4);
	glBegin(GL_POLYGON);
	  glVertex2f(350,225);
	  glVertex2f(350,50);
	  glVertex2f(600,50);
	  glVertex2f(600,225);
	glEnd();
	/*front roof*/
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
          glVertex2f(475,400);
	  glVertex2f(325,225);
	  glVertex2f(600,225);
	glEnd();
	/*side wall*/
	glColor3f(0.7,0.7,0.32);
	glBegin(GL_POLYGON);
	  glVertex2f(600,225);
	  glVertex2f(600,50);
	  glVertex2f(800,250);
	  glVertex2f(800,420);
	glEnd();
	
        glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(475,400);//side roof
	  glVertex2f(675,580);
	  glVertex2f(800,420);
	  glVertex2f(600,225);
	glEnd();
	
	glBegin(GL_POLYGON);
	  glVertex2f(425,50);//door
	  glVertex2f(425,150);
	  glVertex2f(525,150);
	  glVertex2f(525,50);
	glEnd();
	tree2();

	glColor3f(0.5,0.5,0.5);
	  circle1(850.0,800.0,20.0);
	  circle1(875.0,790.0,30.0);
	  circle1(910.0,793.0,40.0);
          circle1(950.0,790.0,30.0);
	glColor3f(1.0,1.0,0.0);
}
				   
 void nightcolorchange()
 {
 
        glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
        glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,1000);
	  glVertex2f(0,1000);
	glEnd();//blue backround
	
        glColor3f(0.0,0.4,0.0);
	glBegin(GL_POLYGON);//ground color
	  glVertex2f(0,400);
	  glVertex2f(1000,400);
	  glVertex2f(1000,0);
	  glVertex2f(0,0);
	glEnd();
	
        glColor3f(1.0,1.0,1.0);
          circle1(50.0,700.0,2.0);
	  circle1(150.0,750.0,1.0);
	  circle1(550.0,800.0,1.0);
	  circle1(600.0,750.0,1.0);
	  circle1(450.0,600.0,1.0);
	  circle1(400.0,850.0,2.0);//exxtra
	  circle1(350.0,850.0,1.0);
	  circle1(55.0,850.0,2.0);
          circle1(65.0,900.0,2.0);
          circle1(400.0,650.0,1.0);
          circle1(200.0,800.0,2.0);

	
	glColor3f(0.2,0.1,0.0);
	glBegin(GL_POLYGON);
	glBegin(GL_POLYGON);
	  glVertex2f(0,400);//mountain
	  glVertex2f(250,700);
	  glVertex2f(430,400);
	glEnd();
	
        glBegin(GL_POLYGON);
	  glVertex2f(430,400);//mountain
	  glVertex2f(750,700);
	  glVertex2f(1000,400);
	glEnd();

	glColor3f(0.8,0.8,0.4);
	glBegin(GL_POLYGON);
          glVertex2f(350,225);//*front wall*//
	  glVertex2f(350,50);
	  glVertex2f(600,50);
	  glVertex2f(600,225);
	glEnd();
	
        glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);//front roof
	  glVertex2f(475,400);
	  glVertex2f(325,225);
	  glVertex2f(600,225);
	glEnd();
	 
        glColor3f(0.7,0.7,0.32);
        glBegin(GL_POLYGON);
	  glVertex2f(600,225);//side wall
	  glVertex2f(600,50);
	  glVertex2f(800,250);
	  glVertex2f(800,420);
        glEnd();
	
        glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	  glVertex2f(475,400);//side roof
	  glVertex2f(675,580);
	  glVertex2f(800,420);
	  glVertex2f(600,225);
	glEnd();
        
        glBegin(GL_POLYGON);
	  glVertex2f(425,50);//door
	  glVertex2f(425,150);
	  glVertex2f(525,150);
	  glVertex2f(525,50);
	glEnd();
	tree3();
}

GLfloat p=120.0,q=700.0;
void movesun()
{
     if(p<500.0)
     { 
	p=p+20;
        q=q+10;
        circle1(p,q,30.0);
	glFlush();
        glutSwapBuffers();
     }
     else if(p<900)
     {
        p=p+20;
        q=q-0.2;
        circle1(p,q,30.0);
	glFlush();
        glutSwapBuffers();
     }
     else if(p>800.0||q>900)
     {
	p=120.0;
	q=700.0;
	circle1(p,q,30.0);
	glFlush();
        glutSwapBuffers();
     }
}

void keys(unsigned char key,int x,int y)
{
	if(key=='b'||key=='B')
		border();
	else if(key=='d'||key=='D')
		sun1();
	else if(key=='n'||key=='N')
		moon1();
	else if(key=='m')
	{    
                nightmode();
		modifynight();
	}
	else if(key=='M')
	{
                nightcolorchange();
                modifynight();
	}
	else if(key=='s')
	{
		color();
		movesun();
	}
	else if(key=='S')
	{
		daycolorchange();
		movesun();
	}
}

void sun2()
{
	daycolorchange();
	glColor3f(1.0,1.0,0.0);
	circle1(120.0,700.0,30.0);
	glFlush();
	glutSwapBuffers();
}

void moon2()
{
	nightcolorchange();
	glColor3f(1.0,1.0,1.0);
         circle1(800.0,850.0,30.0);
	glColor3f(0.0,0.0,0.0);
	 circle1(790.0,860.0,30.0);
	glFlush();
	glutSwapBuffers();
}

void moon1()
{
	nightmode();
	glColor3f(1.0,1.0,1.0);
	 circle1(800.0,850.0,30.0);
	glColor3f(0.0,0.0,0.0);
	 circle1(790.0,860.0,30.0);
	glFlush();
        glutSwapBuffers();
}
void sun1()
{
	color();
	glColor3f(1.0,1.0,0.0);
	 circle1(120.0,700.0,30.0);
	glFlush();
	glutSwapBuffers();
}
GLint i=0;
GLfloat a=800.0,b=850.0,d=800.0,e=850.0;

GLint m=0,n=0,f=30.0;

void modifynight()
{
	glColor3f(1.0,1.0,1.0);
	 circle1(a,b,30.0);
	glColor3f(0.0,0.0,0.0);
	 circle1(d,e,f);
	  e=e+10.0;
	  d=d-10.0;

    if(d<700||e>900)
	{    
		f=f+15.0;
		d=820.0;
		e=900.0;
		if(f>85.0)
		{
			f=30.0;
			d=800.0;
			e=850.0;
		}
		
	}
	glFlush();
	glutSwapBuffers();

}

void init()
{
	glClearColor(0.0,0.0,0.0,1.0);
	glColor3f(1.0,1.0,1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,999.0);
}

void main( int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("day-night color");
	glutDisplayFunc(border);
	glutKeyboardFunc(keys);
	
	glutCreateMenu(menu);
	glutAddMenuEntry("quit",1);
	glutAddMenuEntry("night color change",2);
	glutAddMenuEntry("day color change",3);
	
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	menu(GLUT_LEFT_BUTTON);
	init();
	glutMainLoop();
}
