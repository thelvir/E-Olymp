#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if ( a==b && b==a && a==c)
	{
		printf("1");
	}
	else if (a==b || a==c || b==c)
	{
	printf("2");	
	}
	else
	{
	printf("3");
	}
	
	return 0;
}
