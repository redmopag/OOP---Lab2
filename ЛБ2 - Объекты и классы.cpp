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

    {
        Rectan rec(10, 5);
        rec.showSides();
    }

    {
        Trapez tr1(5, 10, 6, 7, 9);
        std::cout << "\n";
        Trapez tr2(tr1);
        std::cout << "Height - " << tr2.getHeight() << "Width - " << tr2.getWidth() << std::endl;
    }

    std::cout << "\n";

    {
        Rectan* rec = new Rectan(20, 10);
        rec->showSides();
        delete rec;
    }

    std::cout << std::endl;

    Figure* sq;
    sq = new Rectan(12, 15);
    sq->writeWho();
    delete sq;

    std::cout << "\n";

    sq = new Trapez(10, 15, 5, 7, 8);
    sq->writeWho();
    delete sq;
    sq = nullptr;

    std::cout << "\n";
    {
        SomeFigures sf;
        std::cout << "Rec: Width - " << sf.getRecWidth() << " Height - " << sf.getRecHeight()
            << "\nTrapez: Width - " << sf.getTrWidth() << " HighWidth - " << sf.getTrHighWidth()
            << " Height - " << sf.getTrHeight() << " LeftRebro - " << sf.getTrLeftRebro()
            << " Right - " << sf.getTrRightRebro() << std::endl;
    }

    return 0;
}