#include "steck3.6.h"
#include <iostream>

using namespace std;
 
/*
* Реалізувати програму для роботи з лінійним списком рядків. Передбачити функції
додавання, видалення та читання даних зі списку.
*/

//private section in cpp
const int SIZE = 150;

string mASSiv [SIZE];
int top = 0;


// base function
void Push(string elem)
{
	if (!isFull())
	{
		mASSiv[top] = elem; top++;
	}
	else
	{
		cout << "Невистачає рядків\n";
	}
}
string Pop()
{
	if (!isEmpty())
	{
		top--;
		return mASSiv[top + 1];
	}
	else
	{
		cout << "Рядок вже пустий\n";
	}

}

bool isEmpty()
{
	return top == 0;
}

bool isFull()
{
	return SIZE == top;

}

// additional function

void print()
{
	for (int i = 0; i < top; i++)
		cout << mASSiv[i]<<"\n";

}
