#include <iostream>
using namespace std;


//Факториал числа
long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num; //непосредственный вызов функции самой себя
}


//Число Фибоначчи под номером num
int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Factorial Task
	/*cout << "Введите число: ";
	cin >> n;
	cout << n << "! = " << factorial(n) << "\n";
	*/

	//Задача 1. Числа Фибоначчи
	cout << "Задача 1. \nВведите номер числа Фибоначчи: \n";
	cin >> n;
	cout << "Число Фибоначчи под номером " << n <<"="<< fibonacci(n) << "\n";
	cout << "Первые 13 чисел Фибоначчи:\n";
	for (int i = 0; i < 13; i++)
		cout << fibonacci(i) << ", ";
	cout << "\b\b.\n";
	return 0;
}