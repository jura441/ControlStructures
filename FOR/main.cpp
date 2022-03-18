#include<iostream>
using namespace std;
//#define FOR_SYNTAX
//#define FACTORIAL
//#define POWER
#define ASKII
//#define FIBONACCI
//#define PIFAGOR

void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef FOR_SYNTAX
	int n = 10;
	cout << "Введите количество итераций:"; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif FOR_SYNTAX
#ifdef FACTORIAL
	int n ; // с клавиатуры вводится число
	int f = 1; // нужно вычислить факториал этого числа
	cout << "Введите число:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " = ";
		f *= i;
		cout << f << endl;
	}
	cout << f << endl;
#endif // FACTORIAL

#ifdef POWER
	double a; // основание степени
	int n; // Показатель степени
	double N = 1; // Степень, 
	cout << "Введите основание стпени: "; cin >> a;
	cout << "Введите показатель стпени: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		n = -n; // Меняем положительное значение на отрицательное
		a = 1 / a; // Переносим основание степени в знаменатель

	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER
	
#ifdef ASKII
	cout << "Таблица ASKII - символов \n";
	setlocale(LC_ALL, "C"); // устанавливает кодировку по умолчанию
	for (int i = 0; i < 265; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " "; // (char) i - это явное преобразование переменной 'i' в тип 'char'  
	}
	cout << endl;
#endif // ASKII

#ifdef FIBONACCI
	/*int a = 0;
	int b = 1;
	int c = a + b;*/
	//double a = 0, b = 1, c = a + b; // Можно выводить одной строкой
	int n; // предел
	cout << "Введите количество чисел из ряда Фибоначи: "; cin >> n;
	/*for (int i = 0; i < n; i++)
	{
		cout << a << "\n";
		a = b; 
		b = c;
		с = a + b;
	}*/
	for (double a = 0, b = 1, c = a + b, i = 0; i < n; i++)
	{
		cout << a << "\n";
		a = b;
		b = c;
		c = a + b;
	}
#endif // FIBONACCI

	
	
#ifdef PIFAGOR
	for (double i = 1; i <= 10; i++)
	{
		cout << 1 * i << "\t" << 2 * i << "\t" << 3 * i << "\t" << 4 * i << "\t" << 5 * i << "\t" << 6 * i << "\t" << 7 * i << "\t" << 8 * i << "\t" << 9 * i << "\t" << 10 * i << "\t" << endl;
	}
#endif // PIFAGOR

	
	for ( int i = 1; i <= 10; i++)

		cout << i << " * " << i << " = " << i * i << "\n";
}
