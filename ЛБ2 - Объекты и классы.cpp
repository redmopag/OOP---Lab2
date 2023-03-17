#include <iostream>
#include <Windows.h>

#include "Figure.h"
#include "Triangle.h"
#include "Rectan.h"
#include "Trapez.h"
#include "SomeFigures.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Создание объекта дочернего класса на стеке:\n";
    {
        Rectan rec(10, 5);
        rec.showSides();
    }
    std::cout << std::endl;

    std::cout << "Использование конструктора копирования для создания объекта дочернего класса на стеке:\n";
    {
        std::cout << "Создание объекта дочернего класса на куче:\n";
        Trapez tr1(5, 10, 6, 7, 9);
        std::cout << "Использование конструктора копирования:\n";
        Trapez tr2(tr1);
        std::cout << "Height - " << tr2.getHeight() << "Width - " << tr2.getWidth() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Создание объекта дочернего класса на куче:\n";
    {
        Rectan* rec = new Rectan(20, 10);
        rec->showSides();
        delete rec;
    }
    std::cout << std::endl;

    std::cout << "Присвоение объекта дочернего класса указателю на класс предка:\n";
    Figure* sq;
    sq = new Rectan(12, 15);
    sq->writeWho();
    delete sq;
    sq = nullptr;
    std::cout << std::endl;

    std::cout << "Композиция:\n";
    {
        SomeFigures sf;
        std::cout << "Rec: Width - " << sf.getRecWidth() << " Height - " << sf.getRecHeight()
            << "\nTrapez: Width - " << sf.getTrWidth() << " HighWidth - " << sf.getTrHighWidth()
            << " Height - " << sf.getTrHeight() << " LeftRebro - " << sf.getTrLeftRebro()
            << " Right - " << sf.getTrRightRebro() << std::endl;
    }

    return 0;
}