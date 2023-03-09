#include "Rectan.h"
#include "Figure.h"

// Конструктор по умолчанию
Rectan::Rectan() : Figure()
{
	std::cout << "Сработал конструктор по умолчанию Rectan\n";
}

Rectan::Rectan(int width, int height)
	: Figure(width, height, width, height, height)
{
	std::cout << "Сработал конструктор с параметрами Rectan\n";
}

Rectan::Rectan(const Rectan& rec)
{
	std::cout << "Сработал конструктор копирования Rectan\n";
	high = width = rec.width;
	left = right = height = rec.height;
}

Rectan& Rectan::operator=(const Rectan& rec)
{
	if (this == &rec)
		return *this;

	high = width = rec.width;
	left = right = height = rec.height;

	return *this;
}

double Rectan::getSquare()
{
	return width * height;
}

int Rectan::getPerimetr()
{
	return 2 * (width * height);
}