#include <iostream>
using namespace std;

int function(int num1, int num2) {
	for (int i = 1;; i++)
		if (i % num1 == 0 && i % num2 == 0)
			return i;
}

int main() {
	//system("chcp 1251>nul");
	int num1, num2;
	cin >> num1 >> num2;

	cout << function(num1, num2) << endl;
}

/*
Приклад
Визначимо НСК(396, 840). Розклад на прості множники:
396=2*2*3*3*11
840=2*2*2*3*5*7
Отже, найменше спільне кратне дорівнює: 2*2*2*3*5*7*3*11= 27720
*/
