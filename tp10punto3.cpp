#include <iostream>
using namespace std;

int calcular_potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    cout << calcular_potencia(2, 5) << endl;
    return 0;
}

