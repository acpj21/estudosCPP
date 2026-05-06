#include <iostream>
using namespace std;

int main() {
    int anos, qtdCigarrosDia = 0;
    float precoCarteiraCigarros = 0;

    cout << "A quantos anos você fuma? " << endl;
    cin >> anos;

    cout << "Quantos cigarros você fuma por dia? " << endl;
    cin >> qtdCigarrosDia;

    cout << "Qual o preço médio de uma carteira de cigarros?" << endl;
    cin >> precoCarteiraCigarros;

    cout << "Você gastou até agora R$ " << (((anos * 365.25 * qtdCigarrosDia)/20) * precoCarteiraCigarros) << " com cigarros." << endl;

    return 0;
}