#include "SomeFigures.h"
#include <iostream>

SomeFigures::SomeFigures()
{
	std::cout << "Сработал конструктор по умолчанию SomeFigures\n";
	tr = new Trapez();
}

SomeFigures::SomeFigures(int recWidth, int recHeight, int trWidth,
	int trHigh, int trHeigth, int trLeftR, int trRightR)
{
	std::cout << "Сработал конструктор с параметрами SomeFigures\n";
	rec.setWidth(recWidth);
	rec.setHeight(recHeight);

	tr = new Trapez(trWidth, trHeigth, trHigh, trLeftR, trRightR);
}

SomeFigures::SomeFigures(const SomeFigures& sf)
{
	std::cout << "Сработал конструктор копирования SomeFigures\n";
	rec = sf.rec;
	tr = new Trapez(*sf.tr);
}

SomeFigures::~SomeFigures()
{
	std::cout << "Сработал деструктор SomeFigures\n";
	delete tr;
	tr = nullptr;
}