#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, y, x, z;
	cout << "������� ������ � ������ ����� ";
	cout << "������ �����: ";
	cin >> a;
	cout << "������ �����:  ";
	cin >> b;
	cout << "������� ������, ����� � ������ ��������������� : ";
	cout << "������ �����: ";
	cin >> y;
	cout << " ������ �����:";
	cin >> x;
	cout << "����� �����:";
    cin >> z;
	if (x < b && y < a && z < b && z < a)
	{
		cout << "��� �������� ";
	}
	else
		 << "��� ���������� ";
	system("pause");
	return 0;

}