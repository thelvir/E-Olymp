#include <stdio.h>
int main()
{
	int a,b,c,x;
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x%10;
	if(x>0)
	{
	printf("%d\n%d\n%d",a,b,c);
    }
    else if (x<0)
    {
     printf("%d\n%d\n%d",-a,-b,-c);	
	}
	
	
	return 0;
}
