#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,c,d,e,f=-101,g=101;
	scanf("%d",&a);
	int n[a];
	for(b=0;b<a;b++)
	{
		scanf("%d",&d);
		n[b]=d;	
	}
	for(b=0;b<a;b++)
	{
		if(n[b]<g)
		g=n[b];
		if(n[b]>f)
		f=n[b];
		
	}
	printf("%d",g+f);
	
	
	
	
	return 0;
}
