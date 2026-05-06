#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;

time_t converter(const string& data_str){
    tm tm = {};
    istringstream ss(data_str);

    ss >> get_time(&tm, "%H:%M");

    if (ss.fail()) return -1;

    tm.tm_isdst = -1;

    return mktime(&tm);
}

int main(){
    string horarioDigitado, horasDigitado, minutosDigitado;

    cout << "Que horas são? ";
    cin >> horarioDigitado;

    time_t horarioDigitadoInput = converter(horarioDigitado);

    // 1. Obter o tempo atual do sistema
    auto now = chrono::system_clock::now();

    // 2. Converter para time_t (formato C)
    time_t now_c = chrono::system_clock::to_time_t(now);

    // 3. Converter para estrutura de hora local e formatar
    cout << "Hora atual Sistema: " << put_time(localtime(&now_c), "%H:%M") << endl;

    if (horarioDigitadoInput > now_c){
        cout << "O horário da string é posterior." << endl;
    } else if (horarioDigitadoInput < now_c){
        cout << "O horário da string é anterior." << endl;
    } else {
        cout << "Os horários são iguais." << endl;
    }

    return 0;
}