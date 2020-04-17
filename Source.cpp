#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");//русска€ локаль
	string num13;
	cout << "„исло в 13ной системе: ";
	cin >> num13;
	//перевод из 13ной системы счислени€ в 10ю
	int n=0;
	int k;
	for (int i = 0; i < num13.length(); i++)
	{
		if (num13[i] < '0' || toupper(num13[i])>'C')	//проверка допустимых символов
		{
			cout << "Ќедопустимый символ" << endl;
			system("pause");
			return 0;
		}
		k = pow(13, i);
		if (num13[(num13.length() - 1) - i] > '9') {
			num13[(num13.length() - 1) - i] = toupper(num13[(num13.length() - 1) - i]);
			n += ((int)num13[(num13.length() - 1) - i] - 65 + 10) * k;
			continue;
		}
		n += (num13[(num13.length() - 1) - i] - '0') * k;
	}
	cout << n;
	string num3 = "";	//число в 3ричной системе
	//перевод в 3ичную систему
	while (n != 0)
	{
		char digit = (n % 3 + '0');
		num3 += digit;
		n /= 3;
	}
	//получили перевернутое число
	cout << "–езультат в 3ичной системе: ";
	for (int i = num3.length(); i >= 0; i--)	//вывод в обратном пор€дке
		cout << num3[i];
	cout << endl;
	system("pause");
	return 0;
}