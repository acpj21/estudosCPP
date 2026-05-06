#include <iostream>
#include <string>
using namespace std;

void Pequena();
void Media();
void Grande();
void Linha(string tamanhoLinha);

int main(){
    Pequena();
    Media();
    Grande();

    cout << "Programação de Computadores" << endl;

    Grande();
    Media();
    Pequena();
    return 0;
}

void Pequena(){
    Linha("----------");
}

void Media(){
    Linha("--------------------");
}

void Grande(){
    Linha("------------------------------");
}

void Linha(string Linha){
    cout << Linha << endl;
}