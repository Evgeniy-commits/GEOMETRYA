#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	//#define SQUARD
	//#define TRIANGLE
	//#define TRIANGLEA
	//#define TRIANGLEB
	//#define TRIANGLEC
	//#define TRIANGLED
#define PERFECT_NUMBER_EYLER
//#define PERFECT_NUMBER_EYLER_CLASSWORK


#ifdef SQUARD
	int a;
	cout << "¬ведите длину стороны квадрата: "; cin >> a;

	for (int i = 0; i < a; i++)
	{

		for (int j = 0; j < a; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
#endif // SQUARD

#ifdef TRIANGLE
	int a;
	cout << "¬ведите длину стороны треуголника: "; cin >> a;

	for (int i = 0; i < a; i++)
	{

		for (int j = 0; j <= i; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
#endif // TRIANGLE


#ifdef TRIANGLEA
	int a;
	cout << "¬ведите длину стороны треуголника: "; cin >> a;

	for (int i = 1; i <= a; i++)
	{

		for (int j = a; i <= j; j--)
		{
			cout << " *";
		}

		cout << endl;
	}
#endif // TRIANGLEA

#ifdef TRIANGLEB
	int a;
	cout << "¬ведите длину стороны треуголника: "; cin >> a;

	for (int i = 1; i <= a; i++)
	{

		for (int j = a; i <= j; j--)
		{
			cout << " *";
		}

		cout << endl;
	}
#endif // TRIANGLEB

#ifdef TRIANGLEC
	int a;
	cout << "¬ведите длину стороны треуголника: "; cin >> a;

	for (int i = 1; i <= a; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << "  ";
		}

		for (int j = a; j >= i; j--)
		{
			cout << " *";
		}

		cout << endl;
	}
#endif // TRIANGLEC

#ifdef TRIANGLED
	int a;
	cout << "¬ведите длину стороны треуголника: "; cin >> a;

	for (int i = 1; i <= a; i++)
	{
		for (int k = a; k >= i; k--)
		{
			cout << "  ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " *";
		}

		cout << endl;
	}
#endif // TRIANGLED

#ifdef PERFECT_NUMBER_EYLER
	/*—овершенные числа можно найти по формуле Ёйлера : perfect_number = 2 ^ p - 1 * (2 ^ p - 1),
	где р - простое число, а второй множитель называетс€ числом ћерсенна */
	int number, simple_number, i, j, k;
	unsigned long long perfectNumber, firstMultiplier = 1, numberOfMersenn;
	bool isSimple, isCheckNumberSimple;

	for (number = 2; number <= 33; number += 1)
	{
		isSimple = true;
		for (i = 2; i * i <= number; ++i)
			if (number % i == 0 && number != i)
			{
				isSimple = false;
				break;
			}
		if (isSimple == true)
		{
			simple_number = number;
			for (j = 1; j < simple_number; ++j)
			{
				firstMultiplier *= 2;
			}
			numberOfMersenn = 2 * firstMultiplier - 1;
			isCheckNumberSimple = true;
			for (k = 3; k * k <= numberOfMersenn; k += 2)
				if (numberOfMersenn % k == 0 && numberOfMersenn != k)
				{
					isCheckNumberSimple = false;
					break;
				}
			if (isCheckNumberSimple == true)
			{
				perfectNumber = firstMultiplier * numberOfMersenn;
				cout << perfectNumber << endl;
			}
			firstMultiplier = 1;
		}
	}
#endif //PERFECT_NUMBER_EYLER


#ifdef PERFECT_NUMBER_EYLER_CLASSWORK



#endif //PERFECT_NUMBER_EYLER_CLASSWORK
}