#pragma once
#ifndef TRIANGLE
#define TRIANGLE

#include <iostream>
#include "Figure.h"

// Дочерний класс без явно указанных конструкторов, деструкторов
class Triangle : public Figure
{
public:
	// Возвращает площадь трекгольника
	virtual double getSquare();
	// Возвращает периметр треугольника
	virtual int getPerimetr();
	virtual void writeWho() { std::cout << "Triangle\n"; }

	void showSides();
};

#endif // !TRIANGLE
