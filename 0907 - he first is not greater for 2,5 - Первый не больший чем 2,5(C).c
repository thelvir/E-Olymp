#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,i,k=0;
	float b;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%f",&b);
		if(b>2.5)
		{
		
		b=b;
		k++;
	}
	else if (b<=2.5)
	break;
	continue;
	b=b;
	}
	if(k==a)
	printf("Not Found");
	else
	printf("%d %.2f",k+1,b);
	
	

	return 0;
}
