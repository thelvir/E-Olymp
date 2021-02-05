#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,a,i,b=0,c=30000;
	scanf("%d", &n);
	 for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a>=b){
			b=a;
		}
		if(a<=c){
			c=a;
		}
	}
	if(n==1 || n==0)
	  printf("Ooops!");
	else 
	  printf("%d %d", c, b);
	return 0;
}
