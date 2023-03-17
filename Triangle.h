#pragma once
#ifndef TRIANGLE
#define TRIANGLE

#include <iostream>
#include "Figure.h"

// �������� ����� ��� ���� ��������� �������������, ������������
class Triangle : public Figure
{
public:
	// ���������� ������� ������������
	virtual double getSquare();
	// ���������� �������� ������������
	virtual int getPerimetr();
	virtual void writeWho() { std::cout << "Triangle\n"; }

	void showSides();
};

#endif // !TRIANGLE
