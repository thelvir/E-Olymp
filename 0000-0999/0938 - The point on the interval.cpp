#include <iostream>
using namespace std;
int main()
{
	float x1,y1,x2,y2,x,y,a;
	cin >> x1 >> y1 >>x2 >> y2 >> a;
	x=(x1+a*x2)/(a+1);
	y=(y1+a*y2)/(a+1);
	printf("%.2f",x);
	cout << " ";
	printf("%.2f",y);
	return 0;
}
