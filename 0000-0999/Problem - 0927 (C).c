#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    double a,b,c,d,f,g,h,j;
    scanf("%lf",&a);
    h=0;
    for(;a!=0;a--){
    	scanf("%lf %lf",&b,&c);
    	if(c<50)
    	h+=b;
    	
	}
	printf("%.0f",h);
	return 0;
}
