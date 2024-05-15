/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
#include <iostream>

using namespace std;

int main()
{
    int notas, media, soma;

    for (int i = 0; i < 4; i++)
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas;

        soma += notas;
    }

    media = soma / 4;

    cout << "Sua media foi " << media;
    
}
