#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome = "";
    string endereco = "";
    string cidade = "";
    string estado = "";

    //Digite o seu nome
    cout << "Digite o seu nome completo: " << endl;
    // cin >> nome;
    getline(cin, nome);

    // Endereço
    cout << "Digite o seu endereço: " << endl;
    // cin >> endereco;
    getline(cin, endereco);

    // Cidade
    cout << "Digite o nome da sua cidade: " << endl;
    // cin >> cidade;
    getline(cin, cidade);

    // estado
    cout << "Digite a sigla do seu estado: " << endl;
    cin >> estado;

    // Mostrar o que foi digitado
    cout << endl;
    cout << endl;
    cout << nome <<endl;
    cout << endereco << endl;
    cout << cidade << ", " << estado << endl;

    return 0;
}