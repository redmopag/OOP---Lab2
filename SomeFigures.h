#pragma once
#include "Rectan.h"
#include "Trapez.h"
#include <iostream>

class SomeFigures
{
private:
	Rectan rec;
	Trapez* tr;
public:
	SomeFigures();
	SomeFigures(int recWidth, int recHeight, int trWidth,
		int HighWidth, int trHeigth, int trLeftR, int trRightR);
	SomeFigures(const SomeFigures& sf);

	int getRecWidth() { return rec.getWidth(); }
	int getRecHeight() { return rec.getHeight(); }
	int getTrWidth() { return tr->getWidth(); }
	int getTrHighWidth() { return tr->getHigh(); }
	int getTrHeight() { return tr->getHeight(); }
	int getTrLeftRebro() { return tr->getLeft(); }
	int getTrRightRebro() { return tr->getRight(); }

	virtual ~SomeFigures();
};