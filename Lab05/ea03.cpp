#include <iostream>
#include <cmath>
using namespace std;

float IMC(float altura, float massa);

int main() {
    float altura, massa, indice = 0.0;

    cout << "Altura: ";
    cin >> altura;

    cout << "Massa: ";
    cin >> massa;

    indice = IMC(altura, massa);

    cout << "IMC: " << indice << endl;

    return 0;
}

float IMC(float altura, float massa){
    float indiceMassaCorporal = 0.0;

    indiceMassaCorporal = massa/pow(altura, 2.0);

    return indiceMassaCorporal;
}