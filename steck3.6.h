#pragma once
#include <iostream>
#include <string>

using namespace std;
/*
* Реалізувати програму для роботи з лінійним списком рядків. Передбачити функції
додавання, видалення та читання даних зі списку.
*/

// base function

//додавання даних
void Push(string elem);

//видалення даних (видаляє верхній елемент стека) 
string Pop();

// перевірка чи пустий стек 
bool isEmpty();

//перевірка чи повний стек 
bool isFull();

// additional function

//друк стеку 
void print();
