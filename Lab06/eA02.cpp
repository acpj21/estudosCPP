#include <iostream>
#include <iomanip>

using namespace std;

#define precoPao 0.30
#define precoPastel 0.25

int main(){
    int qtdPaes, qtdPasteis = 0;
    float custoTotal = 0.0;

    cout << "Pães & Cia" << endl;

    cout << "Quantos pães? ";
    cin >> qtdPaes;

    cout << "Quantos pasteis? ";
    cin >> qtdPasteis;

    // Cálculo do custo das compras
    custoTotal = (qtdPaes * precoPao) + (qtdPasteis * precoPastel);

    cout << fixed << setprecision(2);
    cout << "O total das compras é R$ " << custoTotal << endl;

    return 0;
}