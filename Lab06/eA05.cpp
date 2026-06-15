#include <iostream>
using namespace std;

bool isShort(int numero);
bool isInt(int numero);

int main(){
    int numero = 0;
    bool retornoShort, retornoInt = false;

    cout << "Digite um valor inteiro: ";
    cin >> numero;

    retornoShort = isShort(numero);
    retornoInt = isInt(numero);

    if (retornoShort){
        cout << numero << " cabe em 16 bits" << endl;
    } else {
        cout << numero << " não cabe em 16 bits" << endl;
    }

    if (retornoInt){
        cout << numero << " cabe em 32 bits" << endl;
    } else {
        cout << numero << " não cabe em 32 bits" << endl;
    }

    return 0;
}

bool isShort(int numero){
    short Nshort = __SHRT_MAX__;
    bool retorno = false;

    cout << "numero Short: " << endl;

    return retorno;
}

bool isInt(int numero){
    short nInt = __INT_MAX__;
    bool retorno = false;

    cout << "numero Short: " << endl;

    return retorno;
}