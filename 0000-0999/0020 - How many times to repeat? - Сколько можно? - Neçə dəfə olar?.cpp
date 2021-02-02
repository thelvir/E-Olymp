#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
long n,t,c;
cin >> n;
c=0;
while (n>0)
{
    t=n;
    while (t>0)
    {
        n=n-(t%10);
        t=t/10;
    }
    c++;
    
}
cout << c;
}
