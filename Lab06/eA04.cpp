#include <iostream>
using namespace std;

long long calculo(long long a, long long b);

int main(){
    long long resultado = 200530LL * 420800LL;
    cout << "Direto: " << resultado << endl;
    cout << "Função: " << calculo(200530, 420800) << endl;
    return 0;
}

long long calculo(long long a, long long b){
    return a * b;
}