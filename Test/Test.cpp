//#include <iostream> //Алгоритм поступления товара на склад с расчётом, сколько полных коробок будет скомплектовано и какой останется остаток
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cout << "Enter num balls: \n";
//    cin >> n;
//    cout << "Total balls on the store " << n << "\n";
//    int box = 10;
//    int readytoshipment = n / box;
//    cout << readytoshipment << " boxes ready for shipment \n";
//    n = n - readytoshipment * box;
//    cout << "Balance in stock " << n << "\n";
//}

//#include <iostream> //Конвертер градусов по фаренгейту в градусы цельсия
//using namespace std;
//
//int main()
//{
//	cout << "Converting degrees Fahrenheit to Celsius! \n";
//	cout << "Enter degrees Fahrenheit: \n";
//	float fahrenheit = 0.f;
//	float celsius = 0.f;
//	cin >> fahrenheit;
//	celsius = (fahrenheit - 32) * 5 / 9;
//	cout << celsius << " degrees Celcius.\n";
//}

//#include <iostream> //Конвертер градусов по цельсия в градусы фаренгейта
//using namespace std;
//
//int main()
//{
//	cout << "Converting degrees Celsius to Fahrenheit! \n";
//	cout << "Enter degrees Celsius: \n";
//	float celsius = 0.f;
//	float fahrenheit = 0.f;
//	cin >> celsius;
//	fahrenheit = (celsius * (9.f / 5.f)) + 32;
//	cout << fahrenheit << " degrees Fahrenheit.\n";
//}

//#include <iostream> //Раскладка мячей по цветам
//#include <string>
//using namespace std;
//
//int main()
//{
//	int NumRedBalls = 0;
//	int NumBlueBalls = 0;
//	cout << "Enter ball colors (red, blue): \n";
//	string color;
//	cin >> color;
//	if (color == "red")
//	{
//		NumRedBalls += 1;
//		cout << "Num red balls : " << NumRedBalls << "\n";
//	}
//	else if (color == "blue")
//	{
//		NumBlueBalls += 1;
//		cout << "Num blue balls : " << NumBlueBalls << "\n";
//	}
//	else
//	{
//		cout << "Wrong color! Try again.\n";
//	}
//}

//#include <iostream> // калькулятор в польской нотации
//#include <string>
//using namespace std;
//
//int main()
//{
//	cout << "Welcome to the Polish Notation Calculator!\n";
//	cout << "Please enter the operation (+, -, *, /): \n";
//	string operation;
//	cin >> operation;
//	cout << "Please enter the first number: \n";
//	float firstNum = 0.f;
//	cin >> firstNum;
//	cout << "Please enter the second number: \n";
//	float secondNum = 0.f;
//	cin >> secondNum;
//	if (operation == "+")
//	{
//		cout << "Result: " << endl << firstNum + secondNum;
//	}
//	else if (operation == "-")
//	{
//		cout << "Result: " << endl << firstNum - secondNum;
//	}
//	else if (operation == "*")
//	{
//		cout << "Result: " << endl << firstNum * secondNum;
//	}
//	else if (operation == "/")
//	{
//		cout << "Result: " << endl << firstNum / secondNum;
//	}
//	else
//	{
//		cout << "Wrong operation, please try again!\n";
//	}
//}

//#include <iostream> // Игра в угадай число
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	cout << "Hello and welcome to my first game - 'Guess the Number!' \n";
//	cout << "Enter your name: \n";
//	string userName;
//	int numberOfAttempts = 0;
//	cin >> userName;
//	srand(time(0));
//	int randomNum = 1 + rand() % 10;
//	int userNum = 0;
//	cout << userName << ", i thought of a number from 1 to 10, try to guess it (enter the number): \n";
//	bool shouldContinue = true;
//	while (shouldContinue)
//	{
//		cin >> userNum;
//		if (userNum < randomNum)
//		{
//			cout << "Your number is less\n";
//			numberOfAttempts += 1;
//		}
//		else if (userNum > randomNum)
//		{
//			cout << "Your number is higher\n";
//			numberOfAttempts += 1;
//		}
//		else
//		{
//			numberOfAttempts += 1;
//			cout << "Congratulations!!!\nYou did it in " << numberOfAttempts << " attempts\n";
//			if (numberOfAttempts >= 8)
//				cout << "You could do it faster! :)\n";
//			shouldContinue = false;
//		}
//	}
//}

