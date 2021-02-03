#include <iostream>

using namespace std;


int main()
{
	int way = 0, x = 0, y = -1, d[100][100], n, A, B;
	cin >> n >> A >> B;
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++) d[i][j] = 0;
	for (int i = 1; i <= n*n; i++)
	{
		switch (way)
		{
		case 0:
			y++;
			if (y == n - 1 || d[x][y + 1]) way++;
			break;
		case 1:
			x++;
			if (x == n - 1 || d[x + 1][y]) way++;
			break;
		case 2:
			y--;
			if (y == 0 || d[x][y - 1]) way++;
			break;
		case 3:
			x--;
			if (x == 0 || d[x - 1][y]) way++;
			break;
		}
		d[x][y] = i;
		way %= 4;
	}
	cout << d[A - 1][B - 1] << endl;
}
