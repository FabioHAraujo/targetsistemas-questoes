#include <iostream>
using namespace std;

bool isFibonacci(int number) {
    int a = 0, b = 1, temp;

    while (b <= number) {
        if (b == number) {
            return true;
        }
        temp = a + b;
        a = b;
        b = temp;
    }
    return false;
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << "O número " << num << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << num << " NÃO pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
