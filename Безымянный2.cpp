#include <iostream>
#include <math.h>
#include <windows.h>
#include <iomanip>

using namespace std;

bool done = 0;      //контролирует завершение работы программы

bool ShowMenu();    //показ меню

void Error();       //сообщение об ошибке
void Sum();         //сложение
void Sub();         //вычитание
void Mul();         //умножение
void Div();         //деление
void Sqrt();        //квадратный корень
void Radical();     //корень любой степени
void Power();       //возведение в степень

int main()
{
    setlocale (LC_ALL, "Russian");    //подключаем великий и могучий русский язык в консоль

    while (!done)                     //главный цикл программы, работает, пока пользователю 
                                      //не надоест
    {
        done = ShowMenu();
    }

    return 0;
}

bool ShowMenu()
{
    short menu;
    
	//символ "\n" - то же самое, что и endl, даже лучше
    cout << "1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление5. Квадратный корень\n";
	cout << "6. Корень любой степени\n7. Возведение в степень\n8. Выход\n";
    cin >> menu;
    if (menu == 1)
        Sum();
    else if (menu == 2)
        Sub;
    else if (menu == 3)
        Mul();
    else if (menu == 4)
        Div();
    else if (menu == 5)
        Sqrt();
    else if (menu == 6)
        Radical();
    else if (menu == 7)
        Power();
    else if (menu == 8)
        return true;
    else
        Error();

    return false;
}

void Error()
{
    cout << "Ой, кажется, вы что-то не так ввели. Попробуйте еще раз!\n";
}

void Sum()
{
    int number;
    cout << "Введите количество слагаемых: ";
    cin >> number;
    double * s = new double [number];
    double answer = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Введите " << i + 1 << " слагаемое: ";
        cin >> s[i];
        answer += s[i];
    }
    for (int i = 0; i < number - 1; i++)
        cout << setprecision(8) << s[i] << " + ";
    cout << setprecision(8) << s[number - 1] << " = " << setprecision(8) << answer << endl;
    delete[]s;
}

void Sub()
{
    double a, b;
    cout << "Введите уменьшаемое: ";
    cin >> a;
    cout << "Введите вычитаемое: ";
    cin >> b;
    cout << a << " - " << b << " = " << setprecision(8) << a - b << endl;
} 

void Mul()
{
    int number;
    cout << "Введите количество множителей: ";
    cin >> number;
    double * s = new double [number];
    double answer = 1;
    for (int i = 0; i < number; i++)
    {
        cout << "Введите " << i + 1 << " множитель: ";
        cin >> s[i];
        answer *= s[i];
    }
    for (int i = 0; i < number - 1; i++)
        cout << setprecision(8) << s[i] << " * ";
    cout << setprecision(8) << s[number - 1] << " = " << setprecision(8) << answer << endl;
    delete[]s;
}

void Div()
{
    double a, b;
    cout << "Введите делимое: ";
    cin >> a;
    cout << "Введите делитель: ";
    cin >> b;
    cout << a << " / " << b << " = " << setprecision(8) << a / b << endl;
}

void Sqrt()
{
    double a;
    cout << "Введите число, из которого надо извлечь квадратный корень: ";
    cin >> a;
    cout << "sqrt(" << a << ") = " << sqrt (a) << endl;
}

void Radical()
{
    double a, b;
    cout << "Введите число, из которого надо извлечь корень: ";
    cin >> a;
    cout << "Корень какой степени надо извлечь? ";
    cin >> b;
    cout << "Корень " << b << " степени из числа " << a << " равен " << pow (a, 1 / b) << endl;
}

void Power()
{
    double a, b;
    cout << "Введите основание степпени: ";
    cin >> a;
    cout << "Введите показатель степпени: ";
    cin >> b;
    cout << a << "^" << b << " = " << pow (a, b) << endl;
}
