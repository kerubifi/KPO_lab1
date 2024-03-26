#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int n, sum = 0;
	cout << "Введите количество кнопок:";
	cin >> n;
	if (n > 2000 || n < 0) {
		cout << "Количество кнопок введино неверно";
	}
	else {
		for (int c = 0; n > 0; n--, c++) {
			sum = sum + (n + c * (n - 1));
		}
		cout << "Количество нажатий кнопок в худшем случае: " << sum;
	}
	return 0;
}