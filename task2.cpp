#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, a;
	cout << "������� ���������� ������: ";
	cin >> n;
	a = (n + 1) % 2;
	if (a == 0) {
		n = (n + 1) / 2;
		cout << "����������� ���������� ��������:" << n;
	}
	else {
		n = n + 1;
		cout << "����������� ���������� ��������:" << n;
	}
	return 0;
}