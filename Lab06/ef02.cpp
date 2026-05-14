#include <iostream>
using namespace std;

float funcaoConsumo(float distancia, float combGasto);

int main(){
    float distancia, combGasto, consumo = 0.0;

    cout << "Distânica percorrida (km): ";
    cin >> distancia;

    cout << "Litros de combustível: ";
    cin >> combGasto;

    consumo = funcaoConsumo(distancia, combGasto);

    cout << "O consumo do seu carro foi de " << consumo << " km/litro." << endl;

    return 0;
}

float funcaoConsumo(float distancia, float combGasto){
    float consumo = 0.0;

    consumo = distancia / combGasto; 

    return consumo;
}