#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int angulo = 0;
    double seno, converteRadianos = 0;

    cout << "Digite um ângulo: ";
    cin >> angulo;

    converteRadianos = angulo * M_PI / 180.0;
    
    seno = sin(converteRadianos);

    cout << "Seno = " << seno << endl;

    return 0;
}