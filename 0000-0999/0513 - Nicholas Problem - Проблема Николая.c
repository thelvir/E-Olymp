#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	long long n,i,b=1;
	long m;
	scanf("%lld %ld",&n,&m);
	if (n>=m)
	    b=0;
	else {
	while (n!=0){
		b=(b*n)%m;
		
		n--;
    }
	}
		printf("%ld\n",b);

	
	return 0;
}
