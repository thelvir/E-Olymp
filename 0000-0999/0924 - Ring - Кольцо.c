#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    double r1,r2,s1,s2,sh;
	scanf("%lf %lf",&sh,&r1);
	/*s1=M_PI*r1*r1;
	s2=sh-s1; 
	nurlan komek eledi :)
	r2=sqrt(s2/M_PI);*/
	r2=sqrt(r1*r1-sh/M_PI);
	printf("%.2lf",r2);
	
	return 0;
}
