#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float a,b,c,d;
	
	scanf("%f %f %f %f",&a,&b,&c,&d);
	
	if (a==c && b==d || a==d && b==c || a==b && c==d)
	{
		printf("YES");
	}
	else 
	{
		printf("NO");

	}

	
	
	
	return 0;
}
