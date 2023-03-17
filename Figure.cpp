#include "Figure.h"

// ƒва обычных конструктора
Figure::Figure() : width(1), height(1), high(1), left(1), right(1)
{
    std::cout << "Figure()\n";
};

Figure::Figure(int width, int height, int high, int left, int right)
    : width(width), height(height), high(high), left(left), right(right)
{
    std::cout << "Figure(int)\n";
};

//  онструктор копировани€: копирует ширину и высоту фигуры
Figure::Figure(const Figure& f1)
    : width(f1.width), height(f1.height), high(f1.high), left(f1.left), right(f1.right)
{
    std::cout << "Figure(const Figure&)\n";
};