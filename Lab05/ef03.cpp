#include <iostream>
using namespace std;

float mediaH(float numero1, float numero2);

int main(){
    float numero1, numero2, mediaHarmonica = 0.0;

    cout << "Entre com um número: ";
    cin >> numero1;
    cout << endl;

    cout << "Entre com outro número: ";
    cin >> numero2;
    cout << endl;

    mediaHarmonica = mediaH(numero1, numero2);

    cout << "A média harmônica dos números é " << mediaHarmonica << endl;

    return 0;
}

float mediaH(float numero1, float numero2){
    float media = 0.0;

    media = (2.0 * numero1 * numero2) / (numero1 + numero2);

    return media;
}