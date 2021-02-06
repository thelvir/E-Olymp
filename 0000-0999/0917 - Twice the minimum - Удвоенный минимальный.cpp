#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int size,i;
	double min=101,a;
	std::vector<double> v1;
	cin >> size;
	for(i=0;i<size;i++)
	{
		cin>>a;
		v1.push_back(a);
		if(min>v1[i])
		min=v1[i];
	}
	printf("%.2lf",min*2);
	return 0;
}
