#include <iostream>
using namespace std;
int main()
{
	int h1,m1,s1,h2,m2,s2,t1,t2;
	int t3,h3,m3,s3;
	cin >> h1 >> m1 >> s1 ;
	cin >> h2 >> m2 >> s2 ;
	t1 = h1*3600+m1*60+s1;
	t2 = h2*3600+m2*60+s2;
	t3 = t2 - t1;
	h3=t3/3600;
	t3=t3-h3*3600;
	m3 = t3 /60;
	t3 = t3 - m3*60;
	s3=t3;
	cout << h3 << " " << m3 << " " << s3;
	return 0;
}
