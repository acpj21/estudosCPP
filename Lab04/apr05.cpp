#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float Absoluto(float Numero);

int main(){
    string numero = "";
    int numeroInteiro = 0;
    float numeroAbsoluto = 0;

    // Solicita o número para calcular o número absoluto
    cout << "Entre com o número inteiro: ";
    cin >> numero;

    // Testa se o valor é um número inteiro. Começando pelo raio
    try {
        size_t pos;
        int numeroInteiro = stoi(numero, &pos); //tenta converter para inteiro

        //Verifica se toda a string foi usada
        if (pos == numero.length()){
            // cout << "Você digitou um inteiro." << endl;
            numeroInteiro = stoi(numero);
        } else {
            cout << "Você não digitou um inteiro. Abortando programa." << endl;
            exit(1);
        }
    } catch (...){
        cout << "Isso não é um número inteiro." << endl;
        exit(1);
    }

    numeroInteiro = stoi(numero);

    numeroAbsoluto = Absoluto(numeroInteiro);

    cout << "O valor absoluto é: " << numeroAbsoluto << endl;

    return 0;
}

float Absoluto(float Numero){
    float Absoluto = 0;

    Absoluto = abs(Numero);

    return Absoluto;
}