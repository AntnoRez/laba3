#include "line1.h"
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "point1.h"
using namespace std;
    line::line(point start, point end) : start(start), end(end) {}
    line::line(int x1, int y1, int x2, int y2) : start(point(x1, y1)), end(point(x2, y2)) {}
    void line::print()
    {
        cout << "Линия от ";
        start.print();
        cout << " до ";
        end.print();
        cout << endl << endl;
    }
    point line::getStart()
    {
        return start;
    }
    point line::getEnd()
    {
        return end;
    }
    void line::setStart(point start1)
    {
        start = start1;
    }

    void line::setEnd(point end1)
    {
        end = end1;
    }
    int line::length()
    {
        return (sqrt(pow(abs(end.getX() - start.getX()), 2) + pow(abs(end.getY() - start.getY()), 2)));
    }