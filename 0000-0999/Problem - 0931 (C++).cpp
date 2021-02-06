#include <iostream>
using namespace std;
int main()
{
	long n,d,a,b,i;
	double cem=0,hasil=1;
	cin >> n;
	while(n>0)
	{
		d=n%10;
		n=n/10;
		cem+=d;
		hasil*=d;
	}
	printf("%.3f",hasil/cem);
	return 0;
}
