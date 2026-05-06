#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cout << "Tabuada de n" << endl;
    cout << "------------" << endl;

    cout << "Entre com um número n (0 a 9): ";
    cin >> n;

    for (int i = 0; i < 10; i++) {
        cout << n << " x " << i  << " = " << (n * i) << endl;
    }
}