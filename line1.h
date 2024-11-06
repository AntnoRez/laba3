#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "point1.h"
using namespace std;
class line
{
private:
    point start;
    point end;
public:
    line(point start, point end);

    line(int x1, int y1, int x2, int y2);

    void print();

    point getStart();

    point getEnd();

    void setStart(point start1);

    void setEnd(point end1);

    int length();
   
};

