#include <iostream>
#include <string>
using namespace std;

bool esAnagrama(const string& cadena1, const string& cadena2) {
if (cadena1.size() != cadena2.size()) {
return false;
}

int contador1[256] = {0};
int contador2[256] = {0};

for (int i = 0; i < cadena1.size(); i++) {
contador1[cadena1[i]]++;
}

for (int i = 0; i < cadena2.size(); i++) {
contador2[cadena2[i]]++;
}

for (int i = 0; i < 256; i++) {
if (contador1[i] != contador2[i]) {
return false;
}
}

return true;
}

int main() {
string cadena1, cadena2;

cout<<"Ingrese la primera cadena:"<<endl;
getline(cin, cadena1);
cout<<"Ingrese la segunda cadena:"<<endl;
getline(cin, cadena2);

if (esAnagrama(cadena1, cadena2)) {
cout<<"Las cadenas son anagramas."<<endl;
} else {
cout<<"Las cadenas NO son anagramas."<<endl;
}

return 0;
}

