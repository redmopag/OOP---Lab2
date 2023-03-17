#include <iostream>
#include "Triangle.h"

// ���������� ������� ������������, � ������������ ����
double Triangle::getSquare()
{
	return width * height / 2;
}

// �������� ������������
int Triangle::getPerimetr()
{
	return width + left + right;
}

void Triangle::showSides()
{
	std::cout << "Width: " << width << "Left side: " << left << "Right side: " << right
		<< std::endl;
}