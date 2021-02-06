#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	float d,f=0,g,dizi[1000];
	cin >> a;
	for(int i=0;i<a;i++)
	{
		cin >> d;
		if(d<0)
		{
			d = -1*d;
			if(d>f)
		{
			f=d;
		}
		}
		else
		{
			if(d>f)
		{
			f=d;
		}	
		}
	}
	printf("%.2f",f);
	return 0;
}
