#include <iostream>
using namespace std;

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while (K < INDICE) {
        K++;
        SOMA += K;
    }

    cout << "O valor de SOMA é: " << SOMA << endl;
    return 0;
}
