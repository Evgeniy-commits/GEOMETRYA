#include <iostream>
#include <iomanip>
using namespace std;

#define UPPER_LEFT_ANGLE         "\xDA"                        
#define LOWER_LEFT_ANGLE         "\xC0"                            
#define VERTICAL_LINE            "\xB3"                       
#define WHITE_BOX                "\xDB\xDB"             
#define BLACK_BOX                "\x20\x20"
#define SPACE                    "\x20"
#define SP                       ' '
#define SP_STAR                  '*'
#define STAR                     "\x2A"
#define HOR_UPPER_RIGHT_ANGLE    "\xC4\xBF\n"
#define HOR_LOWER_RIGHT_ANGLE    "\xC4\xD9"
#define HOR_HORIZONTAL_LINE      "\xC4\xC4"
#define SP_VERTICAL_LINE         "\x20\xB3"


//#define BIT_REPLACEMENT
#define BIG_CHESS
//#define TRIANGLE_OF_PASCAL

void main()
{
	setlocale(LC_ALL, "Russian");

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
				i == 0 && j == n * n + 1 ? HOR_UPPER_RIGHT_ANGLE :
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







}