#include <iostream>
using namespace std;

float convertCtoF(float Celsius);

int main() {
    float Celsius, Fahrenheit = 0.0;

    cout << "Digite uma temperatura em graus Celsius: ";
    cin >> Celsius;
    cout << endl;

    Fahrenheit = convertCtoF(Celsius);

    cout << Celsius << " graus Celsius equivalem a " << Fahrenheit << " graus Fahrenheit." << endl;

    return 0;
}

float convertCtoF(float Celsius){
    float Farebheut = 0;

    Farebheut = 1.8 * Celsius + 32.0;

    return Farebheut;
}