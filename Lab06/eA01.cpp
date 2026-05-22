#include <iostream>
#include <string>
#include <regex>
#include <cmath>

using namespace std;

float horaFracionada(string horario);
string horaConvencao(float horarioFracionado);

int main(){
    string partida, chegada = "";
    float tempoViagem = 0;
    string tempoViagemString = "";

    cout << "Digite o horário de partida (HH:MM):";
    cin >> partida;

    cout << "Digite o horário de chegada (HH:MM):";
    cin >> chegada;

    //Processamento. Transformando horas em fracionário
    float partidafracionaria = horaFracionada(partida);
    float chegadafracionaria = horaFracionada(chegada);

    // Calculando o tempo de viagem em fracionário
    tempoViagem = chegadafracionaria - partidafracionaria;

    // Convertendo para HH:MM
    tempoViagemString = horaConvencao(tempoViagem);

    cout << "O tempo total de viagem foi " << tempoViagemString << "." << endl;

    return 0;
}

float horaFracionada(string horario){
    float fracionaio = 0;
    // Processamento
    regex reg("^([^:]+):(.*)$");
    smatch correspondencias;

    if (regex_search(horario, correspondencias, reg)){
        string parte1 = correspondencias[1].str();
        string parte2 = correspondencias[2].str();

        int parte1Inteiro = stoi(parte1);
        int parte2Inteiro = stoi(parte2);
        float parte2Fracionario = 0;

        // cout << "Parte 1: " << parte1 << endl;
        // cout << "Parte 2: " << parte2 << endl;

        parte2Fracionario = parte2Inteiro/60.0f;

        fracionaio = parte1Inteiro + parte2Fracionario;

        // cout << "Fracionario: " << parte2Fracionario << endl;
    }

    return fracionaio;
}

string horaConvencao(float horarioFracionado){
    string horaCerta = "";

    float parteInteira, parteFracionaria, parteFracionariaInteira = 0;
    parteInteira = trunc(horarioFracionado);

    parteFracionaria = horarioFracionado - parteInteira;
    parteFracionariaInteira = trunc(parteFracionaria * 60);

    horaCerta = to_string(static_cast<int>(round(parteInteira))) + ":" + to_string(static_cast<int>(round(parteFracionariaInteira)));

    return horaCerta;
}