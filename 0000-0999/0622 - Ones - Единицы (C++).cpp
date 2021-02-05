#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	long n,q,k=0;
	scanf("%ld",&n);

	while(n!=0)
	{
	
		q=n%2;
		n=n/2;
		if(q==1)
		{
		   k+=1;

	    }
	
	}
	printf("%ld",k);
	return 0;
}
