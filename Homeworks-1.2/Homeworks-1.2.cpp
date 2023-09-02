#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "rus");

	/*Попросите пользователя ввести любое число, 
	а затем выведите на консоль то же самое, что он ввёл.*/

	int value;
	double value_point;
	std::cout << "Введите любое целое число: ";
	std::cin >> value;
	
	std::cout << "Введите любое дробное число: ";
	std::cin >> value_point;

	
	std::cout << "Вы ввели: " << value << " и "
		<< value_point << std::endl;

	/*Попросите пользователя ввести любое слово, 
	а затем выведите на консоль то же самое, что он ввёл.*/

	std::string str;
	std::cout << "Введите слово: ";
	std::cin >> str;
	std::cout << "Вы вывели:" << str << std::endl;

	return 0;
}