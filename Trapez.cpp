#include "Trapez.h"
#include <iostream>

Trapez::Trapez() : Figure()
{
	std::cout << "Trapez()\n";
}

Trapez::Trapez(int width, int height, int high, int left, int right)
	: Figure(width, height, high, left, right)
{
	std::cout << "Trapez(int)\n";
}

Trapez::Trapez(const Trapez& tr) : Figure(tr)
{
	std::cout << "Trapez(const Trapez&)\n";
}

Trapez::~Trapez()
{
	std::cout << "~Trapez\n";
}

Trapez& Trapez::operator=(const Trapez& tr)
{
	if (this == &tr)
		return *this;

	width = tr.width;
	height = tr.height;
	high = tr.high;
	left = tr.left;
	right = tr.right;

	return *this;
}

double Trapez::getSquare()
{
	return (high + width) / 2 * height;
}

int Trapez::getPerimetr()
{
	return high + width + left + right;
}