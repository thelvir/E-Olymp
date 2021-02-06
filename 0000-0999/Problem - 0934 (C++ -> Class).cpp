#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Trig{
	public:
	double a,b,c,area,sp,ha,hb,hc,perim;

	
	void getabc(){
	cin>>a>>b>>c;} 	
	
	float getarea(){
		perim=a+b+c;
		sp=perim/2;
		area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
		return area;
	}
	void hs(){
		ha=(2*area)/a;
		hb=(2*area)/b;
		hc=(2*area)/c;
		cout<<fixed<<setprecision(2)<<ha<<" "<<hb<<" "<<hc;
		
	}
	void start(){
		getabc();
		getarea();
		hs();
		
	}
	

	
};
int main(int argc, char** argv) {
	Trig kk;
	kk.start();
	
	return 0;
}
