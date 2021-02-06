#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double a,b,c,d,f,s1,s2,s,p1,p2;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&f);
	p1=(d+f+c)/2;
	s1=p1*(p1-d)*(p1-f)*(p1-c);
	s1=sqrt(s1);
	p2=(a+b+f)/2;
	s2=p2*(p2-a)*(p2-b)*(p2-f);
	s2=sqrt(s2);
	s=s1+s2;
	printf("%.4lf",s);
	return 0;
}
