#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int k,a,b,c,d;
	
	scanf("%d",&k);
	
	a=k/100;
	
	b=(k-a*100)/10;
	
	c=(k-a*100-b*10)%10;
	
	d=a*b*c;
	
	printf("%d",d);
	return 0;
}
