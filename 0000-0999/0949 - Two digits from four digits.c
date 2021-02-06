#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,a,b,c,d,s;
	scanf("%d",&n);
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-(a*1000+b*100))/10;
	d=c/10;
	s=b*10+c;
	printf("%d",s);
		return 0;
}
