#include <iostream>
#include <cstdlib>

using namespace std;

void Inicializar();
void ligar();
void verificar();
void ativar();

int main(){
    Inicializar();

    return 0;
}

void Inicializar(){
    cout << "Inicializando o Sistema:" << endl;
    ligar();
    verificar();
    ativar();
    cout << "Inicialização concluída." << endl;

    int randomico = rand();

    if (randomico > 16384){
        cout << "Sistema em funcionamento." << endl;
    } else {
        cout << "Falha na inicialização." << endl;
    }
}

void ligar(){
    cout << "- Ligando dispositivos" << endl;
}

void verificar(){
    cout << "- Verificando integridade" << endl;
}

void ativar(){
    cout << "- Ativando processos" << endl;
}