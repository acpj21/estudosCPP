#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float VolumeCilindro(int RaioBase, int AlturaCilindo);

int main(){
    string raio, altura = "";
    int raioInteiro, alturaInteiro = 0;
    float Volume = 0;

    // Solicita o raio do cilindro
    cout << "Entre com o raio da base: ";
    cin >> raio;

    // Solicita a altura do cilindro
    cout << "Entre com a altura do cilindro: ";
    cin >> altura;

    // Testa se o valor é um número inteiro. Começando pelo raio
    try {
        size_t pos;
        int RaioBase = stoi(raio, &pos); //tenta converter para inteiro

        //Verifica se toda a string foi usada
        if (pos == raio.length()){
            // cout << "Você digitou um inteiro." << endl;
            RaioBase = stoi(raio);
        } else {
            cout << "Você não digitou um inteiro, para o raio. Abortando programa." << endl;
            exit(1);
        }
    } catch (...){
        cout << "Isso não é um número inteiro, para o raio." << endl;
        exit(1);
    }

    // Testa se o valor é um número inteiro. Terminando pela altura.
    try {
        size_t pos;
        int alturaInteiro = stoi(altura, &pos); //tenta converter para inteiro

        //Verifica se toda a string foi usada
        if (pos == altura.length()){
            // cout << "Você digitou um inteiro." << endl;
            alturaInteiro = stoi(altura);
        } else {
            cout << "Você não digitou um inteiro, para a altura. Abortando programa." << endl;
            exit(1);
        }
    } catch (...){
        cout << "Isso não é um número inteiro, para o raio." << endl;
        exit(1);
    }

    raioInteiro = stoi(raio);
    alturaInteiro = stoi(altura);

    Volume = VolumeCilindro(raioInteiro, alturaInteiro);

    cout << "O volume do cilindro é: " << Volume << endl;
    return 0;
}

float VolumeCilindro(int RaioBase, int AlturaCilindo){
    double pi = M_PI;
    double Volume;

    Volume = pi * pow(RaioBase, 2) * AlturaCilindo;

    return Volume;
}