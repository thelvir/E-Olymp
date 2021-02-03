#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long a,b,c;
int main(int argc, char *argv[]) {
	scanf("%ld%ld",&a,&b);
	c=a*b-a-b+2;
	printf("%ld",c);
	return 0;
}
