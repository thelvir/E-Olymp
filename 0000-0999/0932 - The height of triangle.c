#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
double S,a,h,D;
scanf("%lf %lf",&S,&a);

D=a*a+8*S;
h=(-a+sqrt(D))/2;

printf("%.2lf\n",h);
 
 return 0;
}
