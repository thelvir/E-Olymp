#include <iostream>
using namespace std;
 
int main() {
    double matrix[3][2];
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> matrix[j][i];
        }
    }
    double d = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    double d1 = matrix[2][0] * matrix[1][1] - matrix[2][1] * matrix[1][0];
    double d2 = matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0];
    printf("%.3lf\n%.3lf\n", d1 / d, d2 / d);
    return 0;
}
