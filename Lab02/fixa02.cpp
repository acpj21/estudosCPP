#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, nome1, nome2, nome3, nome4, nome5, nome6 = "";
    int tamanhoString, i, j, k = 0;

    //Digite o seu nome
    cout << "Digite o seu nome completo: " << endl;
    getline(cin, nome);

    cout << endl;
    cout << endl;

    // Nome completo. Primeiro cout
    cout << nome << endl;

    // Tamanho do nome
    tamanhoString = nome.length();

    for (i=0; i < tamanhoString; i++){
        if (nome[i] != 32){
            nome1 += nome[i];
        } else {
            nome2 = nome1;
            nome1 += "\n";
            j = i;
        }
    }

    // Nome em duas linhas. Segundo cout.
    cout << nome1 << endl;

    for (k = j; j < tamanhoString; j++){
        nome3 += nome[j];
    }

    // Nome usando terceiro e quarto cout
    cout << nome2;
    cout << nome3 << endl;

    return 0;
}