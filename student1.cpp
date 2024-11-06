#include "student1.h"
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

student::student(string name1, vector<int> marks1) : name(name1), marks(marks1) {}

void student::print_marks()
{
    for (int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }
}
void student::print()
{
    cout << "Name: " << name << "\nMarks: ";
    print_marks();
    cout << endl << endl;
}
void student::setMarks(int i, int mark) //изменять оценки
{
    if (i < marks.size())
    {
        marks[i] = mark;
    }
}
vector<int> student::getMarks()
{
    return marks;
}