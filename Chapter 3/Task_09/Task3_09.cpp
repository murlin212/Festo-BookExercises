// Task3_09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void func() {
    int i = 0;
    std::cout << "i = " << ++i << std::endl;
}

int main()
{
    for (int x = 0; x < 10; x++)
        func();
}

// ��� ������������ i � ��������, ��������� �� ���� ��������: i = 1 i = 2  � ��. �� 10, �� ��� �� � �������� �� �� �������� 10 ���� i = 1. ���� �� ����� ��  �����,
// �� �� ������� ������ ��� ���������� �� ��������� (������ �� � ��������).

