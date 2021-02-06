#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int k,a,b,c;
	scanf("%d",&k);
	a=k/10;
	b=k%10;
	c=(a+b)*(a+b);
	printf("%d",c);
	return 0;
}
