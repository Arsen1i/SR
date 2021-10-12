#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, y, x, z;
	cout << "Ââåäèòå âûñîòó è øèðèíó äëèíû ";
	cout << "Âûñîòà ðàâíà: ";
	cin >> a;
	cout << "Øèðèíà ðàâíà:  ";
	cin >> b;
	cout << "Ââåäèòå øèðèíó, äëèíó è âûñîòó ïàðàëëåëåïèïåäà : ";
	cout << "Øèðèíà ðàâíà: ";
	cin >> y;
	cout << " Âûñîòà ðàâíà:";
	cin >> x;
	cout << "Äëèíà ðàâíà:";
    cin >> z;
	if (x < b && y < a && z < b && z < a)
	{
		cout << "Ýòî âîçìîæíî ";
	}
	else
		 << "Æòî íåâîçìîæíî ";
	system("pause");
	return 0;

	
}
