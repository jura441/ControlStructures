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
	cout << "������� ���������� ��������:"; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif FOR_SYNTAX
#ifdef FACTORIAL
	int n ; // � ���������� �������� �����
	int f = 1; // ����� ��������� ��������� ����� �����
	cout << "������� �����:"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " = ";
		f *= i;
		cout << f << endl;
	}
	cout << f << endl;
#endif // FACTORIAL

#ifdef POWER
	double a; // ��������� �������
	int n; // ���������� �������
	double N = 1; // �������, 
	cout << "������� ��������� ������: "; cin >> a;
	cout << "������� ���������� ������: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		n = -n; // ������ ������������� �������� �� �������������
		a = 1 / a; // ��������� ��������� ������� � �����������

	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER
	
#ifdef ASKII
	cout << "������� ASKII - �������� \n";
	setlocale(LC_ALL, "C"); // ������������� ��������� �� ���������
	for (int i = 0; i < 265; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " "; // (char) i - ��� ����� �������������� ���������� 'i' � ��� 'char'  
	}
	cout << endl;
#endif // ASKII

#ifdef FIBONACCI
	/*int a = 0;
	int b = 1;
	int c = a + b;*/
	//double a = 0, b = 1, c = a + b; // ����� �������� ����� �������
	int n; // ������
	cout << "������� ���������� ����� �� ���� ��������: "; cin >> n;
	/*for (int i = 0; i < n; i++)
	{
		cout << a << "\n";
		a = b; 
		b = c;
		� = a + b;
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
