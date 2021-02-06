#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    int num = 0; 
    double sum = 0; 
    for (int i = 1; i <= n; i++) { 
        double a; 
        cin >> a;
        if ((i%3) == 0 and a > 0) { 
            num++;
            sum += a;
        }
    }
    cout << num << " " << fixed << setprecision(2) << sum << endl;
    return 0;
}
