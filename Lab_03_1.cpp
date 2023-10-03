// Lab_03_1.cpp
// Кругліцький Мстислав
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 14

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double A; // змінні, що використовуються в 2 способах
	double B; 
	double y1; // змінні → 1 спосіб

	cout << "x = "; cin >> x;

	A = abs(4 * x - 1);
	
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = pow(x, 7) - 2 * x;
	if (0 <= x && x < 3)
		B = atan((exp(x) + 1) / 8);
	if (x >= 3)
		B = pow(x, 4) + exp(x * x + 3);

	y1 = A + B;

	cout << endl;
	cout << "1) y = " << y1 << endl;


	// спосіб 2: розгалуження в повній формі
	double C;
	double y2; // змінні → 2 спосіб

	if (x < 0)
		C = pow(x, 7) - 2 * x;
	else
		if (0 <= x && x < 3)
			C = atan((exp(x) + 1) / 8);
		else 
			C = pow(x, 4) + exp(x * x + 3);

	y2 = A + B;

	cout << "2) y = " << y2 << endl;

	return 0;
}