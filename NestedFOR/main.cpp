#include<iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
//#define PIFAGOR

void main()
{
	setlocale(LC_ALL, "");

#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			//cout << i << " * " << j << " = " << i * j << "\n" << endl;
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i * j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << " \t " << endl;



			//cout << i << " * " << j << " = " << i * j << "\n" << endl;

		}

	}
#endif // MULTIPLICATION_TABLE

#ifdef PIFAGOR
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout.width(5); // задаем ширину поля, в которое будет выведено следующее значение
			// после задания ширины устанавливается выравнивание по правому краю.
			cout << i * j; // << "\t"; 

		}
		cout << endl;
	}
#endif // PIFAGOR


}
