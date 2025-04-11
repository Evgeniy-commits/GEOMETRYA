#include <iostream>
using namespace std;

//#define ROMB1
//#define ROMB2
#define ROMB3

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef ROMB1
	int n;
	cout << "Введите размер ромба: "; cin >> n;

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
#endif // ROMB1

#ifdef ROMB2
	int n;
	cout << "Введите размер ромба: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
			cout << " ";
		cout << "/";
		for (int j = 0; j < 2 * i; j++)
			cout << " ";
		cout << "\\" << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)
			cout << " ";
		cout << "/" << endl;
	}
#endif // ROMB2

#ifdef ROMB3
	int n;
	cout << "Size "; cin >> n;

	for (int i = 0; i < 2 * n; i++)
	{
		for (int j = 0; j < 2 * n; j++)
		{
			if (i + n == j || j + n == i) cout << "\\";
			else if (i == n - 1 - j || j - n == 2 * n - 1 - i)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
	
#endif // ROMB3

}
