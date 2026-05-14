#include <iostream>
using namespace std;

int main(){

    int varShort, varInt, varLong, varLongLong, varTotal = 0;

    varShort = sizeof(short);
    varInt = sizeof(int);
    varLong = sizeof(long);
    varLongLong = sizeof(long long);
    varTotal = varShort + varInt + varLong + varLongLong;

    cout << "Short: " << varShort << endl;
    cout << "Int: " << varInt << endl;
    cout << "Long: " << varLong << endl;
    cout << "Long Long: " << varLongLong << endl;
    cout << "Total: " << varTotal << endl;

    return 0;
}