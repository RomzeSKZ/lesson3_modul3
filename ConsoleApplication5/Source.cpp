#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <ctime>
#include <windows.h>
using namespace std;

char s;
void main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0;
Start:
	cout << "Номер задания: ";
	short unsigned int a = 0;
	cin >> a;
	if (a == 1)
	{
	Task1:
		i++;
		system("cls");
		cout << "Задание 1:" << endl;
		cout << "Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания." << endl;
		cout << "Решение:" << endl;
		int a;
		int b;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите второе число: ";
		cin >> b;
		if (a == b)
			cout << "Числа равны." << endl;
		else if (a > b)
			cout << b << " и " << a << " не равны." << endl;
		else if (a < b)
			cout << a << " и " << b << " не равны." << endl;
	reTry1:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task1;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry1;
		}
	}
	else if (a == 2)
	{
	Task2:
		i++;
		system("cls");
		cout << "Задание 2:" << endl;
		cout << "Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену. Студент получает допуск, если его средний балл 4 балла и выше." << endl;
		cout << "Решение:" << endl;
		int a;
		int b;
		int c;
		int d;
		int e;
		cout << "Введите 5 оценок студента (от 2 до 5) : " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		double s = (a + b + c + d + e) / 5.0;
		if (s >= 4)
			cout << "Средний балл " << s << ". " << "Студент допущен." << endl;
		else
			cout << "Средний балл " << s << ". " << "Студент не допущен." << endl;
	reTry2:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task2;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry2;
		}
	}
	else if (a == 3)
	{
	Task3:
		i++;
		system("cls");
		cout << "Задание 3:" << endl;
		cout << "Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену. Студент получает допуск, если его средний балл 4 балла и выше." << endl;
		cout << "Решение:" << endl;
		int a;
		int b;
		int c;
		int d;
		int e;
		cout << "Введите 5 оценок студента (от 2 до 5) : " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		double s = (a + b + c + d + e) / 5.0;
		if (s >= 4)
			cout << "Средний балл " << s << ". " << "Студент допущен." << endl;
		else
			cout << "Средний балл " << s << ". " << "Студент не допущен." << endl;
	reTry3:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task3;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry3;
		}
	}
	else if (a == 4)
	{
	Task4:
		i++;
		system("cls");
		cout << "Задание 4:" << endl;
		cout << "Написать программу-калькулятор. Пользователь вводит два числа и выбирает арифметическое действие. Вывести на экран результат." << endl;
		cout << "Решение:" << endl;
		double a;
		double b;
		int x;
		cout << "Введите два числа: " << endl;
		cin >> a;
		cin >> b;
		cout << "Какое действие произвести?" << endl;
		cout << "+ (1)" << endl;
		cout << "- (2)" << endl;
		cout << "* (3)" << endl;
		cout << "/ (4)" << endl;
		cin >> x;
		if (x == 1)
			cout << "Ответ: " << a + b << endl;
		else if (x == 2)
			cout << "Ответ: " << a - b << endl;
		else if (x == 3)
			cout << "Ответ: " << a * b << endl;
		else if (x == 4)
			cout << "Ответ: " << a / b << endl;
		else
			cout << "Выберите допустимое действие." << endl;
	reTry4:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task4;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry4;
		}
	}
	else if (a == 5)
	{
	Task5:
		i++;
		system("cls");
		cout << "Задание 5:" << endl;
		cout << "Написать программу, которая по выбору пользователя меняет цвет консольного приложения. Пользователь может выбрать цвет шрифта и цвет фона." << endl;
		cout << "Решение:" << endl;
		char text;
		char fon;
		char color[10] = "color  ";
		cout << "0 = Черный\t8 = Серый\n";
		cout << "1 = Синий\t9 = Светло - синий\n";
		cout << "2 = Зеленый\tA = Светло - зеленый\n";
		cout << "3 = Голубой\tB = Светло - голубой\n";
		cout << "4 = Красный\tC = Светло - красный\n";
		cout << "5 = Лиловый\tD = Светло - лиловый\n";
		cout << "6 = Желтый\tE = Светло - желтый\n";
		cout << "7 = Белый\tF = Ярко - белый\n\n";
		cout << "Введите цвет фона: ";
		cin >> color[6];
		cout << "Введите цвет текста: ";
		cin >> color[7];
		if ((color[6]<'a' || color[6]>'f') && (color[6] < '0' || color[6] > '9'))
		{
			cout << "Неверно введен цвет фона!\n";
		}
		else if ((color[7]<'a' || color[7]>'f') && (color[7] < '0' || color[7] > '9'))
		{
			cout << "Неверно введен цвет шрифта!\n";
		}
		else if (color[6] == color[7])
		{
			cout << "Цвет фона и шрифта должны отличаться!\n";
		}
		else
			system(color);
	reTry5:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task5;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry5;
		}
	}
	else if (a == 6)
	{
	Task6:
		i++;
		system("cls");
		cout << "Задание 6:" << endl;
		cout << "Написать программу, которая по выбору пользователя возводит введенное им число в степень от нулевой до седьмой включительно." << endl;
		cout << "Решение:" << endl;
		int n;
		int x;
		cout << "Введите число: ";
		cin >> n;
		for (int i = 0; i <= 7; i++)
		{
			x = pow(n, i);
			cout << n << " в степени " << i << " равно " << x << endl;
		}
	reTry6:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task6;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry6;
		}
	}
	else if (a == 7)
	{
	Task7:
		i++;
		system("cls");
		cout << "Задание 7:" << endl;
		cout << "В час пик на остановку одновременно подъехали три маршрутных такси, следующие по одному маршруту, в которые тут же набились пассажиры. Водители обнаружили, что количество людей в разных маршрутках разное, и решили пересадить часть пассажиров так, чтобы в каждой маршрутке было поровну пассажиров. Требуется по количествам людей в трех маршрутках определить, какое наименьшее количество пассажиров придаться при этом пересадить (если это вообще возможно)." << endl;
		cout << "Решение:" << endl;
		int a;
		int b;
		int c;
		cout << "Количество людей в 1 автобусе: ";
		cin >> a;
		cout << "Количество людей в 2 автобусе: ";
		cin >> b;
		cout << "Количество людей в 3 автобусе: ";
		cin >> c;
		int z = (a + b + c) / 3;
		if ((a + b + c) % 3 == 0)
		{
			if ((a - z) > 0)
				cout << "Из 1 автобуса пересадить " << a - z << " чел." << endl;
			else
				cout << "В 1 автобус пересадить " << abs(a - z) << " чел." << endl;
			if ((b - z) > 0)
				cout << "Из 2 автобуса пересадить " << b - z << " чел." << endl;
			else
				cout << "В 2 автобус пересадить " << abs(b - z) << " чел." << endl;
			if ((c - z) > 0)
				cout << "Из 3 автобуса пересадить " << c - z << " чел." << endl;
			else
				cout << "В 3 автобус пересадить " << abs(c - z) << " чел." << endl;
		}
		else
			cout << "Невозможно поделить поровну." << endl;
	reTry7:
		cout << "Повторить задание? (y/n) ";
		cin >> s;
		if (s == 'y')
		{
			goto Task7;
		}
		else if (s == 'n')
		{
			goto tryExit;
		}
		else
		{
			cout << "Введите y или n" << endl;
			goto reTry7;
		}
	}
	else
	{
		cout << "Введите номер задания от 1 до 7." << endl;
		goto Start;
	}
tryExit:
	cout << "Вы хотите продолжить? (y/n) ";
	cin >> s;
	if (s == 'y')
	{
		goto Start;
	}
	else if (s == 'n')
	{
		cout << "Вы выполнили задание " << i << " раз(-а)." << endl;
	}
	else
	{
		cout << "Введите y или n" << endl;
		goto tryExit;
	}
}
