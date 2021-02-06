#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c,d,x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
	    x1=(-b-sqrt(d))/(2*a);
	    x2=(-b+sqrt(d))/(2*a);
	    if (x1<x2)
    printf("Two roots: %d %d\n",x1,x2);
        else 
    printf("Two roots: %d %d\n",x2,x1);
    }
    else if (d==0)
    {
    	x1=x2=-b/(2*a);
	printf("One root: %d\n",x1);
    }
	else 
    printf ("No roots\n");
	return 0;
}
