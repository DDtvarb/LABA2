#include<iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a[10];
	int i;
	int* p = a;
	int n = 0;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		*(p + i) = 1 + rand() % 100;
		cout << *(p + i) << "\n";
		if (*(p + i) % 3 == 0) {

			n = n + 1;
		}
	}
	cout << "=================" << endl;
	int k = 0;
	for (i = 0; i < 10; i++) {
		if (*(p + i) % 3 == 0) {
			k = i;

		}
	
	}
	cout << "ИНДЕКС ПОСЛЕДНЕГО ЭЛЕМЕНТА КРАТНОГО 3:" << k << endl;
	

	if (n == 0) {
		cout << "ЧИСЛА, КОТОРЫЕ ДЕЛЯТСЯ НА 3 ОТСУТСТВУЮТ";
	}
	else {

		cout << "ИХ КОЛИЧЕСТВО РАВНО:" << n << endl;
	}

}
