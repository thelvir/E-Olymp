#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double oteref,ucteref;
	double h,l;
	double V,S;
	cin >> oteref >> ucteref;
	double o2=oteref/2;
	l=sqrt(ucteref*ucteref-o2*o2);
	h=sqrt(l*l-o2*o2);
	V=oteref*oteref*h/3;
	S=oteref*2*l+oteref*oteref;
	printf("%.3lf ""%.3lf",S,V);
	return 0;
}
