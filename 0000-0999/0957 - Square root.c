#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double a,b,c,d,i,x,y;
	int n;
	
	scanf("%d",&n);
	a=n/100;
	b=n/10%10;
	c=n%10;
	d=a+b+c;
	printf("%.3lf",sqrt(d));
	

	return 0;
}
