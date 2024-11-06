#include "point1.h"
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;
point::point(int x1, int y1) : x(x1), y(y1) {}
void point::print()
{
    cout << "(" << x << ";" << y << ")";
}
int point::getX()
{
    return x;
}
int point::getY()
{
    return y;
}