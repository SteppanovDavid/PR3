#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Сложение 1" << endl;
    cout << "Вычитание 2" << endl;
    cout << "Умножение 3" << endl;
    cout << "Деление 4" << endl;
    cout << "остаток от деления  5" << endl;
    int a;
    int b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 1)
    {
        cout << (b + c) << endl;
    }
    if (a == 3)
    {
        cout << (b * c) << endl;
    }
    if (a == 4)
    {
        cout << (b / c) << endl;
        cout <<"Остаток от деления =" << (b % c) << endl;
    }
    if (a == 2 and b >= c)
    {
        cout << (b - c) << endl;
    }
    
    if (a == 2 and b < c)
    {
        cout << "-"<<(c - b) << endl;
    }
 }

