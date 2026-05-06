#include <iostream>
using namespace std;

int main() {
    float custoFabrica, impostoDistribuidor, impostoGerais = 0;

    cout << "Custo de fábrica: ";
    cin >> custoFabrica;

    impostoDistribuidor = 0.28;
    impostoGerais = 0.45;

    cout << "O custo a consumidor é de R$ " << custoFabrica + ((custoFabrica * impostoDistribuidor) + (custoFabrica * impostoGerais)) << endl;

    return 0;
}