#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Ââåäèòå íîìåð äíÿ íåäåëè" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
			cout << " Ýòî ïîíåäåëüíèê" << endl;
		break;
	case 2:
		cout << " Ýòî âòîðíèê" << endl;
		break;
	case 3:
		cout << " Ýòî ñðåäà" << endl;
		break;
	case 4:
		cout << " Ýòî ÷åòâåðã" << endl;
		break;
	case 5:
		cout << " Ýòî ïÿòíèöà" << endl;
		break;
	case 6:
		cout << " Ýòî cóááîòà" << endl;
		break;
	case 7:
		cout << " Ýòî âîñêðåñåíüå" << endl;
		break;
	}
	system("pause");
	return 0;
}
