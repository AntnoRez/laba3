#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;
class student
{
private:
    string name;
    vector<int> marks;
public:
    student(string name1, vector<int> marks1);

    void print_marks();
   
    void print();
    
    void setMarks(int i, int mark); 
    
    vector<int> getMarks();

};

