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
	cout << "����� �������: ";
	short unsigned int a = 0;
	cin >> a;
	if (a == 1)
	{
	Task1:
		i++;
		system("cls");
		cout << "������� 1:" << endl;
		cout << "������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������." << endl;
		cout << "�������:" << endl;
		int a;
		int b;
		cout << "������� ������ �����: ";
		cin >> a;
		cout << "������� ������ �����: ";
		cin >> b;
		if (a == b)
			cout << "����� �����." << endl;
		else if (a > b)
			cout << b << " � " << a << " �� �����." << endl;
		else if (a < b)
			cout << a << " � " << b << " �� �����." << endl;
	reTry1:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry1;
		}
	}
	else if (a == 2)
	{
	Task2:
		i++;
		system("cls");
		cout << "������� 2:" << endl;
		cout << "������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������. ������� �������� ������, ���� ��� ������� ���� 4 ����� � ����." << endl;
		cout << "�������:" << endl;
		int a;
		int b;
		int c;
		int d;
		int e;
		cout << "������� 5 ������ �������� (�� 2 �� 5) : " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		double s = (a + b + c + d + e) / 5.0;
		if (s >= 4)
			cout << "������� ���� " << s << ". " << "������� �������." << endl;
		else
			cout << "������� ���� " << s << ". " << "������� �� �������." << endl;
	reTry2:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry2;
		}
	}
	else if (a == 3)
	{
	Task3:
		i++;
		system("cls");
		cout << "������� 3:" << endl;
		cout << "������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������. ������� �������� ������, ���� ��� ������� ���� 4 ����� � ����." << endl;
		cout << "�������:" << endl;
		int a;
		int b;
		int c;
		int d;
		int e;
		cout << "������� 5 ������ �������� (�� 2 �� 5) : " << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		double s = (a + b + c + d + e) / 5.0;
		if (s >= 4)
			cout << "������� ���� " << s << ". " << "������� �������." << endl;
		else
			cout << "������� ���� " << s << ". " << "������� �� �������." << endl;
	reTry3:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry3;
		}
	}
	else if (a == 4)
	{
	Task4:
		i++;
		system("cls");
		cout << "������� 4:" << endl;
		cout << "�������� ���������-�����������. ������������ ������ ��� ����� � �������� �������������� ��������. ������� �� ����� ���������." << endl;
		cout << "�������:" << endl;
		double a;
		double b;
		int x;
		cout << "������� ��� �����: " << endl;
		cin >> a;
		cin >> b;
		cout << "����� �������� ����������?" << endl;
		cout << "+ (1)" << endl;
		cout << "- (2)" << endl;
		cout << "* (3)" << endl;
		cout << "/ (4)" << endl;
		cin >> x;
		if (x == 1)
			cout << "�����: " << a + b << endl;
		else if (x == 2)
			cout << "�����: " << a - b << endl;
		else if (x == 3)
			cout << "�����: " << a * b << endl;
		else if (x == 4)
			cout << "�����: " << a / b << endl;
		else
			cout << "�������� ���������� ��������." << endl;
	reTry4:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry4;
		}
	}
	else if (a == 5)
	{
	Task5:
		i++;
		system("cls");
		cout << "������� 5:" << endl;
		cout << "�������� ���������, ������� �� ������ ������������ ������ ���� ����������� ����������. ������������ ����� ������� ���� ������ � ���� ����." << endl;
		cout << "�������:" << endl;
		char text;
		char fon;
		char color[10] = "color  ";
		cout << "0 = ������\t8 = �����\n";
		cout << "1 = �����\t9 = ������ - �����\n";
		cout << "2 = �������\tA = ������ - �������\n";
		cout << "3 = �������\tB = ������ - �������\n";
		cout << "4 = �������\tC = ������ - �������\n";
		cout << "5 = �������\tD = ������ - �������\n";
		cout << "6 = ������\tE = ������ - ������\n";
		cout << "7 = �����\tF = ���� - �����\n\n";
		cout << "������� ���� ����: ";
		cin >> color[6];
		cout << "������� ���� ������: ";
		cin >> color[7];
		if ((color[6]<'a' || color[6]>'f') && (color[6] < '0' || color[6] > '9'))
		{
			cout << "������� ������ ���� ����!\n";
		}
		else if ((color[7]<'a' || color[7]>'f') && (color[7] < '0' || color[7] > '9'))
		{
			cout << "������� ������ ���� ������!\n";
		}
		else if (color[6] == color[7])
		{
			cout << "���� ���� � ������ ������ ����������!\n";
		}
		else
			system(color);
	reTry5:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry5;
		}
	}
	else if (a == 6)
	{
	Task6:
		i++;
		system("cls");
		cout << "������� 6:" << endl;
		cout << "�������� ���������, ������� �� ������ ������������ �������� ��������� �� ����� � ������� �� ������� �� ������� ������������." << endl;
		cout << "�������:" << endl;
		int n;
		int x;
		cout << "������� �����: ";
		cin >> n;
		for (int i = 0; i <= 7; i++)
		{
			x = pow(n, i);
			cout << n << " � ������� " << i << " ����� " << x << endl;
		}
	reTry6:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry6;
		}
	}
	else if (a == 7)
	{
	Task7:
		i++;
		system("cls");
		cout << "������� 7:" << endl;
		cout << "� ��� ��� �� ��������� ������������ ��������� ��� ���������� �����, ��������� �� ������ ��������, � ������� ��� �� �������� ���������. �������� ����������, ��� ���������� ����� � ������ ���������� ������, � ������ ���������� ����� ���������� ���, ����� � ������ ��������� ���� ������� ����������. ��������� �� ����������� ����� � ���� ���������� ����������, ����� ���������� ���������� ���������� ��������� ��� ���� ���������� (���� ��� ������ ��������)." << endl;
		cout << "�������:" << endl;
		int a;
		int b;
		int c;
		cout << "���������� ����� � 1 ��������: ";
		cin >> a;
		cout << "���������� ����� � 2 ��������: ";
		cin >> b;
		cout << "���������� ����� � 3 ��������: ";
		cin >> c;
		int z = (a + b + c) / 3;
		if ((a + b + c) % 3 == 0)
		{
			if ((a - z) > 0)
				cout << "�� 1 �������� ���������� " << a - z << " ���." << endl;
			else
				cout << "� 1 ������� ���������� " << abs(a - z) << " ���." << endl;
			if ((b - z) > 0)
				cout << "�� 2 �������� ���������� " << b - z << " ���." << endl;
			else
				cout << "� 2 ������� ���������� " << abs(b - z) << " ���." << endl;
			if ((c - z) > 0)
				cout << "�� 3 �������� ���������� " << c - z << " ���." << endl;
			else
				cout << "� 3 ������� ���������� " << abs(c - z) << " ���." << endl;
		}
		else
			cout << "���������� �������� �������." << endl;
	reTry7:
		cout << "��������� �������? (y/n) ";
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
			cout << "������� y ��� n" << endl;
			goto reTry7;
		}
	}
	else
	{
		cout << "������� ����� ������� �� 1 �� 7." << endl;
		goto Start;
	}
tryExit:
	cout << "�� ������ ����������? (y/n) ";
	cin >> s;
	if (s == 'y')
	{
		goto Start;
	}
	else if (s == 'n')
	{
		cout << "�� ��������� ������� " << i << " ���(-�)." << endl;
	}
	else
	{
		cout << "������� y ��� n" << endl;
		goto tryExit;
	}
}
