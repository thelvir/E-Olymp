#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char q='a';
    int n,k,i,j;
    cin >> n;
    for (i=0, k=n-1; i<n; i++, k--) {
        s=s+q;
        q++;
        cout << 'a';
        for (j=0; j<k; j++) cout << " ";
        cout << s << "\n";
    }
    return 0;
}
