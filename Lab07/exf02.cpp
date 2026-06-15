#include <iostream>
using namespace std;

char sinalAlerta();
int leituraSenha();

int main(){
    int senha;

    cout << "Iniciando com um som..." << sinalAlerta() << endl;


    senha = leituraSenha();

    cout << "Obrigado" << endl;

    return 0;
}

char sinalAlerta(){
    char alarme = '\a';

    return alarme;
}

int leituraSenha(){
    int senha = 0;

    cout << "Digite sua senha: ________ \b\b\b\b\b\b\b\b" << endl;
    cin >> senha;

    return senha;
}