/*
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre
em graus Farenheit.
*/
#include <iostream>

using namespace std;

int main()
{
    float grausC, grausF;
    
    cout << "Temperatura em Celsius: ";
    cin >> grausC;

    grausF = (grausC * 9 / 5) + 32;

    cout << grausF << " farenheit";   
}
