#include <iostream>
using namespace std;

int main() {
    // Primeira parte do exercício
    float num1, num2, num3, volume = 0;

    cout << "Digite 3 números float, separados por espaços: " << endl;

    cin >> num1 >> num2 >> num3;

    volume = num1 * num2 * num3;

    cout << "O volume do cubo é: " << volume << endl;

    cout << endl << endl;

    //Segunda parte do exercício
    num1, num2, num3, volume = 0;

    cout << "Digite 3 números float. Digite enter após cada valor: " << endl;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    volume = num1 * num2 * num3;

    cout << "O volume do cubo é: " << volume << endl;

    return 0;
}