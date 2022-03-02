// independent_work.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

/*
Составьте программу, выводящую на экран квадраты чисел от 10 до 20.

    for (int i = 10; i < 20; i++)
        cout << i * i << "  ";
*/

/*
Составьте программу, которая вычисляет сумму
чисел от 1 до n.значение n вводится с клавиатуры.

    int a, summa = 0;
    cin >> a;
    for (int i = 0; i <= a; i++) {
        summa += i;
    }
    cout << summa;
*/  

/*
Составьте программу, составьте программу, которая вычисляет
произведение чисел от 1 до n.n вводится с клавиатуры.


    int a, summa = 1;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        summa *= i;
    }
    cout << summa;
*/

/*
    С клавиатуры вводятся n чисел. 
    Составьте программу, которая определяет кол-во отрицательных, 
    кол-во положительных и кол-во нулей среди введенных чисел. 
    Значение n вводится с клавиатуры.

    int a;
    int negative_number = 0;
    int positive_number = 0;
    int zero_number = 0;
    string Exit = "exit";
    do {
        cin >> a;
        if (a < 0) 
            negative_number++;
        else if (a > 0) 
            positive_number++;
        else if (a == 0) 
            zero_number++;
        cout << "Кол-во отриц-х чисел: " << negative_number << endl
            << "Кол - во пол - х чисел: " << positive_number << endl
            << "Кол - во  нулей: " << zero_number << endl;

    } while (a);
*/



}
