/*
Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro
desta área para o usuário.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float lados, area, dobro;

    cout << "Qual o tamanho dos lados?" << endl;
    cin >> lados;

    area = pow(lados, 2);

    dobro = area * 2;

    cout << "O dobro da sua area e de " << dobro;
}
