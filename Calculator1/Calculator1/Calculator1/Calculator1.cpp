#include <iostream>
#include <cmath>
using namespace std;

void MathHard(double firstnum, char simbol) {
    double result;
    switch (simbol) {
    case 'l':
        result = std::log(firstnum);
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    case 'L':
        result = std::log10(firstnum); 
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    case 's':
        result = std::sin(firstnum);
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    case 'c':
        result = std::cos(firstnum);
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    default:
        cout << "Произошла ошибка: неверный символ." << "\n\n";
        break;
    }
}

void MathSoft(double firstnum, double secondnum, char simbol) {
    double result;
    switch (simbol) {
    case '+':
        result = firstnum + secondnum;
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    case '-':
        result = firstnum - secondnum;
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    case '*':
        result = firstnum * secondnum;
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    case '/':
        result = firstnum / secondnum;
        cout << "Ваш результат равен " << result << "\n\n";
        break;
    default:
        cout << "Произошла ошибка: неверный символ.";
        break;
    }
}

void MathChoise() {
    double firstnum;
    double secondnum;
    char simbol;

    while (true) {
        cout << "Напишите первое число: \n";
        cin >> firstnum;

        cout << "Напишите символ: | + | - | * | / | l | L | s | c |\n";
        cin >> simbol;

        if (simbol == 'l' || simbol == 'L' || simbol == 's' || simbol == 'c') {
            MathHard(firstnum, simbol);
        }
        else {
            cout << "Напишите второе число: \n";
            cin >> secondnum;
            MathSoft(firstnum, secondnum, simbol);
        }

    }
    }

int main() {

    setlocale(LC_ALL, "Russian");

    MathChoise();

}
