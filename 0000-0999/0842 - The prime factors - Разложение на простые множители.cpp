/*#include <iostream>
using namespace std;
int main()
{
	int n,k=0;
	cin >> n;
	for(int i=2;i<=n;i++)
	{
		k=1;
		if(n%i==0)
		{	
			cout << i;
			n=n/i;
			cout << "*";
			i--;
		}	
	}
	return 0;
}*/
#include <iostream>
using namespace std;
 
int main() {
    long long numb, divisor = 2;
    cin >> numb;
    while (divisor*divisor <= numb)
    {
        if (numb%divisor == 0)
        {
            cout << divisor;
            numb = numb / divisor;
            cout << '*';
        }
        else if (divisor == 2) divisor = 3;
        else divisor = divisor + 2;
    }
    cout << numb;
    return 0;
}
