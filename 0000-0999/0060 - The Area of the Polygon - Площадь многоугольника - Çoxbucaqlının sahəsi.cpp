#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() { 
    int n, x1, x2, y1, y2, x, y; 
    double sum=0; 
    cin >> n >> x >> y; 
    x1=x; 
    y1=y; 
    for (int i=0; i<(n-1); i++) { 
        cin >> x2 >> y2; 
        sum=sum+(x1+x2)*(y2-y1); 
        x1=x2; 
        y1=y2; 
    } 
    sum=sum+(x+x2)*(y-y2); 
    cout << fixed << setprecision(3) << abs(sum) / 2 << endl;
    return 0; 
}
