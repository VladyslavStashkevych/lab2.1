#include <iostream>

using namespace std;

int main() {
	double x, z1, z2;

	// ������� ����������� ������ �������� �
	cout << "Enter x: ";
	cin >> x;

	// ���������� �������� ���� ������ �� ��������� ������
	z1 = pow((1 + x + pow(x, 2)) / (2 * x + pow(x, 2)) + 2 - (1 - x + pow(x, 2)) / (2 * x - pow(x, 2)), -1) * (5 - 2 * pow(x, 2));
	z2 = (4 - pow(x, 2)) / 2;

	// ��������� �������� ���������� ���� ������
	cout << "z1 = " << z1 << "\nz2 = " << z2 << endl;

	system("pause");
	return 0;
}