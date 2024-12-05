#include <iostream>
using namespace std;

int mayor_de_tres(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    cout << mayor_de_tres(5, 10, 3) << endl;
    return 0;
}

