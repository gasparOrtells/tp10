#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generar_aleatorio(int minimo, int maximo) {
    return rand() % (maximo - minimo + 1) + minimo;
}

int main() {
    srand(time(0));
    cout << generar_aleatorio(1, 100) << endl;
    return 0;
}

