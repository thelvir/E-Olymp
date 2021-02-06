#include <iostream>
using namespace std;
 
int main() {
    int n, p;
    cin>>p; 
    int min = 100;
    int max = -100;
    for (int i = 0; i < p; i++){
        cin>>n;
        if(n < min){
            min = n;
        }
        if(n > max){
            max = n;
        }
    }
    cout<<min + max;
    return 0;
}
