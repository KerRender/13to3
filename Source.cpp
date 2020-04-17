#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");//������� ������
	string num13;
	cout << "����� � 13��� �������: ";
	cin >> num13;
	//������� �� 13��� ������� ��������� � 10�
	int n=0;
	int k;
	for (int i = 0; i < num13.length(); i++)
	{
		if (num13[i] < '0' || toupper(num13[i])>'C')	//�������� ���������� ��������
		{
			cout << "������������ ������" << endl;
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
	string num3 = "";	//����� � 3������ �������
	//������� � 3����� �������
	while (n != 0)
	{
		char digit = (n % 3 + '0');
		num3 += digit;
		n /= 3;
	}
	//�������� ������������ �����
	cout << "��������� � 3����� �������: ";
	for (int i = num3.length(); i >= 0; i--)	//����� � �������� �������
		cout << num3[i];
	cout << endl;
	system("pause");
	return 0;
}