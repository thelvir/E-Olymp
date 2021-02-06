#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float x,y;
	
	scanf("%f %f",&x,&y);
	
	if (x>0 && y>0 )
	{
		printf("1");
	}
	else if (x<0 && y>0 )
	{
		printf("2");
	}
	else if (x<0 && y<0 )
	{
		printf("3");
	}
	else if (x>0 && y<0)
	{
		printf("4");
	}
	else 
	{
	    printf("0");	
	}
	
	
	
	return 0;
}
