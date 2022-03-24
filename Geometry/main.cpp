#include<iostream>
using namespace std;
//#define CHESSBOARD
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMB
#define CHESS
//#define PLUS_MINUS
//#define RHOMB_WORK
//#define CHESS_WORK
//#define PLUS_MINUS_WORK
//#define TERNARY
//#define CHESS_ALINA

#define R_DW	(char) 217
#define R_UP	(char) 191
#define L_DW	(char) 192
#define L_UP	(char) 218
#define GOR		(char) 196 << (char) 196  
#define VERT	(char) 179 
////#define	WHITE	"\xDB\xDB"
//// \x - позвол€ет включит ASKII-символ в строковую константу
//// после \x об€зательно идет шестнадцатеричный код символа (Hex-код) 
////
#define BLACK	"  "
#define	WHITE	(char) 219 <<(char) 219 

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер: "; cin >> n;
#ifdef CHESSBOARD
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << L_UP;
			else if (i == 0 && j == n) cout << R_UP;
			else if (i == n && j == 0) cout << L_DW;
			else if (i == n && j == n) cout << R_DW;
			else if (i == 0 || i == n) cout << GOR;
			else if (j == 0 || j == n) cout << VERT;
			//else cout << (i % 2 == j % 2 ? WHITE : BLACK);
				//i % 2 == j % 2 ? cout << WHITE : cout << "  ";
			else (i + j) % 2 == 0 ? cout << WHITE : cout << "  ";
		}
		cout << endl;
	}
#endif CHESSBOARD

#ifdef SQUARE
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++) //этот for повтор€ет вывод строки из звездочек
	{
		for (int j = 0; j < n; j++) // этот for повтор€ет вывод звездочки, мы получаем
		{

			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
#ifdef TRIANGLE_1
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2
#ifdef TRIANGLE_3
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)	cout << "  ";
		for (int j = i; j < n; j++)	cout << "* ";
		cout << endl;
	}
#endif  TRIANGLE_3
#ifdef TRIANGLE_4
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)	cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4
#ifdef RHOMB
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)	cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif // RHOMB
#ifdef CHESS
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << L_UP;
			else if (i == 0 && j == n) cout << R_UP;
			else if (i == n && j == 0) cout << L_DW;
			else if (i == n && j == n) cout << R_DW;
			else if (i == 0 || i == n) cout << GOR;
			else if (j == 0 || j == n) cout << VERT;
			else (i + j) % 2 == 0 ? cout << WHITE : cout << "  ";


			/*for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++) cout << "* ";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << " *";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << "* ";
				cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << "* ";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << "* ";
				for (int j = 0; j < n; j++) cout << "  ";

				cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++) cout << "* ";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << " *";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << "* ";
				cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << "* ";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << "* ";
				for (int j = 0; j < n; j++) cout << "  ";

				cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++) cout << "* ";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << " *";
				for (int j = 0; j < n; j++) cout << "  ";
				for (int j = 0; j < n; j++) cout << "* ";
				cout << endl;
			}*/
		}
		cout << endl;
	}
#endif // CHESS
#ifdef PLUS_MINUS

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)	cout << "+ -";
		//cout << endl;
		for (int j = 0; j < n; j++) cout << "- +";
		cout << endl;

		cout << endl;

	}
#endif PLUS_MINUS
#ifdef RHOMB_WORK	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)	cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++) cout << " "; cout << "/";
		cout << endl;
	}

#endif RHOMB_WORK
#ifdef PLUS_MINUS_WORK
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if (i % 2 == j % 2 ) 
			//if ((i + j) % 2 == 0 ) cout << "+ "; else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS_WORK
#ifdef TERNARY
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= n; j++)
			cout << (j == n ? "\n" : (i + j) % 2 == 0 ? "+ " : "- ");
	cout << endl;
#endif // TERNARY
#ifdef CHESS_ALINA
	for (int i = 1; i < 40; i++)
	{
		for (int j = 1; j < 40; j++)
		{
			if ((i / 5 + j / 5) & 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
			cout << endl;
	}

#endif CHESS_ALINA

}
