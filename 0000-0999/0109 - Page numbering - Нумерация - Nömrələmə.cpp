#include <iostream>
using namespace std;
 
int main()
{
	int N;
	cin >> N;
	for (int i = 1; true; i++) 
    {
		if (i < 10) // в i одна цифра
			N --;
		else if (i >= 10 && i < 100) 
			N -= 2;
		else if (i >= 100 && i < 1000) 
			N -= 3;
		else  
			N -= 4;
		if (N == 0) 
		{
			cout << i << endl;
			break;
		}
		else if (N < 0) 
		{
			cout << 0 << endl;
			break;
		}
    }
	return 0;
}
