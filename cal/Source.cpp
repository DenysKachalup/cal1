#include <iostream>

using namespace std;

int main() {
	int c, a, b, x;

	setlocale(LC_CTYPE, "rus");



	do {
		cout << "������ ����� �����" << endl;
		cin >> a;
		cout << "������ ����� �����" << endl;
		cin >> b;

		cout << "������ ��������" << endl;
		cout << " 1 + " << endl;

		cout << " 2 - " << endl;
		cout << " 3 *" << endl;
		cout << " 4 / " << endl;
		cin >> c;

		switch (c)
		{
		case 1:
			cout << "���������" << a + b << endl;
			break;

		case 2:
			cout << "���������" << a - b << endl;
			break;
		case 3:
			cout << "���������" << a * b << endl;
			break;
		case 4:
			cout << "���������" << a / b << endl;
			break;
		}



		cout << "���� ������ ����������� �������� 1" << endl;
		cin >> x;
	}


	while (x == 1);
}