#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	long long n,a=0;
	for(;scanf("%lld",&n)!=EOF;)
	a+=n;
	printf("%lld",a);
	
	return 0;
}
