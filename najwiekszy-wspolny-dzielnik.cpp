#include <iostream>

using namespace std;

int nwd (int a, int b)
{
    int i = 1, dzielnik = 0;
    for (i = b; i >= 1; i--)
        {
            if (a%i == 0 && b%i == 0)
            {
                dzielnik = i;
                break;
            }
        }

    return dzielnik;
}

int main()
{
    int testy,liczbaA,liczbaB;
    cin >> testy;
    for (int i = 0; i <testy; i++)
    {
        cin >> liczbaA >> liczbaB;
        cout << nwd(liczbaA, liczbaB) << endl;

    }


    return 0;
}
