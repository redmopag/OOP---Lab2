#include <iostream>
#include "Triangle.h"

// Возварщает площадь треугольника, в вещественном типе
double Triangle::getSquare()
{
	return width * height / 2;
}

// Периметр треугольника
int Triangle::getPerimetr()
{
	return width + left + right;
}

void Triangle::showSides()
{
	std::cout << "Width: " << width << "Left side: " << left << "Right side: " << right
		<< std::endl;
}