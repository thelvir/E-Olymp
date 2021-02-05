#include <iostream>
using namespace std;
int main()
{
	long r,l,w;
	cin >> r >> l >> w;
	if(w*w+l*l<=4*r*r)
		cout << "YES";
	else 
		cout << "NO";		
	return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
	long r,l,w;
	cin >> r >> l >> w;
	if(r>l/2 && r>w/2)
		cout << "YES";
	else 
		cout << "NO";	
	return 0;
}
*/
