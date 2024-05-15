/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:

    + Salário Bruto : R$
    - IR (11%) : R$
    - INSS (8%) : R$
    - Sindicato (5%) : R$
    = Salário Liquido : R$

Obs.: Salário Bruto - Descontos = Salário Líquido.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float ganhoHora, horasMes, salarioBruto, inss, ir, sindicato, salarioLiquido;

    cout << "Quanto voce ganha por hora?" << endl;
    cout << "R$";
    cin >> ganhoHora;

    cout << "Quantas horas voce trabalhou esse mes?" << endl;
    cin >> horasMes;


    salarioBruto = ganhoHora * horasMes;

    ir = salarioBruto * 0.11;
    inss = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;

    salarioLiquido = salarioBruto - (ir + inss + sindicato);

    cout << "Seu salario bruto foi de R$" << salarioBruto << endl;
    cout << "Imposto de Renda (11%): R$ " << ir << endl;
    cout << "INSS (8%): R$" << inss << endl;
    cout << "Sindicado (5%): R$" << sindicato << endl;
    cout << "Seu salario liquido foi de R$" << salarioLiquido;

}
