#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c;
	
	scanf("%d",&a);
	 
	b=a/100;
	c=a%10;
	
	if (b<c) {
	
		printf("%d",c);
		
	}
	else if (b>c) {
		
		printf("%d",b);
	
	}
	else if (b==c){
	
	printf("=");
	
	} 
	return 0;
}
