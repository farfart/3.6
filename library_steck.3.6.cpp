/*
* Реалізувати програму для роботи з лінійним списком рядків. Передбачити функції
додавання, видалення та читання даних зі списку.
*/

#include "steck3.6.h"
#include<Windows.h>
#include <string>

using namespace std;

int main()
{
	string elem;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choise;

	do
	{
		cout << "Меню:\n";
		cout << "1. Додати дані \n";
		cout << "2. Видалити дані\n";
		cout << "3. Вивести на екран\n";
		cout << "0. Вихід з Меню\n";
		cin >> choise;

		switch (choise)
		{
		case 1:
			
			cout << "Введіть дані, які хочете записати:\n";
			getline(cin,elem);
			Push(elem);
			break;

		case 2: 
			Pop();
			break;
		case 3:
			print();
			break;
		default:
			cout << "Неправильно обраний варіант\n";
			break;
		}

	} while (choise != 0);

	return 0;
}﻿
