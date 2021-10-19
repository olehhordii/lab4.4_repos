 //Lab4.4.cpp
 //Гордій Олег
 //Лабораторна робота № 4.4
 //Табуляція функції, заданої формулою: функція з параметрами
 //Варіант 3

#include <iostream>
using namespace std;
#include <cmath>
#include <math.h>
#include <iomanip>
#define PI 3.14159265

int main()
{
    double R;
    double x;
    double xp;
    double xk;
    double dx;
    double y; //формула

    
    cout << " R = " << endl; cin >> R;
    cout << " xp = " << endl; cin >> xp;
    cout << " xk = " << endl; cin >> xk;
    cout << " dx = " << endl; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -7 - R)
            y = R;
        else
            if (-7 - R < x && x <= -7 + R)
                y = R - sqrt(R * R - (x + 7) * (x + 7));
            else
                if (-7 + R < x && x <= -4)
                    y = R;
                else
                    if (-4 < x && x <= 0)
                        y = -1 / 4 * R * x;
                    else
                        if (0 < x && x <= PI)
                            y = sin(x);
                        else
                            y = x - PI;


        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;


        x += dx;
    }
    cout << "---------------------------" << endl;
    cin.get();
    return 0;
}
