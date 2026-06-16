#include <iostream>
using namespace std;

char charada(char caractere, int x);

int main() {
    int numero = 0;
    char caractere = 'A';

    for (int i = 1; i < 5; i++){
        cin >> numero;
        cin >> caractere;

        cout << charada(numero, caractere) << endl << endl;
    }

    return 0;
}


char charada(char caractere, int x){
    char retorno = '0';

    retorno = caractere + x;

    return retorno;
}