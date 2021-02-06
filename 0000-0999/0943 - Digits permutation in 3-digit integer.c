#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int n,a,b,c;
    
    scanf("%d",&n);
    
    a=n/100;
    
    b=(n-a*100)/10;
    
    c=n%10;
    
    printf("%d%d%d",c,b,a);
    
	return 0;
}
