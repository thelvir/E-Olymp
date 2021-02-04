#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int k , w ,a1 ,b1 , a2 , b2 , a3 , b3;
	
	scanf("%d%d%d%d%d%d%d%d",&k , &w ,&a1 ,&b1 , &a2 , &b2 , &a3 , &b3);
	
	
	if((a1+ a2 + a3 <= w && b1 + b2 + b3 >= k) || (a1+ a2  <= w && b1 + b2  >= k) || (a1 + a3 <= w && b1 + b3 >= k) || (a2 + a3 <= w && b2 + b3 >= k) ||
	(a1 <= w && b1 >= k) ||
	(a2 <= w && b2 >= k) ||
	(a3 <= w && b3 >= k)
	
	  ){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	
	
	return 0;
}
