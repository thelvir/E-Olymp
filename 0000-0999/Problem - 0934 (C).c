#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
 float a,b,c,ha,hb,hc,p,S;
 scanf("%f%f%f", &a,&b,&c);

p=(a+b+c)/2;
if(S=sqrt((p-a)*(p-b)*(p-c)*p));
ha=2*S/a;
hb=2*S/b;
hc=2*S/c;

printf("%.2f", ha);
printf(" %.2f", hb);
printf(" %.2f\n", hc);

  return 0;
}
