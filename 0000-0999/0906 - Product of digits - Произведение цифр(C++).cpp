#include <iostream>
using namespace std;
int main()
{
  int a,b,c,d;
cin>>d;
a=d%10;
b=d/10%10;
c=d/100%10;
cout << a*b*c;

  return 0;
}
