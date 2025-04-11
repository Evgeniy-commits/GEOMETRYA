#include <iostream>
using namespace std;

#define UPPER_LEFT_ANGLE    (char)218
#define UPPER_RIGHT_ANGLE   (char)191
#define LOWER_LEFT_ANGLE     (char)192
#define LOWER_RIGHT_ANGLE    (char)217
#define HORIZONTAL_LINE     (char)196
#define VERTICAL_LINE       (char)179
#define WHITE_BOX           "\xDB\xDB"              //(char)219
#define BLACK_BOX           "\x20\x20"

/* Escape - последовательность '\x00' позвол€ет включить в строку 
символ по Ўестнадцатиричному ASCII коду*/

#define SMALL_CHESS
//#define BIG_CHESS

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
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (j > 0 && j <= n * n && i == 0 || j > 0 && j <= n * n  && i == n * n + 1) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (i == 0 && j == n * n + 1) cout << HORIZONTAL_LINE << UPPER_RIGHT_ANGLE << endl;
			else if (i == n * n + 1 && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n * n + 1 && j == n * n + 1) cout << HORIZONTAL_LINE << LOWER_RIGHT_ANGLE;
			else if (i >= 1 && j >= 1 && i <= n && j <= n)
			{
				for (int j = 0; j < n; j++)
				{
			        if (i > 0 && i <= n && j == 0) cout << VERTICAL_LINE;
			        if (i % 2 != j % 2)
						for (int j = 0; j < n; j++) cout << " *";
					else
						for (int j = 0; j < n; j++)	cout << BLACK_BOX << BLACK_BOX;
					if (i >= 0 && i <= n && j == n - 1) cout << BLACK_BOX << VERTICAL_LINE;
				}
			cout << endl;
			}
		}
	}
#endif // BIG_CHESS
}