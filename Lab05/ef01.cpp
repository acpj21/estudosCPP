#include <iostream>
using namespace std;

void formataHHmm(int horas, int minutos);

int main() {
    int horas, minutos = 0;

    cout << "Entre com o número de horas: ";
    cin >> horas;

    cout << "Entre com o número de minutos: ";
    cin >> minutos;

    formataHHmm(horas, minutos);

    return 0;
}

void formataHHmm(int horas, int minutos){
    cout << "Agora são: " << horas << ":" << minutos << endl;
}