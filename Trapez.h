#pragma once
#ifndef TRAPEZ
#define TRAPEZ
#include "Figure.h"
class Trapez : public Figure
{
public:
	Trapez();
	Trapez(int width, int height, int high, int left, int rigth);
	Trapez(const Trapez& tr);

	Trapez& operator=(const Trapez& tr);

	virtual double getSquare();
	virtual int getPerimetr();
	virtual void writeWho() { std::cout << "Trapez\n"; }

	virtual ~Trapez();
};
#endif // !TRAPEZ
