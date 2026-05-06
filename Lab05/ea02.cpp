#include <iostream>
using namespace std;

float aumentaSalario(float salario);

int main(){
    float salario, novoSalario = 0.0;

    cout << "Salário atual: ";
    cin >> salario;

    novoSalario = aumentaSalario(salario);

    cout << "Salário ajustado para " << novoSalario << endl;

    return 0;
}

float aumentaSalario(float salario){
    float salarioAumentado = 0;

    salarioAumentado = salario * 1.15;

    return salarioAumentado;
}