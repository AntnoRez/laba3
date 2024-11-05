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
    student(string name1, vector<int> marks1) : name(name1), marks(marks1) {}
    void print_marks()
    {
        for (int i = 0; i < marks.size(); i++)
        {
            cout << marks[i] << " ";
        }
    }
    void print()
    {
        cout << "Name: " << name << "\nMarks: ";
        print_marks();
        cout << endl << endl;
    }
    void setMarks(int i, int mark) //изменять оценки
    {
        if (i < marks.size())
        {
            marks[i] = mark;
        }
    }
    vector<int> getMarks()
    {
        return marks;
    }
};

class point 
{
private:
    int x;
    int y;
public:
    point(int x1, int y1) : x(x1), y(y1) {}
    void print()
    {
        cout << "(" << x << ";" << y << ")";
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

class line
{
private:
    point start;
    point end;
public:
    line(point start, point end) : start(start), end(end) {}
    line(int x1, int y1, int x2, int y2) : start(point(x1, y1)), end(point(x2, y2)) {}
    void print()
    {
        cout << "Линия от "; 
        start.print();
        cout << " до "; 
        end.print();
        cout << endl << endl;
    }
    point getStart()
    {
        return start;
    }
    point getEnd()
    {
        return end;
    }
    void setStart(point start1) 
    {
        start = start1;
    }

    void setEnd(point end1) 
    {
        end = end1;
    }
    int length()
    {
        return (sqrt(pow(abs(end.getX() - start.getX()), 2) + pow(abs(end.getY() - start.getY()), 2)));
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Номера заданий:\n1 2 3 4 5 \nВыберите номер задания:";
    cin >> a;
    switch (a)
    {
    case 1:
    {
        int x1, x2, x3, y1, y2, y3;
        cout << "Введите координаты первой точки (x, y):" << endl;
        cin >> x1 >> x2;
        cout << "Введите координаты второй точки (x, y):" << endl;
        cin >> x2 >> y2;
        cout << "Введите координаты третьей точки (x, y):" << endl;
        cin >> x3 >> y3;

        point a(x1, x2);
        point b(x2, y2);
        point c(x3, y3);
        cout << "a"; a.print();
        cout << "\nb"; b.print();
        cout << "\nc"; c.print();
        break;
    }
    case 2:
    {
        line l1(point(1, 3), point(23, 8));
        l1.print();
        line l2(point(5, 10), point(25, 10));
        l2.print();
        line l3(l1.getStart(), l2.getEnd());
        l3.print();
        cout << "----------------" << endl << endl;
        l1.setStart(point(5, 5));
        l2.setEnd(point(8, 9));
        l3 = line (l1.getStart(), l2.getEnd());
        l1.print();
        l2.print();
        l3.print();
        cout << "----------------" << endl << endl;
        l1.setEnd(point(1, 1));
        l3 = line(l1.getStart(), l2.getEnd());
        l1.print();
        l2.print();
        l3.print();
        cout << "----------------" << endl << endl;
        break;
    }
    case 3:
    {
        student Petya("Petya", { 3, 4, 5 });
        student Vasa("Vasa", Petya.getMarks());
        Vasa.setMarks(0, 5);
        student Andrey("Andrey", Vasa.getMarks());
        Vasa.setMarks(2, 2);

        Petya.print();
        Vasa.print();
        Andrey.print();
        break;
    }
    case 4:
    {
        point a(3, 5);
        point b(25, 6);
        point c(7, 8);
        cout << "a"; a.print(); cout << endl;
        cout << "b"; b.print(); cout << endl;
        cout << "c"; c.print(); cout << endl;
        line l1(point(1, 3), point(23, 8));
        l1.print();
        line l2(5, 10, 25, 10);
        l2.print();
        line l3(l1.getStart(), l2.getEnd());
        l3.print();
        break;
    }
    case 5:
    {
        line l(1, 1, 10, 5);
        l.print();
        cout << "Длина линии: " << l.length() << endl;
        break;
    }
    }
}
