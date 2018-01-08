#include <iostream>
using namespace std;
double dodaj(double a, double b)
	{
	return a+b;
	}
double odejmij(double a, double b)
	{
	return a-b;
	}
double mnoz(double a, double b)
	{
	return a*b;
	}
double dziel(double a, double b)
	{
	return a/b;
	}
double kalkulator (double a, double b, int wybor)
{
	switch (wybor)
		{
		case '+':
			return dodaj(a,b);
		case '-':
			return odejmij(a,b);
		case '*':
			return mnoz(a,b);
		case '/':
			return dziel(a,b);
		default:
			exit(0);
		}
}
int main(int argc, char** argv)
{
double a;
double b;
char wybor;
while(1)
	{
	cout << "kalkulator\npodaj pierwsza liczbe" << endl;
	cin >> a;
	cout << "podaj znak dzialania" << endl;
	cin >> wybor;
	cout << "podaj druga liczbe" << endl;
	cin >> b;
	cout << "wynik dzialania wynosi = ";
	cout << kalkulator(a,b,wybor) << endl;
	}
return 0;
}
