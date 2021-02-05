#include <iostream>
using namespace std;

int main()
{
    int low, high, i, flag;
	bool a;
    cin >> low >> high;



    while (low <= high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
        	a=true;
           cout << low <<endl;	
		}
       
        low++;
    }
	if(a=false)
		cout << "Absent";
    return 0;
}
