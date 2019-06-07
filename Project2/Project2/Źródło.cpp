#include <iostream>
#define ROZMIAR_TABLICY 100
using namespace std;
char tab[ROZMIAR_TABLICY];


void Pierwsza_i_Ostatnia()
{
	cout << "podaj slowo ktore ma max 10 znakow" << endl;
	cin >> tab;
	cout << "pierwasza litera to: " << tab[0];
	cout << "ostatnia litera to: " << tab [strlen (tab) -1];
}

int main()
{
	Pierwsza_i_Ostatnia();
	return 0;
}