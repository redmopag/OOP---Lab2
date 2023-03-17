#pragma once
#ifndef FIGURE
#define FIGURE

#include <iostream>

class Figure
{
protected:
    int width; // Нижнее основание
    int height; // Высота
    int left; // Левая сторона
    int right; // Правая сторона
    int high; // Верзнее основание
public:
    Figure();
    Figure(int width, int height, int high, int left, int right);
    Figure(const Figure& f1);

    virtual double getSquare() = NULL;
    virtual int getPerimetr() = NULL;

    const int getWidth() const { return width; }
    const int getHeight() const { return height; }
    const int getLeft() const { return left; }
    const int getRight() const { return right; }
    const int getHigh() const { return high; }

    void setWidth(int num) { width = num; }
    void setHeight(int num) { height = num; }
    void setLeft(int num) { left = num; }
    void setRight(int num) { right = num; }
    void setHigh(int num) { high = num; }

    void showSides()
    {
        std::cout << "Width: " << width << "High: " << high
            << "Left side: " << left << "Right side: " << right << std::endl;
    }

    virtual void writeWho() = NULL;

    virtual ~Figure()
    {
        std::cout << "~Figure\n";
    }
};
#endif // !FIGURE