/// Ошлаков Данил, ИВТ-22

/*

Используя команды write(x) лишь при x=0..9, написать рекурсивную программу печати десятичной записи целого положительного числа n.
Напишите тесты. В коде программы приводите задание, автора, пишите документирующие комментарии.









*/

#include <iostream>
#include <sstream>
#include <cassert>
#include <cstdlib>

using namespace std;

/// <summary>
/// Рекурсивная функция для вывода десятичной записи числа n
/// 
/// </summary>
/// <param name="n"> Число, которое будет выведено на экран</param>
void printNumber(int n) {
    if (n / 10 != 0) {
        printNumber(n / 10);
    }
    cout << n % 10;
}


//int main(int argc, char* argv[]) {
//    if (argc == 2) {
//        int n = atoi(argv[1]);
//
//        if (n < 10) {
//            cout << n << endl;
//        }
//        else {
//            printNumber(n);
//            cout << endl;
//        }
//    }
//    else {
//        cout << "Usage: " << argv[0] << " positive_integer" << endl;
//    }
//
//
//    return 0;
//}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 10) {
        cout << n;
    }
    else {
        printNumber(n);
    }

    return 0;
}