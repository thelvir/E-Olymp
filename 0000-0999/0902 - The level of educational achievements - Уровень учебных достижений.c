#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x;
	scanf("%d",&x);
	if(x>=1 && x<=3){
		
		printf("Initial");
		
	}
	
	else if (4<=x && x<=6){
	
		printf("Average");
	}
	else if (7<=x && x<=9){
		printf("Sufficient");
	}
	else if (10<=x && x<=12) {
		printf("High");
		
	
	}

	return 0;
}
