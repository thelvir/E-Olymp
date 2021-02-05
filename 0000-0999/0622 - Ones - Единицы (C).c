#include<stdio.h>
int main (){
	int a,b,c,d,f,g,h;
	scanf("%d",&a);
	g=0;
	for (;a!=1;a=a/2){
		if (a%2==1)
		g++;
	}
	printf("%d",g+1);
	return 0;
}
