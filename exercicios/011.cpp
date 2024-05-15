/*
Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre:
    o produto do dobro do primeiro com metade do segundo.
    a soma do triplo do primeiro com o terceiro.
    o terceiro elevado ao cubo.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2;
    float num3, a, b, c;
    
    cin >> num1;
    cin >> num2;
    cin >> num3;

    a = (2 * num1) * ( num2 / 2);
    b = (3 * num1) + num3;
    c = pow(num3, 3);

    cout << a << endl;
    cout << b << endl;
    cout << c;
}
