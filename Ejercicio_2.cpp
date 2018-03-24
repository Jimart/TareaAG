#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPointSize(3);
    glBegin(GL_POINTS);
    glColor3f(0.50f,0.3f,1.0f);//agrega color a la parabola
    GLfloat y1=0;//declarando variable
    GLfloat cuadrado=0;//declarando variable

    for(GLfloat x1=-5; x1<=5; x1+=0.05)//For que itera desde -5 a 5 
    {
	    cuadrado=x1*x1;//x al cuadrado
	    y1 = 2*cuadrado + 3*x1 - 2; //ecuación
	    glVertex2f(x1,y1);//vertice
	}
	    // para dibujar el plano 
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(3);
 for ( float i=-9; i<=9;i+=1)   
    {  
		float x=i;
			
       glVertex2f(x,0);
    }
    for (float i=-9; i<=9;i+=1)
    {  
		float y=i;
			
       glVertex2f(0,y);
    }

    glEnd();
    
    glBegin(GL_LINES);
    
    glVertex2f(0,9);
    glVertex2f(0,-9);
    
    glVertex2f(-9,0);
    glVertex2f(9,0);
    
     // fin de dibujar el plano
   
    glEnd();   
    glFlush ();
	
	
}
void init (void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (". : Ejercicio Numero 2 : .");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
