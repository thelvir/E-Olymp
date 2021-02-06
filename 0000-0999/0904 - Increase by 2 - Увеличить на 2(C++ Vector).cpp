#include <iostream>
#include <vector>
using namespace std;
int main()
{
	std::vector<int> myvec;
	int size,i,a,b,c;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>a;
		myvec.push_back(a);
		if(myvec[i]>=0)
		{
			cout<< myvec[i] +2<<" ";
		}
		else
		{
			cout << myvec[i]<<" ";
		}
	}
	return 0;
}
