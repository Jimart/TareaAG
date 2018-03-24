#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void bresenham(void)
{
	double xi=-4;
	double yi=-4;
	double xf=4;
	double yf=4;
	double x=0;
	double y=0;
	double deltax,deltay,constante,fin;
	deltax=abs(xf-xi);
	deltay=abs(yf-yi);
	constante=2*deltay-deltax;
	
	if(xi>xf)
	{
		x=xf;
		y=yf;
		fin=xi;
		}
		else
		{
			x=xi;
			y=yi;
			fin=xf;
			
			}
		 glPointSize(3);
		 glBegin(GL_POINTS);
   	   glColor3f(0.50f,0.3f,1.0f);
		 glVertex2f(x, y);
           
            
         while(x<fin){
			 x+=.1;
			 if(constante<0){
				 constante+=2*deltay;
				 }else{
					 y+=.1;
					 constante+=2*(deltay-deltax);
					 }
					 glBegin(GL_POINTS);
					 glVertex2f(x, y);
			 }
	
}
void Plano()
{
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-6.0f, 0.0f);//eje negativo de las x
	glVertex2f(6.0f, 0.0f);//eje positivo de las x
	glVertex2f(0.0f, 6.0f);//eje positivo de las y
	glVertex2f(0.0f, -6.0f);//eje negativo y
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    Plano();
    glEnd();
    bresenham();
    glEnd();   
    glFlush ();
	
	
}
void init (void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6.0, 6.0, -6.0, 6.0, -6.0, 6.0); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (". : Ejercicio Numero 1 : .");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

