#include<stdio.h>
#include<locale.h>
#include<iostream>
#include <Windows.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


void task1()
{
	setlocale(LC_ALL, "");
	int a, b;

	printf("¬ведите первое число: ");
	scanf_s("%d", &a);

	printf("¬ведите второе число число: ");
	scanf_s("%d", &b);

	if (a == b)
	{
		printf("„исла равны\n");
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

	printf("¬ведите вашу 1 оценку: ");
	scanf_s("%d", &a);

	printf("¬ведите вашу 2 оценку: ");
	scanf_s("%d", &b);

	printf("¬ведите вашу 3 оценку: ");
	scanf_s("%d", &c);

	printf("¬ведите вашу 4 оценку: ");
	scanf_s("%d", &d);

	printf("¬ведите вашу 5 оценку: ");
	scanf_s("%d", &e);

	f = float(a + b + c + d + e) / 5;

	if (a >= 2 && b >= 2 && c >= 2 && d >= 2 && e >= 2 && a <= 5 && b <= 5 && c <= 5 && d <= 5 && e <= 5)
	{
		if (f >= 4) { printf("¬аш средний балл: %f\n¬ы получаете допуск\n", f); }
		else { printf("¬аш средний балл: %f\n¬ы не получаете допуск\n", f); }
	}

	else { printf("¬ы ввели недопустимую оценку\n"); }

	system("pause");
}

void task3()
{

	setlocale(LC_ALL, "");
	int a, b, c;

	printf("¬ведите a: ");
	scanf_s("%d", &a);

	printf("¬ведите b: ");
	scanf_s("%d", &b);

	printf("¬ведите арифметическое действие:\n1 - '+'\n2 - '-'\n3 - '*'\n4 - '/'\n");
	scanf_s("%d", &c);

	switch (c)
	{
	case 1: a = a + b;
		printf("–езультат а + b = %d\n", a);
		break;
	case 2: a = a - b;
		printf("–езультат а - b = %d\n", a);
		break;
	case 3: a = a * b;
		printf("–езультат а * b = %d\n", a);
		break;
	case 4: a = a / b;
		printf("–езультат а / b = %d\n", a);
		break;
	default: printf("¬ы ввели недопустимое арифметическое действие\n");
	}

	system("pause");
}


void task4() {
	setlocale(LC_ALL, "");
	int a, b, c;
	printf("ћеню цветов: \n");

	printf("0 Ч черный \n");
	printf("1 Ч синий \n");
	printf("2 Ч зеленый \n");
	printf("3 Ч голубой \n");
	printf("4 Ч красный \n");
	printf("5 Ч лиловый \n");
	printf("6 Ч желтый \n");
	printf("7 Ч белый \n");
	printf("8 Ч темно - серый \n");
	printf("9 Ч светло - синий \n");
	printf("10 Ч светло - зеленый \n");
	printf("11 Ч светло - голубой \n");
	printf("12 Ч светло - красный \n");
	printf("13 Ч светло - фиолетовый \n");
	printf("14 Ч желтый \n");
	printf("15 Ч белый \n");

	printf("÷вет фона дл€ текста: ");
	scanf_s("%d", &a);
	printf("÷вет текста: ");
	scanf_s("%d", &b);

	SetConsoleTextAttribute(hConsole, (WORD)((a << 4) | b));

	printf("Hello World! \n");

	printf("’отите ли вы вернуть значени€ цветов? 1/0 \n");
	scanf_s("%d", &c);

	if (c == 1) system("color 07");
}

void task5()
{
	setlocale(LC_ALL, "");
	int a, b;

	printf("¬ведите a: ");
	scanf_s("%d", &a);

	printf("¬ведите степень от 1 до 7: ");
	scanf_s("%d", &b);

	switch (b)
	{
	case 1: a = pow(a, 1);
		printf("–езультат а ^ 1 = %d\n", a);
		break;
	case 2: a = pow(a, 2);
		printf("–езультат а ^ 2 = %d\n", a);
		break;
	case 3: a = pow(a, 3);
		printf("–езультат а ^ 3 = %d\n", a);
		break;
	case 4: a = pow(a, 4);
		printf("–езультат а ^ 4 = %d\n", a);
		break;
	case 5: a = pow(a, 5);
		printf("–езультат а ^ 5 = %d\n", a);
		break;
	case 6: a = pow(a, 6);
		printf("–езультат а ^ 6 = %d\n", a);
		break;
	case 7: a = pow(a, 7);
		printf("–езультат а ^ 7 = %d\n", a);
		break;
	default: printf("¬ы ввели недопустимую степень\n");
	}

	system("pause");
}

void task6()
{
	setlocale(LC_ALL, "");
	int a, b, c, d;

	printf("¬ведите количество пассажиров в первой маршрутке: ");
	scanf_s("%d", &a);

	printf("¬ведите количество пассажиров во второй маршрутке: ");
	scanf_s("%d", &b);

	printf("¬ведите количество пассажиров в третьей маршрутке: ");
	scanf_s("%d", &c);

	d = (a + b + c) / 3;

	if ((a + b + c) % 3 == 0)
	{
		d = (abs(a - d) + abs(b - d) + abs(c - d)) / 2;
		printf("„тобы колчество пассажиров в трех маршрутках было равное, нужно пересадить %d пассажиров\n", d);
	}

	else { printf("Ќевозможно пересадить пассажиров поровну\n"); }

	system("pause");
}


int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("¬ведите номер задани€: ");
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

	printf("’отите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}