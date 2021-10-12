#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, y, x, z;
	cout << "Введите высоту и ширину длины ";
	cout << "Высота равна: ";
	cin >> a;
	cout << "Ширина равна:  ";
	cin >> b;
	cout << "Введите ширину, длину и высоту параллелепипеда : ";
	cout << "Ширина равна: ";
	cin >> y;
	cout << " Высота равна:";
	cin >> x;
	cout << "Длина равна:";
    cin >> z;
	if (x < b && y < a && z < b && z < a)
	{
		cout << "Это возможно ";
	}
	else
		 << "Жто невозможно ";
	system("pause");
	return 0;

}