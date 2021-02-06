#include <iostream>
using namespace std;
int main()
{
	float a,c,d,e,arr[1000];
	int b=0,i;
	cin >> a;
	for (i=0;i<a;i++)
	{
		cin >> arr[i];
		if (arr[i]<0)
		{
			c+=arr[i];
			b++;
		}
	}
	//cout << b << " " << c;
	printf("%d %.2f",b,c);
	return 0;
}
