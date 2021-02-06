#include <iostream>
#include <iomanip>
using namespace std;
 
pair<double, double> SumDob (double a, double b){
    return make_pair(a + b, a * b);
}
 
int main() {
    int n;
    cin>>n;
    while (n--){
        double a, b;
        cin>>a>>b;
        cout<<fixed<<setprecision(4)<<SumDob(a,b).first<<" "<<SumDob(a,b).second<<endl;
    }
    return 0;
}
