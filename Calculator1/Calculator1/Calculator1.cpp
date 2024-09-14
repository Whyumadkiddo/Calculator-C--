

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double firstnum;
	double secondnum;
	double result;
	char simbol;
	{
		while (true) {
			std::cout << "Напишите первое число: \n";
			std::cin >> firstnum;

			std::cout << "Напишите символ: + - * / \n";
			std::cin >> simbol;

			std::cout << "Напишите второе число: \n";
			std::cin >> secondnum;

			switch (simbol)
			{
			case '+':
				result = firstnum + secondnum;
				std::cout << "Ваш результат равен " << result << "\n\n";
				break;
			case '-':
				result = firstnum - secondnum;
				std::cout << "Ваш результат равен " << result << "\n\n";
				break;
			case '*':
				result = firstnum * secondnum;
				std::cout << "Ваш результат равен " << result << "\n\n";
				break;
			case '/':
				result = firstnum / secondnum;
				std::cout << "Ваш результат равен " << result << "\n\n";
				break;

			default:
				std::cout << "Произошла ошибка \n";
				break;
			}
		}
	}
}