//#include <iostream> //Калькулятор с  циклом  do-while
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	string  answer;
//	do
//	{
//	cout << "Welcome to the Polish Notation Calculator!\n";
//	cout << "Please enter the operation (+, -, *, /): \n";
//	string operation;
//	cin >> operation;
//	cout << "Please enter the first number: \n";
//	float firstNum = 0.f;
//	cin >> firstNum;
//	cout << "Please enter the second number: \n";
//	float secondNum = 0.f;
//	cin >> secondNum;
//	if (operation == "+")
//	{
//		cout << "Result: " << firstNum + secondNum << endl;
//	}
//	else if (operation == "-")
//	{
//		cout << "Result: " << firstNum - secondNum << endl;
//	}
//	else if (operation == "*")
//	{
//		cout << "Result: " << firstNum * secondNum << endl;
//	}
//	else if (operation == "/")
//	{
//		cout << "Result: " << firstNum / secondNum << endl;
//	}
//	else
//	{
//		cout << "Wrong operation, please try again!\n";
//	}
//	cout << "Do  you want to continue?  (y/n): \n";
//	cin >> answer;
//
//	} while (answer == "y");
//}

//#include <iostream> //Калькулятор с  циклом  while, применение bool
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//	bool shouldContinue = true;
//	string  answer;
//	while(shouldContinue)
//	{
//		cout << "Welcome to the Polish Notation Calculator!\n";
//		cout << "Please enter the operation (+, -, *, /): \n";
//		string operation;
//		cin >> operation;
//		cout << "Please enter the first number: \n";
//		float firstNum = 0.f;
//		cin >> firstNum;
//		cout << "Please enter the second number: \n";
//		float secondNum = 0.f;
//		cin >> secondNum;
//		if (operation == "+")
//		{
//			cout << "Result: " << firstNum + secondNum << endl;
//		}
//		else if (operation == "-")
//		{
//			cout << "Result: " << firstNum - secondNum << endl;
//		}
//		else if (operation == "*")
//		{
//			cout << "Result: " << firstNum * secondNum << endl;
//		}
//		else if (operation == "/")
//		{
//			cout << "Result: " << firstNum / secondNum << endl;
//		}
//		else
//		{
//			cout << "Wrong operation, please try again!\n";
//		}
//		cout << "Do  you want to continue?  (y/n): \n";
//		cin >> answer;
//		shouldContinue = answer == "y";
//	}
//}
//
//#include <iostream>
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//const int NUM_BALLS = 20;
//
//int main()
//{
//	int balls[NUM_BALLS];
//
//	for (int& ball : balls)
//	{
//		ball = 0;
//	}
//	bool shouldContinue = true;
//	while (shouldContinue)
//	{
//		cout << "Enter num of commands (1, 2, 3..):  " << endl;
//		cout << "1. Add balls" << endl;
//		cout << "2. Remove balls" << endl;
//		cout << "3. Couut balls" << endl;
//		cout << "4. Total balls" << endl;
//		cout << "5. Needed balls" << endl;
//		cout << "9. Exit" << endl;
//		cout << ">: ";
//		string command;
//		cin >> command;
//
//		if (command == "1")
//		{
//
//		}
//		else if (command == "2")
//		{
//
//		}
//		else if (command == "3")
//		{
//
//		}
//		else if (command == "4")
//		{
//
//		}
//		else if (command == "5")
//		{
//
//		}
//		else if (command == "9")
//		{
//			cout << endl << "Bye!" << endl;
//			shouldContinue = false;
//		}
//		else
//		{
//			cout << endl << "Unknow command" << endl;
//		}
//	}
//}
//
//#include <iostream>
//#include <ctime>
//#include <string>
//
//int main() {
//    srand(time(0));
//    std::string name;
//    int secret_number = rand() % 100 + 1;
//    int guess;
//    int attempts = 0;
//
//    std::cout << "Введите ваше имя: ";
//    std::cin >> name;
//
//    std::cout << "Я загадал число от 1 до 100. Попробуйте его угадать.\n";
//
//    do {
//        std::cout << "Ваша попытка: ";
//        std::cin >> guess;
//        attempts++;
//
//        if (guess > secret_number) {
//            std::cout << "Загаданное число меньше.\n";
//        }
//        else if (guess < secret_number) {
//            std::cout << "Загаданное число больше.\n";
//        }
//
//    } while (guess != secret_number);
//
//    std::cout << "Поздравляю, " << name << "! Вы угадали число с " << attempts << " попытки.\n";
//
//    if (attempts > 8) {
//        std::cout << "Это можно сделать и быстрее.\n";
//    }
//
//    return 0;
//}

