#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>=b && a<=c || a>=c && a<=b)
	{
		printf("%d",a);
	}
	else if (b<=a && b>=c || b>=a && b<=c )
	{
		printf("%d",b);
	}
	else 
	{
		printf("%d",c);
	}
	
	
	return 0;
}
