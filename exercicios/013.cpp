/*
Tendo como dado de entrada a altura (h) de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas:
    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7
*/
#include <iostream>

using namespace std;

int main()
{
    float altura, pesoIdealH, pesoIdealM, gender;
    
    cout << "Sua altura: ";
    cin >> altura;

    cout << "Voce e mulher(1) ou homem(2)? \n\nEu sou: ";
    cin >> gender;

while (gender != 1 && gender != 2)
    {
        cout << "Voce so pode escolher entre 1 e 2." << endl;
        cout << "Voce e mulher(1) ou homem(2)? \n\nEu sou: ";
        cin >> gender;
    }
    

    pesoIdealH = (72.7 * altura) - 58;
    pesoIdealM = (62.1 * altura) - 44.7;

    if (gender == 1)
    {
        cout << "Seu peso ideal e " << pesoIdealM << "kg";
    } else
    {
        cout << "Seu peso ideal e " << pesoIdealH << "kg";
    }
    
    
}
