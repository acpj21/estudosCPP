#include <iostream>
using namespace std;

int main(){
    int ladoA, ladoB, areaBase, altura = 0;

    cout << "Lado A: ";
    cin >> ladoA;

    cout << "Lado B: ";
    cin >> ladoB;

    cout << "Área da base = " << ladoA * ladoB << endl;

    cout << "Altura: ";
    cin >> altura;

    cout << "Volume do prisma = " << (ladoA * ladoB) * altura << endl;

    return 0;
}