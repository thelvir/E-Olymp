#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double a, m, n, b, c, d;
    cin>>a>>m; 
    b = 2 * a + 1;
    c = 2 * a - 2 - 2 * m;
    d = b * b - 4 * c;
    n = ( -b + sqrt(d) ) / 2;
    cout<<n;
    return 0;
}
