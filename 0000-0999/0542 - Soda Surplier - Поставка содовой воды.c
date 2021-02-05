#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int e,f,c,k=0,s,n;
	scanf("%d %d %d",&e,&f,&c);
	s=e+f;
	while (s>=c){
		n=s/c;
		s=n+s%c;
		k=k+n;
	}
	printf("%d",k);
	return 0;
}
