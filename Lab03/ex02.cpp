#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string horario, horas, minutos = "";

    cout << "Que horas são? ";
    cin >> horario;

    size_t operator_position = horario.find_first_of(":");

    horas = horario.substr(0, operator_position);
    minutos = horario.substr(operator_position + 1);

    cout << horas << " horas" << endl;
    cout << minutos << " minutos" << endl;

    return 0;
}