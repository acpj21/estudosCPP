#include <iostream>
using namespace std;

void UmTres();
void Dois();

int main(){
    cout << "Começando agora: " << endl;

    UmTres();

    cout << endl;

    cout << "Pronto!s" << endl;

    return 0;
}

void UmTres(){
    cout << "Um ";

    Dois();

    cout << "Três";
}

void Dois(){
    cout << "Dois ";
}