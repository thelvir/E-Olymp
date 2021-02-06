#include <stdio.h>
int main () {
int n,a,b,c,d;
scanf("%d",&n);
a=n/100;
b=n/10%10;
c=n%10;
d=10*a+c;
printf("%d",d);
return 0;
}
