#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;
class point
{
private:
    int x;
    int y;
public:
    point(int x1, int y1);

    void print();

    int getX();

    int getY();
};

