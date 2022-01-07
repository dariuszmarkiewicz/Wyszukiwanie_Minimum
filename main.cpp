#include <iostream>

using namespace std;

int main()
{
    int ilosc_liczb, minimum, licznik;
    char decyzja;

    start:

    cout << "\n Ilosc liczb do sprawdzenia: ";
    cin >> ilosc_liczb;

    ilosc_liczb--;

    int tablica[ilosc_liczb];

    cout << endl;

    for (licznik = 0; licznik <= ilosc_liczb; licznik++)
        {
            cout << " Podaj liczbe nr " << licznik + 1 << " : ";
            cin >> tablica[licznik];
        }

        minimum = tablica[0];

    for (licznik = 1; licznik <= ilosc_liczb; licznik++)
        {
            if (minimum > tablica[licznik])
                minimum = tablica[licznik];
        }

    cout << "\n Liczba maksimum: " << minimum << endl;

    cout << "\n Jeszcze raz (t/n): ";
    cin >> decyzja;

    if (decyzja == 't')
    {
        system("cls");
        goto start;
    }

    return 0;
}
