// terceiro.cpp - erros de semântica
#include <iostream>
using namespace std;

int main()
{
    int dias; // declara uma variável inteira
    cout << "Número de Dias: ";
    cin >> dias; //Lê um valor para a variável

    // int horas = dias * 60;
    int horas = dias * 24;
    cout << dias << " dias tem " << horas << " horas." << endl;

    return 0;
}