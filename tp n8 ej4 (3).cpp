#include <iostream>
#include <string>
using namespace std;

bool buscarPalabra(const string& cadena, const string& palabra) {
    size_t found = cadena.find(palabra);
    return found < cadena.size();
}

void imprimirResultado(bool buscada) {
if (buscada) {
cout<<"La palabra se encuentra en la cadena."<<endl;
} else {
cout<<"La palabra NO se encuentra en la cadena."<<endl;
}
}

int main() {
string cadena, palabra;

cout<<"Ingrese la cadena:"<<endl;
getline(cin, cadena);
cout<<"Ingrese la palabra a buscar:"<<endl;
getline(cin, palabra);
bool buscada = buscarPalabra(cadena, palabra);

imprimirResultado(buscada);

return 0;
}

