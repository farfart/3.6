#pragma once
#include <iostream>
/*
* ���������� �������� ��� ������ � ������ ������� �����. ����������� �������
���������, ��������� �� ������� ����� � ������.
*/

// base function

//��������� �����
void Push(char element);

//��������� ����� (������� ������ ������� �����) 
int Pop();

// �������� �� ������ ���� 
bool isEmpty();

//�������� �� ������ ���� 
bool isFull();

// additional function

//���� ����� 
void print();