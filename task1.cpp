#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n, sum = 0;
	cout << "������� ���������� ������:";
	cin >> n;
	if (n > 2000 || n < 0) {
		cout << "���������� ������ ������� �������";
	}
	else {
		for (int r = 0; n > 0; n--, r++) {
			sum = sum + (n + r * (n - 1));
		}
		cout << "���������� ������� ������ � ������ ������: " << sum;
	}
	return 0;
}