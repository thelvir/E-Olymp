#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long n,a,d;
	double c,b;
	scanf("%ld",&n);
	b=0.000;
	c=1.000;
	while(n>0){
		d=n%10;
		n=n/10;
		b+=d;
		c*=d;
	}
	
	printf("%.3lf",c/b);
	return 0;
}
