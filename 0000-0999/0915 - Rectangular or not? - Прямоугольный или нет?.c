#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* gor indi qaqan nagaracax! */

int main() {
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b )
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
