#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	long m,n,i;
	i=0;
	scanf("%ld", &n);
	for(m=1; n>m; m++){
		if(n/m==n%m){
			i++;
		}
	}
	printf("%ld", i);
	return 0;
}
