#include <iostream>

using namespace std;

int main() {
	int c, a, b, x;

	setlocale(LC_CTYPE, "rus");



	do {
		cout << "¬вед≥ть перше число" << endl;
		cin >> a;
		cout << "¬вед≥ть друге число" << endl;
		cin >> b;

		cout << "¬вед≥ть операц≥ю" << endl;
		cout << " 1 + " << endl;

		cout << " 2 - " << endl;
		cout << " 3 *" << endl;
		cout << " 4 / " << endl;
		cin >> c;

		switch (c)
		{
		case 1:
			cout << "результат" << a + b << endl;
			break;

		case 2:
			cout << "результат" << a - b << endl;
			break;
		case 3:
			cout << "результат" << a * b << endl;
			break;
		case 4:
			cout << "результат" << a / b << endl;
			break;
		}



		cout << "€кщо хочете повернутис€ натисн≥ть 1" << endl;
		cin >> x;
	}


	while (x == 1);
}