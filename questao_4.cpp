#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, double> faturamento = {
        {"SP", 67836.43},
        {"RJ", 36678.66},
        {"MG", 29229.88},
        {"ES", 27165.48},
        {"Outros", 19849.53}
    };

    double total = 0.0;
    for (auto& estado : faturamento) {
        total += estado.second;
    }

    cout << "Percentual de representação por estado:\n";
    for (auto& estado : faturamento) {
        double percentual = (estado.second / total) * 100;
        cout << estado.first << ": " << percentual << "%" << endl;
    }

    return 0;
}
