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
		for (int c = 0; n > 0; n--, c++) {
			sum = sum + (n + c * (n - 1));
		}
		cout << "���������� ������� ������ � ������ ������: " << sum;
	}
	return 0;
}