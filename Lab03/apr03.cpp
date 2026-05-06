#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    int peso;
    string tempoCorrida, tempoCiclismo, tempoNatacao = "";
    string horasCorrida, minutosCorrida, horasCiclismo, minutosCiclismo, horasNatacao, minutosNatacao;

    cout << "Digite seu peso em quilos: ";
    cin >> peso;

    cout << "Digite o tempo de corrida: ";
    cin >> tempoCorrida;

    cout << "Digite o tempo de ciclismo: ";
    cin >> tempoCiclismo;

    cout << "Digite o tempo de natação:";
    cin >> tempoNatacao;

    size_t operator_position = tempoCorrida.find_first_of("h");

    horasCorrida = tempoCorrida.substr(0, operator_position);
    minutosCorrida = tempoCorrida.substr(operator_position + 1);
    minutosCorrida.pop_back();

    cout << horasCorrida << " horas" << endl;
    cout << minutosCorrida << " minutos" << endl;




    size_t operator_position2 = tempoCiclismo.find_first_of("h");

    horasCiclismo = tempoCiclismo.substr(0, operator_position2);
    minutosCiclismo = tempoCiclismo.substr(operator_position2 + 1);
    minutosCiclismo.pop_back();

    cout << horasCiclismo << " horas" << endl;
    cout << minutosCiclismo << " minutos" << endl;



    size_t operator_position3 = tempoNatacao.find_first_of("h");

    horasNatacao = tempoNatacao.substr(0, operator_position3);
    minutosNatacao = tempoNatacao.substr(operator_position3 + 1);
    minutosNatacao.pop_back();

    cout << horasNatacao << " horas" << endl;
    cout << minutosNatacao << " minutos" << endl;

    // Corrida
    float METSCorrida = 7.0;
    float ECorrida, tempoAtividadeCorrida = 0;

    tempoAtividadeCorrida = (stof(horasCorrida) * 60) + stof(minutosCorrida);
    
    ECorrida = METSCorrida * peso * (tempoAtividadeCorrida/60);

    cout << "Energia corrida: " << ECorrida << endl;


    // Ciclismo
    float METSCiclismo = 7.0;
    float ECiclismo, tempoAtividadeCiclismo = 0;

    tempoAtividadeCiclismo = (stof(horasCiclismo) * 60) + stof(minutosCiclismo);
    
    ECiclismo = METSCiclismo * peso * (tempoAtividadeCiclismo/60);

    cout << "Energia ciclismo: " << ECiclismo << endl;


    // Natação
    float METSNatacao = 8.0;
    float ENatacao, tempoAtividadeNatacao = 0;

    tempoAtividadeNatacao = (stof(horasNatacao) * 60) + stof(minutosNatacao);
    
    ENatacao = METSNatacao * peso * (tempoAtividadeNatacao/60);

    cout << "Energia natação: " << ENatacao << endl;




    //Energia Total
    float Etotal = 0;
    Etotal = ECorrida + ECiclismo + ENatacao;

    cout << "Energia Total: " << Etotal << endl;

    return 0;
}