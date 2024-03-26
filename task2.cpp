#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, a;
	cout << "Введите количество друзей: ";
	cin >> n;
	a = (n + 1) % 2;
	if (a == 0) {
		n = (n + 1) / 2;
		cout << "Минимальное количество разрезов:" << n;
	}
	else {
		n = n + 1;
		cout << "Минимальное количество разрезов:" << n;
	}
	return 0;
}