#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t,a,b,c,x;
	scanf("%d", &t);
	for(c=1;c<=t;c++){
	  scanf("%d %d",&a, &b);
	   x=a+b;
	   printf("%d\n",x);}
	return 0;
}
