#include<iostream>
#include <ctime>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int i;
	int z;
	cout << "Введите кол-во элементов массива: ";
	cin >> z;
	if (cin.fail()) {
		cout << "Введите корректное колличество элементов"<<endl<<endl;
		exit(0);
	}
	if (z<0 or z==0) {
		cout << "Введите корректное колличество элементов" << endl << endl;
		exit(0);
	}
	int* a = new int[z];
	int pr = 1;
	int* p = a;
	int n = 0;
	int k = 0;
	int s = 0;
	srand(time(0));
	for (i = 0; i < z; i++) {
		*(p + i) = 1 + rand() % 20 - 10;
		cout <<*(p + i) << "\n";
		if (*(p + i) < 0){
			pr = pr * *(p + i);
		}
		
		if (n <= *(p + i)) {
			n = *(p + i);
			k = i;
		}
	}	
	for (int l = 0; l != k; l++) {
		if (*(p + l) > 0) {
			s = s + *(p + l);
		}
	}
	cout << "Преобразованный массив:" << endl;
	for (i = z - 1; i >= 0; i--) {
		cout << *(p + i) << endl;
	}	
	cout << "Произведение отрицательных элементов массива: " <<pr << endl;
	cout << "Максимальный элемент массива: " << n << endl;
	cout << "Индекс максимального элемента массива: " << k << endl;
	cout << "Сумма положительных элементов массива, расспаложенных до максимального: " << s << endl;
}
