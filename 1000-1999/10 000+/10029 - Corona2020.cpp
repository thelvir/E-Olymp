#include <iostream>
using namespace std;
int main()
{
	unsigned long long a,b,c;
	cin >> a >> b >> c;
	if(a+b-c==2020)
		printf("%lld+%lld-%lld",a,b,c);
	else if(a-b+c==2020)
		printf("%lld-%lld+%lld",a,b,c);
	else if(a-b-c==2020)
		printf("%lld-%lld-%lld",a,b,c);	
	else if(a+b+c==2020)
		printf("%lld+%lld+%lld",a,b,c);	
	else
		cout << "CORONA";
	return 0;
}
