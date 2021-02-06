#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,k,t;
	int n;
	c=0;
	t=0;
	scanf("%d", &n);
	for(k=1;k<=n;k++){
		scanf("%f", &a);
		if(a>0){
			c=a+c;
			t++;
		}
		if(a<0){
			
		}
	} 
	if(t==0){
		printf("Not Found");
	}
	else{
	  printf("%.2f", c/t);}
	
	
	return 0;
}
