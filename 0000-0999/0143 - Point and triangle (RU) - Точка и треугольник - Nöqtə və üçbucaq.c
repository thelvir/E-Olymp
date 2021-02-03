#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,x1,y1,x2,y2,x3,y3,s1,s2,s3;
	
	scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&x1,&y1,&x2,&y2,&x3,&y3);
    s1=((x1-a)*(y2-y1))-((x2-x1)*(y1-b));
    s2=((x2-a)*(y3-y2))-((x3-x2)*(y2-b));
    s3=((x3-a)*(y1-y3))-((x1-x3)*(y3-b));
    if((s1>=0 && s2>=0 && s3>=0)||(s1<=0 && s2<=0 && s3<=0))
    {
    	printf("1");
	}

	else
	{
		printf("0");
	}
 
	return 0;
}
