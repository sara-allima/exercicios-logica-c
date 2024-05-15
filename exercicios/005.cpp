/*
Faça um Programa que converta metros para centímetros.
*/
#include <iostream>

using namespace std;

int main()
{
    float metros, centimetros;
    
    cout << "Quantos metros?" << endl;
    cin >> metros;

    centimetros = metros * 100;

    cout << "Isso equivale a " << centimetros << "cm";
}
