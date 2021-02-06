#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    char a;
    cin >> a;
    float b;
    s = a;
    cin >> b;
    cout << ((2 + 3 * (b - 1)) * b)/2 << endl;
    for(int i; i < b; i++) {
        for(int j=1; j < b-i; j++)
               cout << " ";
        cout << s;
        s = a + s + a;
        cout<<endl;
    }
    return 0;
}
