#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPointSize(3);
    glBegin(GL_POINTS);
    GLfloat y=0;//declarando varible
    //for que inicia en x=-4 
    for(GLfloat x=-3; x<=3; x+=0.05)
    {
		glColor3f(0.0f, 0.0f, 1.0f);
		y= 3*x + 7;//formula de la recta
		glVertex2f(x,y);//vertices
	}
	//Agregandole valores a la variable x para capturar los puntos rojos
	if (GLfloat x=-3)	{
		glColor3f(1.0, 0.0, 0.0);
		y= 3*x + 7;
		glVertex2f(x,y);
		}
	if (GLfloat x=-2){
		
		glColor3f(1.0, 0.0, 0.0);
		y= 3*x + 7;
		glVertex2f(x,y); 
		}
	if (GLfloat x=-1)	{
		glColor3f(1.0, 0.0, 0.0);
		y= 3*x + 7;
		glVertex2f(x,y);
			}
	if (GLfloat x=-0.5){
		glColor3f(1.0, 0.0, 0.0);
		y= 3*x + 7;
		glVertex2f(x,y);
		}
	if (GLfloat x=0){
		glColor3f(1.0, 0.0, 0.0);
		y= 3*x + 7;
		glVertex2f(x,y);
		}
	if (GLfloat x=0.5)	{
		glColor3f(1.0, 0.0, 0.0);
		y= 3*x + 7;
		glVertex2f(x,y);
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
    glOrtho(-9.0, 9.0, -9.0, 9.0, -9.0, 9.0); 
    }

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (200, 200);
    glutCreateWindow (". : Ejercicio Numero 3 : .");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
