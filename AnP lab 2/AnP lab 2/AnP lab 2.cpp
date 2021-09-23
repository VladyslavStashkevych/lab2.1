#include <iostream>

using namespace std;

int main() {
	double x, z1, z2;

	// Просимо користувача ввести значення х
	cout << "Enter x: ";
	cin >> x;

	// Обчислення значення двох звінних за допомогою формул
	z1 = pow((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x + pow(x, 2)) / (2 * x - pow(x, 2)), -1) * (5 - 2 * pow(x, 2));
	z2 = (4 - pow(x, 2)) / 2;

	// Виведення значення обчислених вище змінних
	cout << "z1 = " << z1 << "\nz2 = " << z2 << endl;

	system("pause");
	return 0;
}