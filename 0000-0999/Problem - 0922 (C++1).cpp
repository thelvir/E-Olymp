#include <iostream>
using namespace std;
int main()
{
	int a,b,size,i,temp=0;
	int *ptr;
	cin >> size;
	ptr=new int[size];
	for(i=0;i<size;i++)
	{
		cin >> ptr[i];
	}
	cout << ptr[size-1] << " ";
	for(i=0;i<size-1;i++)
	{
		cout << ptr[i] << " ";
	}
	delete [] ptr;
	
	
	return 0;
}
