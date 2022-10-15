// Lab04_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Війчук Діана
//Лабораторна робота 4.4
//Табуляція функції, заданої графіком
//Варіант 2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R, xp, xk, dx;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -8)
            y = -R;
        else
            if (-8 < x && x <= -R)
                y = (pow(R, 2) + R * x) / (8 - R);
            else
                if (-R < x && x <= R)
                    y = -sqrt(pow(R, 2) - pow(x, 2));
                else
                    if (R < x && x <= 5)
                        y = (2 * x - 2 * R) / (5 - R);
                    else
                        y = 3;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }

    cout << "---------------------------" << endl;
    return 0;

}

