#include <iostream>
using namespace std;


//#define ROMB
//#define CHESS
//#define RAMKA
//#define CHESS_BOARD
//#define RAMKA_LINE

void main()
{
	/*setlocale(LC_ALL, "Russian");*/

#ifdef ROMB
	int n;
	cout << "¬ведите размер ромба: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
			cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++)
			cout << "  ";
		cout << "\\" << endl;
	}
	for (int i = 0; i < n; i++)
	{ 
		for (int j = 0; j < i; j++)
			cout << " ";
		cout << "\\";
		for (int j = n - 1; j > i; j--)
			cout << "  ";
		cout << "/" << endl;
	}	
#endif // ROMB


#ifdef CHESS
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i % 2 == j % 2)
				{
					for (int j = 0; j < n; j++) cout << " *";
				}
				else
				{
					for (int j = 0; j < n; j++)	cout << "  ";
				}
			}
			cout << endl;
		}
	}
#endif // CHESS

#ifdef RAMKA
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++) cout << " *";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " *";
		for (int j = 0; j < n - 2; j++) cout << "  ";
		cout << " *" << endl;
	}
	for (int i = 0; i < n; i++) cout << " *";
#endif // RAMKA


#ifdef CHESS_BOARD
	int n;
	cout << "Size "; cin >> n;
	cout << char(218);
	for (int i = 0; i < 2 * n * n + 1; i++) cout << char(196);
	cout << char(191);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << char(179);
			for (int j = 0; j < n; j++)
			{
				if (i % 2 == j % 2)
				{
					for (int j = 0; j < n; j++) cout << " *";
				}
				else
				{
					for (int j = 0; j < n; j++)	cout << "  ";
				}
			} 
			cout << " " << char(179);
			cout << endl;
		}
	}
	cout << char(192);
	for (int i = 0; i < 2 * n * n + 1; i++) cout << char(196);
	cout << char(217);
#endif // CHESS_BOARD

#ifdef RAMKA_LINE
	/*cout << char(191) << "191" << endl;
	cout << char(192) << "192" << endl;
	cout << char(196) << "196" << endl;
	cout << char(217) << "217" << endl;
	cout << char(218) << "218" << endl;
	cout << char(179) << "179" << endl;*/
	int n;
	cout << "Size "; cin >> n;
	cout << char(218);
	for (int i = 0; i < 2 * n; i++) cout << char(196);
	cout << char(191);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << char(179);
		for (int j = 0; j < 2 * n; j++) cout << " ";
		cout << char(179) << endl;
	}
	cout << char(192);
	for (int i = 0; i < 2 * n; i++) cout << char(196);
	cout << char(217);
#endif // RAMKA_LINE


	//#define SMALL_CHESS_SWITCH

#ifdef SMALL_CHESS_SWITCH
	int n; bool k = true;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");

	for (int i = 0; i < n + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			switch (k)

			{
			case "(i == 0 && j == 0)": cout << UPPER_LEFT_ANGLE;
				case j > 0 && j < n + 1 && i == 0 || j > 0 && j < n + 1 && i == n + 1: cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
				case i == 0 && j == n + 1: cout << UPPER_RIGHT_ANGLE;
					case i > 0 && i <= n && j == 0 || i > 0 && i <= n && j == n + 1: cout << VERTICAL_LINE;
					case i == n + 1 && j == 0: cout << LOWER_LEFT_ANGLE;
					case i == n + 1 && j == n + 1: cout << LOWER_RIGHT_ANGLE;
					case i % 2 == j % 2: cout << WHITE_BOX << WHITE_BOX;
		else cout << BLACK_BOX << BLACK_BOX;
			}
		}
		cout << endl;
	}
#endif // SMALL_CHESS_SWITCH

	/*setlocale(LC_ALL, "Russian");
int n;
cout << "¬ведите размер доски: "; cin >> n;
setlocale(LC_ALL, "C");

for (int i = 0; i < n + 2; i++)
{
	for (int j = 0; j < n + 2; j++)
	{
		if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
		else if (j > 0 && j < n + 1 && i == 0) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
		else if (i == 0 && j == n + 1) cout << UPPER_RIGHT_ANGLE;
		else if (i > 0 && i <= n && j == 0) cout << VERTICAL_LINE;
		else if (i > 0 && i <= n && j == n + 1) cout << VERTICAL_LINE;
		else if (i == n + 1 && j == 0) cout << LOWER_LEFT_ANGLE;
		else if (j > 0 && j < n + 1 && i == n + 1) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
		else if (i == n + 1 && j == n + 1) cout << LOWER_RIGHT_ANGLE;
		else if (i % 2 == j % 2) cout << WHITE_BOX << WHITE_BOX;
		else cout << BLACK_BOX << BLACK_BOX;
	}
	cout << endl;
}*/
}