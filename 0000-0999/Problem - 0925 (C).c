#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double x1,y1,x2,y2,x3,y3,p,s,a,b,c,p1;
	
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	
	a=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	a=sqrt(a);
	
	b= (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
	b=sqrt(b);
	
	c=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
	c=sqrt(c);
	
	p=a+b+c;
	
	p1=p/2;
	
	s=sqrt(p1*(p1-a)*(p1-b)*(p1-c));
	
	printf("%.4lf %.4lf",p,s);
	
	
	return 0;
}
