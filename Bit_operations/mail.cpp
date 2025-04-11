#include <iostream>
#include <iomanip>
using namespace std;

#define UPPER_LEFT_ANGLE    "\xDA"                        //(char)218
#define UPPER_RIGHT_ANGLE   (char)191
#define LOWER_LEFT_ANGLE    "\xC0"                             //(char)192
#define LOWER_RIGHT_ANGLE   (char)217
#define HORIZONTAL_LINE     (char)196
#define VERTICAL_LINE       "\xB3"                        //(char)179
#define WHITE_BOX           "\xDB\xDB"              //(char)219
#define BLACK_BOX           "\x20\x20"
#define SPACE               "\x20"
#define SP                  ' '
#define SP_STAR             '*'
#define STAR                "\x2A"
#define HOR_UPPER_RIGHT_ANGLE    "\xC4\xBF\n"
#define HOR_LOWER_RIGHT_ANGLE    "\xC4\xD9"
#define HOR_HORIZONTAL_LINE   "\xC4\xC4"
#define SP_VERTICAL_LINE      "\x20\xB3"

/* Escape - последовательность '\x00' позвол€ет включить в строку
символ по Ўестнадцатиричному ASCII коду*/

//#define SMALL_CHESS
//#define BIG_CHESS
//#define BIT_REPLACEMENT
#define TRIANGLE_OF_PASCAL

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef SMALL_CHESS
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");

	for (int i = 0; i < n + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (j > 0 && j < n + 1 && i == 0 || j > 0 && j < n + 1 && i == n + 1) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (i == 0 && j == n + 1) cout << UPPER_RIGHT_ANGLE;
			else if (i > 0 && i <= n && j == 0 || i > 0 && i <= n && j == n + 1) cout << VERTICAL_LINE;
			else if (i == n + 1 && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n + 1 && j == n + 1) cout << LOWER_RIGHT_ANGLE;
			//else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			else cout << (~i & 1 ^ j & 1 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif // SMALL_CHESS

#ifdef BIG_CHESS
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");

	for (int i = 0; i <= n * n + 1; i++)
	{
		for (int j = 0; j <= n * n + 1; j++)
		{
			cout << (i == 0 && j == 0 ? UPPER_LEFT_ANGLE : 
				j > 0 && j <= n * n && i == 0 || j > 0 && j <= n * n && i == n * n + 1 ? HOR_HORIZONTAL_LINE :
				i == 0 && j == n * n + 1 ? HOR_UPPER_RIGHT_ANGLE:
				i == n * n + 1 && j == 0 ? LOWER_LEFT_ANGLE :
				i == n * n + 1 && j == n * n + 1 ? HOR_LOWER_RIGHT_ANGLE : "");
			if (i >= 1 && j >= 1 && i <= n && j <= n)
			{
				for (int j = 0; j < n; j++)
				{
					cout << (i > 0 && i <= n && j == 0 ? VERTICAL_LINE : "");
					!(~i & 1 ^ j & 1) ? cout << setfill(SP_STAR) << setw(2 * n) << STAR : cout << setfill(SP) << setw(2 * n) << SPACE;
					cout << (i >= 0 && i <= n && j == n - 1 ? SP_VERTICAL_LINE : "");
				}
				cout << endl;
			}
		}
	}
#endif // BIG_CHESS

#ifdef BIT_REPLACEMENT
	int a = 5;
	int b = 7;
	//int c;
	cout << "a = " << a << " b = " << b << endl;
	/*c = a ^ b;     a = a ^ b;
	a = c ^ a;       b = a ^ b;
	b = c ^ b;       a = a ^ b;*/
	a ^= b ^= a ^= b;
	cout << "a = " << a << " b = " << b;
#endif // BIT_REPLACEMENT

#ifdef TRIANGLE_OF_PASCAL
	int n, binary_coeff = 1, digit;
	
	cout << "Size "; cin >> n;
	setlocale(LC_ALL, "C");
	
	for (int i = 1; i <= n / 2; i++) binary_coeff = binary_coeff * (n - i + 1) / i;
	digit = ((int)log10(binary_coeff) + 1);
	binary_coeff = 1;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			cout << setfill(SP) << setw(digit) << SP;
		}
		cout << binary_coeff;
		for (int j = 1; j <= i; j++)
		{
			binary_coeff = binary_coeff * (i - j + 1) / j;
			cout << setfill(SP) << setw(2 * digit) << binary_coeff;
		}
		cout << endl;
	}
#endif // TRIANGLE_OF_PASCAL

	
	
	
	
	
	/*double factorial(int number)
	{
		double fact = 1;
		for (int i = 1; i <= number; ++i)
		{
			fact *= i;
		}
		return fact;
	}*/
	
	
	
	
	
	
	
	
	//cout << setfill(' ') << setw(4) << 11 << setfill(' ') << setw(2) << ' ' << 11;
	//setfill(' ') << setw(n - i);
	//int n; 
	//int val;
	//cout << "Size "; cin >> n;

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		if (j == 0 || i == 0) val = 1;
	//		else val = val * (i - j + 1) / j;
	//		cout << val << " ";
	//	}
	//	/*for (int j = 2; j <= i; j++)
	//	{
	//		k = i / (j - 1) * (i + 1 - j) / j;
	//		cout << k << endl;
	//	}*/
 //   
	//cout << endl;
 //   }

	//int n;
	//cout << "Size "; cin >> n;

	//for (int i = 0; i < 2 * n; i++)
	//{
	//	for (int j = 0; j < 2 * n; j++)
	//	{
	//		if (i == n - 1 - j || i + n - 1 == j && i > 0 && i < n) cout << " ";
	//		else if (j == n - i + 1 && i > 1 && i < n || j == i + n - 3 && i > 2 && i < n) cout << i;
	//		else if
	//			for (int j = 0; j <= i; j++)
	//			{
	//				if (j == 0 || i == 0) val = 1;
	//				else val = val * (i - j + 1) / j;
	//				cout << val << " ";
	//			}
	//		else cout << " ";

	//	}
	//	cout << endl;
	
	
}