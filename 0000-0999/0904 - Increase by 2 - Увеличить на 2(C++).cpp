#include <iostream>
using namespace std;
int main()
{
	int a,b=0,c=0,i,arr[100];
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> arr[i];
		if(arr[i]>=0)
		{
			arr[i]+=2;
		}
		printf("%d ",arr[i]);
	}
	return 0;
}
