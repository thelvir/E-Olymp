#include <iostream>   
#include <iomanip>    
#include <cmath>     
using namespace std;
 

double distance (double x1, double y1, double z1,
                 double x2, double y2, double z2)
{
    return sqrt( pow(x1-x2, 2) + pow(y1-y2, 2) + pow(z1-z2, 2)); 
}

double Geron (double x1, double y1, double z1,
              double x2, double y2, double z2,
              double x3, double y3, double z3)
{
    double a,b,c,P;
    a = distance(x1,y1,z1, x2,y2,z2);
    b = distance(x2,y2,z2, x3,y3,z3);
    c = distance(x1,y1,z1, x3,y3,z3);
    P = (a+b+c)/2;
    return sqrt(P*(P-a)*(P-b)*(P-c)); 
}

double square (double x1, double y1, double z1,
               double x2, double y2, double z2, 
               double x3, double y3, double z3,
               double x4, double y4, double z4)
{
    double S1,S2,S3,S4,S;
    S1 = Geron(x1,y1,z1,x2,y2,z2,x3,y3,z3);
    S2 = Geron(x1,y1,z1,x2,y2,z2,x4,y4,z4);
    S3 = Geron(x1,y1,z1,x3,y3,z3,x4,y4,z4);
    S4 = Geron(x2,y2,z2,x3,y3,z3,x4,y4,z4);
    S = S1+S2+S3+S4;
    return S;
}
int main() 
{
    double x1,x2,x3,x4,y1,y2,y3,y4,z1,z2,z3,z4;
    cin >> x1 >> y1 >> z1 
        >> x2 >> y2 >> z2 
        >> x3 >> y3 >> z3 
        >> x4 >> y4 >> z4;
    double S = square (x1,y1,z1,x2,y2,z2,x3,y3,z3,x4,y4,z4);
    cout << fixed << setprecision(1) << S << endl; 
    return 0;
}
