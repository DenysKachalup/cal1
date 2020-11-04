#include <iostream>

using namespace std;

int main() {
	double  a, b, x;
	char c;
	setlocale(LC_CTYPE, "rus");



	do {
		cout << "1 chislo" << endl;
		cin >> a;
		cout << "2 chislo" << endl;
		cin >> b;

		cout << "operation" << endl;
		cout << "  + " << endl;

		cout << "  - " << endl;
		cout << "  *" << endl;
		cout << "  / " << endl;
		cin >> c;

		switch (c)
		{
		case '+':
			cout << "Result " << a + b << endl;
			break;

		case '-':
			cout << "Result " << a - b << endl;
			break;
		case '*':
			cout << "Result " << a * b << endl;
			break;
		case '/':
			cout << "Result " << a / b << endl;
			break;
		}



		cout << "Natusny 1" << endl;
		cin >> x;
	}


	while (x == 1);
}