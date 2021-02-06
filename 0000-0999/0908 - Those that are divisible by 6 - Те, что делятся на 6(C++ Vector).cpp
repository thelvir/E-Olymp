#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int size,i,say=0;
	int a,e=0;
	cin>>size;
	vector<int> v1;
	for(i=0;i<size;i++)
	{
		cin>> a;
		v1.push_back(a);
		if(v1[i]%6==0 && v1[i]>0)
		{
			say++;
			e+=v1[i];
		}
	}
	cout << say <<" " <<e;
	return 0;
}
