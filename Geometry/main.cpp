#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
#define CHESS



void main()
{
	setlocale(LC_ALL, "Russian");


#ifdef SQUARE

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
#endif // SQUARE

#ifdef  TRIANGLE_1

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif //  TRIANGLE_1

#ifdef  TRIANGLE_2

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i ; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif //  TRIANGLE_2

#ifdef  TRIANGLE_3

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif //  TRIANGLE_3

#ifdef  TRIANGLE_4

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif //  TRIANGLE_4

#ifdef CHESS
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}

#endif // CHESS


}