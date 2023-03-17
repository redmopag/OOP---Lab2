#pragma once
#ifndef RECTANGLE
#define RECTANGLE
#include <string>
#include <iostream>
#include "Figure.h"

class Rectan : public Figure
{
public:
	Rectan();
	Rectan(int width, int height);
	Rectan(const Rectan& rec);

	Rectan& operator=(const Rectan& rec);

	void setHeight(int num) { height = left = right = num; }
	void setWidth(int num) { width = high = num; }

	void setLeft(int num) = delete;
	void setRight(int num) = delete;
	void setHigh(int num) = delete;

	virtual double getSquare();
	virtual int getPerimetr();
	virtual void writeWho() { std::cout << "Rectan\n"; }

	virtual ~Rectan()
	{
		std::cout << "~Rectan\n";
	}
};

#endif // !RECTANGLE