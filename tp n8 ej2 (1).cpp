#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int contarPalabras(const string& cadena) {
istringstream stream(cadena);
string palabra;
int contador = 0;

while (stream >> palabra) {
contador++;
}

return contador;
}

int main() {
string cadena;
cout<<"Introduce una cadena:"<<endl;
getline(cin, cadena);

int totalPalabras = contarPalabras(cadena);
cout<<"La cadena tiene "<<totalPalabras<<" palabras."<<endl;

return 0;
}

