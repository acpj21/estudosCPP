#include <iostream>
#include <cmath>
using namespace std;

float modulo(int x, int y);

int main(){
    int x, y = 0;
    float norma = 0.0;

    cout << "Digite as coordenadas do vetor" << endl;
    
    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    norma = modulo(x, y);

    cout << endl; 
    cout << "O tamanho do vetor é " << norma << endl;

    return 0;
}

float modulo(int x, int y){
    float calculoModulo = 0.0;

    calculoModulo = sqrt(pow(x, 2.0) + pow(y, 2.0));

    return calculoModulo;
}