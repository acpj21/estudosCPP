#include <iostream>
using namespace std;

int main(){
    int idade, dias = 0;

    cout << "Digite a sua idade em anos: " << endl;

    cin >> idade;

    cout << idade << " em anos equivalem a " << (idade * 365) << " dias." << endl;

    return 0;
}