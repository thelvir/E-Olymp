#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double xa,xb,xc,xd,ya,yb,yc,yd;
	cin >>xa>>ya>>xb>>yb>>xc>>yc>>xd>>yd;
	double ac,bd,mx,my;
	mx = (xa+xc)/2.0;
	my = (ya+yc)/2.0;
	printf("%.3lf %.3lf",mx,my);
	cout << endl;
	ac= sqrt((xc-xa)*(xc-xa) + (yc-ya)*(yc-ya));
	bd = sqrt((xd-xb)*(xd-xb) + (yd-yb)*(yd-yb));
	printf("%.3lf %.3lf",ac,bd);
	return 0;
}
