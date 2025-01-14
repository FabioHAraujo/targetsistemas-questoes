#include <iostream>
#include <string>
using namespace std;

string inverterString(string s) {
    string invertida = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        invertida += s[i];
    }
    return invertida;
}

int main() {
    string input;
    cout << "Digite uma string: ";
    cin >> input;

    string resultado = inverterString(input);
    cout << "String invertida: " << resultado << endl;

    return 0;
}
