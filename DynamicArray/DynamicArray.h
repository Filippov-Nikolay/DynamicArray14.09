#pragma once
#include <iostream>
using namespace std;

class DynamicArray {
	int* ptr; // указатель на динам. массив
	int size;  // размер массива 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();

	void Input();// rand
	void Output();// вывод на консоль

	int * GetPointer();
	int GetSize();


	DynamicArray DynamicArray::operator+(int);
	DynamicArray DynamicArray::operator-(int);
	DynamicArray DynamicArray::operator*(int);
	DynamicArray DynamicArray::operator-(DynamicArray);
	DynamicArray DynamicArray::operator+(DynamicArray);
	DynamicArray& DynamicArray::operator++();
	DynamicArray& DynamicArray::operator--();
};

