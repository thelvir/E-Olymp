#include <stdio.h>
#include <stdlib.h>

/* run this program using the  jizn vor amm your own getch, system("pause") or input loop */

int main() {
	int a;
	
	scanf("%d",&a);
	
	if (a>=1 && a<=2)
	{
		printf("Winter");
	}
	else if(a>=3 && a<=5)
	{
		printf("Spring");
	}
	else if (a>=6 && a<=8)
    {
	    printf("Summer");
    }
    else if (a>=9 && a<=11)
    {
    	printf("Autumn");
	}
	else if (a=12)
	{
		printf("Winter");
	}
	return 0;
}
