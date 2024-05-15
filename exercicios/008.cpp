/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/
#include <iostream>

using namespace std;

int main()
{
    float salarioHr, salarioMe, horasTrabalhadas;

    cout << "Quanto voce ganha por hora?" << endl;
    cin >> salarioHr;

    cout << "Quantas horas voce trabalhou esse mes?" << endl;
    cin >> horasTrabalhadas;

    salarioMe = salarioHr * horasTrabalhadas;

    cout << "Seu salario este mes foi de R$" << salarioMe;
}
