#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Px, Py, Qx, Qy, diferencaX, diferencaY,quadradodiferencaX, quadradodiferencaY = 0;
    float distancia = 0;

    cout << "Ponto P:" << endl;

    cin >> Px >> Py;

    cout << "Ponto Q:" << endl;
    
    cin >> Qx >> Qy;

    diferencaX = Qx - Px;
    quadradodiferencaX = pow(diferencaX, 2.0);
    diferencaY = Qy - Py;
    quadradodiferencaY = pow(diferencaY, 2.0);   

    distancia = sqrt(quadradodiferencaX + quadradodiferencaY);

    cout << "A distância entre P e Q é: " << distancia << endl;

    return 0;
}
