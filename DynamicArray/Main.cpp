#pragma once
#include "DynamicArray.h"

void main() {
	DynamicArray a(5); // constructor 1 param
	a.Input();
	a.Output();
	DynamicArray b = a; // copy constructor
	b.Output();

	cout << "OLD size: " << a.GetSize() << endl;
	DynamicArray rez = a + 10;
	cout << "NEW size: " << rez.GetSize() << endl;
	rez.Input();
	rez.Output();

	DynamicArray rez1 = a - 2;
	rez1.Output();

	
	DynamicArray rez2 = a*2;
	rez2.Output();

	
	DynamicArray rez3 = a - b;
	rez3.Output();

	DynamicArray rez4 = a + b;
	rez4.Output();

	DynamicArray rez5(4);
	rez5.Input();
	rez5.Output();
	++rez5;
	rez5.Output();

	DynamicArray rez6(4);
	rez6.Input();
	rez6.Output();
	--rez6;
	rez6.Output();

	/*
	реилизовать следующие перегрузки:

	DynamicArray rez = a+10 ; // увеличиваем кол-во элементов на 10
    rez = a-2; // удаляем последние 2 элемента, если размер >2
	rez = a*2;// значение каждого элемента массива умножаем на 2, возвращаем новый массив!

	rez = a-b; // разность массивов
	rez=a+b;  // конкатенация массивов
	++rez;  // увеличиваем количество элементов на 1(значение 0).
    --rez;  // ум. количество элементов на 1, удаляем последний элемент
	*/

	system("pause");
}