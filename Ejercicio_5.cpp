#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265359
void display(void)
{
    GLfloat x,y,i,min,max;
    

   
    glPointSize(5);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.50f,0.3f,1.0f);

    glBegin(GL_POINTS);
    
    
   min = -3*PI;   // definimos el punto min en x
   max = 3*PI;    // definimos el punto max en x
   
   for (i=min; i<=max;i+=0.001)  // for para ejecutar la funcion
    {  x=i;
		y=tan(x); // definimos la funcion
		
       glVertex2f(x,y);   // dibujar vertices
    }
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(3);
    
    // para dibujar el plano 
 for (i=-5; i<=5;i+=1)   
    {  
		x=i;
			
       glVertex2f(x,0);
    }
    for (i=-5; i<=5;i+=1)
    {  
		y=i;
			
       glVertex2f(0,y);
    }

    glEnd();
    
    glBegin(GL_LINES);
    
    glVertex2f(0,5);
    glVertex2f(0,-5);
    
    glVertex2f(-5,0);
    glVertex2f(5,0);
    
     // fin de dibujar el plano
   

    glEnd();
    glFlush ();

    

}
void init (void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
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
    glutCreateWindow (". : Ejercicio Numero 5 : .");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
