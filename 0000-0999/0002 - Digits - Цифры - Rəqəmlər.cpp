#include <iostream>
using namespace std;
 
int main() {
	int x, n=1;
	cin >> x;
	while ((x/=10) > 0) n++;
	cout << n;
	return 0;
}
