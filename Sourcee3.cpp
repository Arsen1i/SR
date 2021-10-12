#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m = 0, k = 0, c = 1;
	cout << "Ââåäèòå ïåðâîå ÷èñëî" << endl;
	cin >> m;
	cout << "Ââåäèòå âòîðîå ÷èñëî" << endl;
	cin >> k;

	while ((m / c) >= 1)
	{
		c *= 10;
	}
	c /= 10;
	while (k >= 1)
	{
		cout << (m / c) % 10;
		k--;
	}
	system("pause");
	return 0;
}
