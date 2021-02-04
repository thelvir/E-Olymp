#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,c,d=0,e,n,j,k=0,i;
	scanf("%d",&n);
	for(;n>1;)
	{
	if(n%2==0)
	{
		n=n/2;
	k++;
	}
	
	else if(n%2==1)
	{
		n=n+1;
	k++;
	}
	}
	printf("%d",k);
	return 0;
}