#include <iostream>
#include <string>

using namespace std;

const int NUM_BALLS = 20;

int main()
{
	int balls[NUM_BALLS];

	for (int& ball : balls)
	{
		ball = 0;
	}

	bool shouldContinue = true;
	while (shouldContinue)
	{
		string answear;
		cout << "Enter num of commands (1, 2, 3..):  \n";
		cout << "1. Add balls to the warehouse\n";
		cout << "2. View quantity by article\n";
		cout << "3. Remove the balls\n";
		cout << "4. Show total balance\n";
		cout << "5. Show article without reserve\n";
		cout << "9. Exit\n";
		cin >> answear;
		if (answear == "1")
		{
			cout << "Enter article: \n";
			int article = -1;
			cin >> article;
			if (article < 0 || article > NUM_BALLS - 1)
			{
				cout << "Incorrect article!\n";
			}
			else
			cout << "Enter the number of balls: \n";
			int numberOfBalls;
			cin >> numberOfBalls;
			balls[article] += numberOfBalls;
			cout << "Added " << numberOfBalls << " to the warehouse. " << "Total balls of article " << article << " = " << balls[article] << endl;
		}
		else if (answear == "2")
		{
			cout << "Enter article: \n";
			int article = -1;
			cin >> article;
			if (article < 0 || article > NUM_BALLS - 1)
			{
				cout << "Incorrect article!\n";
			}
			else
				cout << "Total balls of article " << article << " = " << balls[article] << endl;
		}
		else if (answear == "3")
		{
			cout << "Enter article: \n";
			int article = -1;
			cin >> article;
			if (article < 0 || article > NUM_BALLS - 1)
			{
				cout << "Incorrect article!\n";
			}
			else
				cout << "Enter the number of balls: \n";
			int numberOfBalls;
			cin >> numberOfBalls;
			balls[article] -= numberOfBalls;
			cout << "Deleted " << numberOfBalls << " from the warehouse. " << "Total balls of article " << article << " = " << balls[article] << endl;
		}
		else if (answear == "4")
		{
			int sumBallsOnStock = 0;
			for (int article = 0; article < NUM_BALLS; ++article)
			{
				if (balls[article] > 0)
				{
					cout << "Remainder of the article " << article << " = " << balls[article] << endl;
					sumBallsOnStock += balls[article];
				}
				else
					cout << "The article " << article << " is out of stock\n";
			}
			cout << "Total stock balance = " << sumBallsOnStock << endl;
		}
		else if (answear == "5")
		{
			for (int i = 0; i < NUM_BALLS; ++i)
			{
				if (balls[i] == 0)
				{
					cout << "There are no balls of article " << i << endl;
				}
			}
		}
		else if (answear == "9")
		{
			cout << "Good bye!\n";
			shouldContinue = false;
		}
		else
		{
			cout << endl << "Unknow command" << endl;
		}
	}
}