#include <iostream>
#include <cmath> 
#include <iomanip> 
using namespace std;
 
int main() {
    float x, y, z, min1, max1, max2, n;
    cin>>x>>y>>z;
    max1=max(x,y); 
    max2=max(y,z); 
    min1=min(max1,max2);  
    n=x+y+z; 
    min1=min(min1,n); 
    cout<<fixed<<setprecision(2)<<min1;
    return 0;
}
