#include "Rectan.h"
#include "Figure.h"

// Конструктор по умолчанию
Rectan::Rectan() : Figure()
{
	std::cout << "Rectan()\n";
}

Rectan::Rectan(int width, int height)
	: Figure(width, height, width, height, height)
{
	std::cout << "Rectan(int)\n";
}

Rectan::Rectan(const Rectan& rec)
{
	std::cout << "Rectan(const Rectan&)\n";
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