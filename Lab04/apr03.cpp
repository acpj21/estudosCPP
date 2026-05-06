#include <iostream>
#include <string>
using namespace std;

float funcaoMedia(int Media1, int Media2);

int main(){
    string valor1, valor2;
    int valorMedia1, valorMedia2;

    // Solicita o primeiro valor para a média
    cout << "Digite um valor inteiro: ";
    cin >> valor1;

    // Testa se o valor é um número inteiro
    try {
        size_t pos;
        int valorMedia1 = stoi(valor1, &pos); //tenta converter para inteiro

        //Verifica se toda a string foi usada
        if (pos == valor1.length()){
            // cout << "Você digitou um inteiro." << endl;
            valorMedia1 = stoi(valor1);
        } else {
            cout << "Você não digitou um inteiro. Abortando programa." << endl;
            exit(1);
        }
    } catch (...){
        cout << "Isso não é um número inteiro." << endl;
    }


    // solicita o segundo valor para a média
    cout << "Digite outro valor inteiro:";
    cin >> valor2;

    try {
        size_t pos;
        int valorMedia2 = stoi(valor2, &pos); //tenta converter para inteiro

        //Verifica se toda a string foi usada
        if (pos == valor2.length()){
            // cout << "Você digitou um inteiro." << endl;
            valorMedia2 = stoi(valor2);

        } else {
            cout << "Você não digitou um inteiro. Abortando programa." << endl;
            exit(1);
        }
    } catch (...){
        cout << "Isso não é um número inteiro." << endl;
    }

    valorMedia1 = stoi(valor1);
    valorMedia2 = stoi(valor2);

    cout << "A média é: " << funcaoMedia(valorMedia1, valorMedia2) << endl;

    return 0;
}

float funcaoMedia(int Media1, int Media2){
    float media;

    media = (float) (Media1 + Media2) / 2;

    return media;
}