#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int b,d=0,e,i,h;
	double c=0,a;
	// d menfi sayi; c cemleri
	//a input numbers
	
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%lf",&a);
		if(a<0){
		
		d++;
		c=c+a;
		}
	}
	printf("%d %.2lf",d,c);
	
	
	
	
	return 0;
}
