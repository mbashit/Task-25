// Task 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int  x, y, judges = 8, a, b, c, d, e, f, g, h, i, j, k, l,m,n,o,p,minc,maxc,mina,maxa;
    string surname, firstname;
    int suma, sumc;
    double avga, avgc,Final_grade;

    cout << "enter the skater's number:" << x << y << " ";
    cin >> x >> y;
    cout << "surname:" << surname << "firstname:" << firstname << endl;
    cin >> surname >> firstname;

    cout << "enter 8 marks for complexity of program:" << endl;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    cout << "highest and lowest number from complexity" << endl;
    cin >> maxc >> minc;
    sumc = a + b + c + d + e + f + g + h;
    avgc = sumc / 8.0;

    cout << "enter 8 marks for artistry of performances:" << endl;
    cin >> i >> j >> k >> l >> m >> n >> o >> p;
    cout << "highest and lowest from artistry:" << endl;
    cin >> mina >> maxa;
    suma = i + j + k + l + m + n + o + p;
    avga = suma / 8.0;

    Final_grade = (avga + avgc)/2.0;

    if (maxa || mina || maxc || minc > 1) {
        cout << "only one of them is removed." << endl;
    }
    if (avga > avgc) {
        cout << "the winner is "<< "surname " << surname << "firstname" << firstname << "average for complexity "<<avgc<<"average for artistry"<<avga<< endl;
    }
    else {
        cout << "the winner is " << "surname " << surname << "firstname" << firstname << "average for complexity " << avgc << "average for artistry" << avga << endl;
    }
    return 0;
}