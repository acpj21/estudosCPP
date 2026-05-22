#include <iostream>
using namespace std;

int main(){
    short x = 1;
    x = x + 32767;
    cout << "x = " << x << endl;
    cout << "Tamanho x: " << sizeof(x) << endl;

    int y = 2147483647;
    y = y +1;
    cout << "y = " << y << endl;
    cout << "Tamanho y: " << sizeof(y) << endl;

    long z = 2147483647;
    z = z +1;
    cout << "z = " << z << endl;
    cout << "Tamanho z: " << sizeof(z) << endl;

    return 0;
}