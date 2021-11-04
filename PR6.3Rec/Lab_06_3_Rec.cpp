//Lab_06_3_Rec.cpp
// Вольвенко Іван
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 13

#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

void Create(int mas[], const int n, const int Low, const int High, int i)
{
	mas[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(mas, n, Low, High, i + 1);
}

void Print(int mas[], const int n, int i)
{
	cout << mas[i] << " ";
	if (i < n - 1)
		Print(mas, n, i + 1);
}

template <typename T>
T Perev1(T mas[], const T n, T i)                    //шаблонна функція             
{
	if (n < 2)
		cerr << "in arrays one element" << endl;
	if (i < n && !(mas[i - 1] < mas[i]))
		return Perev1(mas, n, i + 1);
	else
		return i >= n;
}

int Perev2(int mas[], const int n, int i)            // звичайна функція
{
	if (n < 2)
		cerr << "in arrays one element" << endl;
	if (i < n && !(mas[i - 1] < mas[i]))
		return Perev2(mas, n, i + 1);
	else
		return i >= n;
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 5;
	int a[k];

	int Low = 0;
	int High = 5;

	Create(a, k, Low, High, 0);

	cout << "a[ ";
	Print(a, k, 0);
	cout << "]" << endl;

	if (Perev1(a, k, 1) == 1)     // виклик шаблонної функції
		cout << "True" << endl;
	else
		cout << "False" << endl;

	if (Perev2(a, k, 1) == 1)     // виклик звичайної функції
		cout << "True" << endl;
	else
		cout << "False" << endl;

	return 0;
}