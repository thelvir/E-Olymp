/*#include <iostream>
using namespace std;
int main()
{
	unsigned int n,fac=1,k=0;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	
	while(fac>0)
	{
		if(fac%10==0)
			k++;
		fac=fac/10;
		if(fac%10!=0)
			break;	
	}
	cout << k;
	return 0;
}*/
#include <iostream> 
using namespace std;
int main() { 
    long long n, m = 5, s = 0; 
    cin >> n; 
    while(n >= m){
        s = s + (n / m); 
        m = m * 5;
    }
    cout << s;
    return 0;
}
