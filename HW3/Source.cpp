#include<stdio.h>
#include<locale.h>
#include<iostream>
#include <Windows.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


void task1()
{
	setlocale(LC_ALL, "");
	int a, b;

	printf("������� ������ �����: ");
	scanf_s("%d", &a);

	printf("������� ������ ����� �����: ");
	scanf_s("%d", &b);

	if (a == b)
	{
		printf("����� �����\n");
	}
	else
	{
		if (a > b) {
			printf("%d, %d\n", a, b);
		}
		else { printf("%d, %d\n", b, a); }
	}
	system("pause");
}

void task2()
{

	setlocale(LC_ALL, "");
	int a, b, c, d, e;
	float f;

	printf("������� ���� 1 ������: ");
	scanf_s("%d", &a);

	printf("������� ���� 2 ������: ");
	scanf_s("%d", &b);

	printf("������� ���� 3 ������: ");
	scanf_s("%d", &c);

	printf("������� ���� 4 ������: ");
	scanf_s("%d", &d);

	printf("������� ���� 5 ������: ");
	scanf_s("%d", &e);

	f = float(a + b + c + d + e) / 5;

	if (a >= 2 && b >= 2 && c >= 2 && d >= 2 && e >= 2 && a <= 5 && b <= 5 && c <= 5 && d <= 5 && e <= 5)
	{
		if (f >= 4) { printf("��� ������� ����: %f\n�� ��������� ������\n", f); }
		else { printf("��� ������� ����: %f\n�� �� ��������� ������\n", f); }
	}

	else { printf("�� ����� ������������ ������\n"); }

	system("pause");
}

void task3()
{

	setlocale(LC_ALL, "");
	int a, b, c;

	printf("������� a: ");
	scanf_s("%d", &a);

	printf("������� b: ");
	scanf_s("%d", &b);

	printf("������� �������������� ��������:\n1 - '+'\n2 - '-'\n3 - '*'\n4 - '/'\n");
	scanf_s("%d", &c);

	switch (c)
	{
	case 1: a = a + b;
		printf("��������� � + b = %d\n", a);
		break;
	case 2: a = a - b;
		printf("��������� � - b = %d\n", a);
		break;
	case 3: a = a * b;
		printf("��������� � * b = %d\n", a);
		break;
	case 4: a = a / b;
		printf("��������� � / b = %d\n", a);
		break;
	default: printf("�� ����� ������������ �������������� ��������\n");
	}

	system("pause");
}


void task4() {
	setlocale(LC_ALL, "");
	int a, b, c;
	printf("���� ������: \n");

	printf("0 � ������ \n");
	printf("1 � ����� \n");
	printf("2 � ������� \n");
	printf("3 � ������� \n");
	printf("4 � ������� \n");
	printf("5 � ������� \n");
	printf("6 � ������ \n");
	printf("7 � ����� \n");
	printf("8 � ����� - ����� \n");
	printf("9 � ������ - ����� \n");
	printf("10 � ������ - ������� \n");
	printf("11 � ������ - ������� \n");
	printf("12 � ������ - ������� \n");
	printf("13 � ������ - ���������� \n");
	printf("14 � ������ \n");
	printf("15 � ����� \n");

	printf("���� ���� ��� ������: ");
	scanf_s("%d", &a);
	printf("���� ������: ");
	scanf_s("%d", &b);

	SetConsoleTextAttribute(hConsole, (WORD)((a << 4) | b));

	printf("Hello World! \n");

	printf("������ �� �� ������� �������� ������? 1/0 \n");
	scanf_s("%d", &c);

	if (c == 1) system("color 07");
}

void task5()
{
	setlocale(LC_ALL, "");
	int a, b;

	printf("������� a: ");
	scanf_s("%d", &a);

	printf("������� ������� �� 1 �� 7: ");
	scanf_s("%d", &b);

	switch (b)
	{
	case 1: a = pow(a, 1);
		printf("��������� � ^ 1 = %d\n", a);
		break;
	case 2: a = pow(a, 2);
		printf("��������� � ^ 2 = %d\n", a);
		break;
	case 3: a = pow(a, 3);
		printf("��������� � ^ 3 = %d\n", a);
		break;
	case 4: a = pow(a, 4);
		printf("��������� � ^ 4 = %d\n", a);
		break;
	case 5: a = pow(a, 5);
		printf("��������� � ^ 5 = %d\n", a);
		break;
	case 6: a = pow(a, 6);
		printf("��������� � ^ 6 = %d\n", a);
		break;
	case 7: a = pow(a, 7);
		printf("��������� � ^ 7 = %d\n", a);
		break;
	default: printf("�� ����� ������������ �������\n");
	}

	system("pause");
}

void task6()
{
	setlocale(LC_ALL, "");
	int a, b, c, d;

	printf("������� ���������� ���������� � ������ ���������: ");
	scanf_s("%d", &a);

	printf("������� ���������� ���������� �� ������ ���������: ");
	scanf_s("%d", &b);

	printf("������� ���������� ���������� � ������� ���������: ");
	scanf_s("%d", &c);

	d = (a + b + c) / 3;

	if ((a + b + c) % 3 == 0)
	{
		d = (abs(a - d) + abs(b - d) + abs(c - d)) / 2;
		printf("����� ��������� ���������� � ���� ���������� ���� ������, ����� ���������� %d ����������\n", d);
	}

	else { printf("���������� ���������� ���������� �������\n"); }

	system("pause");
}


int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("������� ����� �������: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

	}
	break;
	case 2:
	{
		task2();


	}break;
	case 3:
	{
		task3();


	}break;
	case 4:
	{
		task4();


	}break;
	case 5:
	{
		task5();


	}break;
	case 6:
	{
		task6();


	}break;
	}

	printf("������ ���������� 1 ��� 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}