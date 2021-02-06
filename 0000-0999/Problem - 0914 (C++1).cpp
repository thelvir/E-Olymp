#include <iostream>
using namespace std;
int main()
{
	int i,size;
	double max=0,*ptr;
	cin >> size;
	ptr = new double[size];
	for(i=0;i<size;i++)
	{
		cin >> ptr[i];
		if(ptr[i]<0)
		ptr[i]=ptr[i]*-1;
		if(ptr[i]>max)
		{
			max=ptr[i];
		}
	}
	printf("%.2lf",max);
	return 0;
}
