/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre
a temperatura em graus Celsius.
C = (5 * (F-32) / 9).
*/
#include <iostream>

using namespace std;

int main()
{
    float grausC, grausF;
    
    cout << "Temperatura em Farenheit: ";
    cin >> grausF;

    grausC = (5 * (grausF - 32) / 9);

    cout << grausC << " celsius";
}
