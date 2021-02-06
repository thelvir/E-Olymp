#include <iostream>
using namespace std;
int main()
{
	int size,a=0;
	cin >> size;
	double b,c,d,e,arr[1000];
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
		if(arr[i]>0)
		{
			a++;
			b+=arr[i];
		}
	}
	if(a>0)
	printf("%.2lf",b/a);
	else
	cout << "Not Found" << "\n";
	return 0;
}
