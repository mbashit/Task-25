// Task 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*25. Массив из 15 строк содержит информацию о результатах сорев-
нований по фигурному катанию. Соревнования оценивают 8 судей, каждый

из которых сначала выставляет оценку за сложность программы фигуриста,
затем оценку за артистичность исполнения. Пример одной из строк.
19) Прохоров Дмитрий; сложность программы : 6 5,5 5,5 6 4,3 6 5

6; артистизм : 6 6 5,7 5,1 5,8 6 6 5,3

Здесь первые две цифры (19) – номер фигуриста, далее через пробел

фамилия, имя, затем 8 оценок за сложность программы и 8 оценок за арти-
стизм исполнения. При выведении двух итоговых оценок из каждой сово-
купности (за сложность и артистизм) удаляются самая высокая и самая низ-
кая оценка. Для оставшихся оценок вычисляется среднее арифметическое в

каждой совокупности. Если окажется, что самую высокую или самую низ-
кую оценку выставили несколько судей, то удаляется только одна из них.

Сформировать символьную строку, в которую включить фамилию,

имя победителя соревнований, его средние баллы по сложности и арти-
стизму. Если победителей будет несколько, включить в формируемую стро-
ку информацию о каждом из них.*/

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