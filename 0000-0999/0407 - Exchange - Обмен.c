#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a , k , c ;
	
	scanf("%d",&a);
	for (a=a ; a>0 ; a-- ){
		
		scanf("%d", &k );
		c = k%3;
		if(c == 0){
			printf( "GCV\n");
		
		}
		if(c == 1){
			printf("VGC\n");
			
		}
		if(c == 2){
			printf("CVG\n");
		}
	}
	
	
	
	return 0;
}
