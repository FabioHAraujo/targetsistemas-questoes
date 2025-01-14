#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> faturamento = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0};
    vector<double> valoresValidos;

    for (double valor : faturamento) {
        if (valor > 0.0) {
            valoresValidos.push_back(valor);
        }
    }

    double menorValor = *min_element(valoresValidos.begin(), valoresValidos.end());
    double maiorValor = *max_element(valoresValidos.begin(), valoresValidos.end());
    double soma = 0.0;

    for (double valor : valoresValidos) {
        soma += valor;
    }

    double media = soma / valoresValidos.size();
    int diasAcimaMedia = 0;

    for (double valor : valoresValidos) {
        if (valor > media) {
            diasAcimaMedia++;
        }
    }

    cout << "Menor valor: " << menorValor << endl;
    cout << "Maior valor: " << maiorValor << endl;
    cout << "Dias acima da média: " << diasAcimaMedia << endl;

    return 0;
}
