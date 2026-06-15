#include <iostream>
using namespace std;

char numToCaracter(int numeroDigitado);

int main(){
    cout << "Digite 9 números e descubra a letra equivalente na tabela ASCII: " << endl;

    int numero = 0;

    for (int i = 1; i < 10; i++){
        cin >> numero;

        cout << numToCaracter(numero) << endl << endl;
    }

    return 0;
}

char numToCaracter(int numeroDigitado){
    char caracterDescoberto = numeroDigitado;

    return caracterDescoberto;
}