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
	����������� ��������� ����������:

	DynamicArray rez = a+10 ; // ����������� ���-�� ��������� �� 10
    rez = a-2; // ������� ��������� 2 ��������, ���� ������ >2
	rez = a*2;// �������� ������� �������� ������� �������� �� 2, ���������� ����� ������!

	rez = a-b; // �������� ��������
	rez=a+b;  // ������������ ��������
	++rez;  // ����������� ���������� ��������� �� 1(�������� 0).
    --rez;  // ��. ���������� ��������� �� 1, ������� ��������� �������
	*/

	system("pause");
}