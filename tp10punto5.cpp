#include <iostream>
#include <string>
using namespace std;

int main() {
double valor;
string desde, hacia;
cout<<"Ingresa el valor a convertir:"<<endl;
cin>>valor;
cout<<"Ingresa la moneda de origen (Dolar, Euro, Real):"<<endl;
cin>>desde;
cout<<"Ingresa la moneda de destino (Dolar, Euro, Real):"<<endl;
cin>>hacia;

double tasa_dolar_euro = 1119.00 / 995.50;
double tasa_dolar_real = 190.50 / 995.50 * 100;
double tasa_euro_real = 190.50 / 1119.00 * 100;

double resultado = valor;

if (desde == "dolar" && hacia == "euro")
resultado *= tasa_dolar_euro;
else if (desde == "euro" && hacia == "dolar")
resultado /= tasa_dolar_euro;
else if (desde == "real" && hacia == "dolar")
resultado /= tasa_dolar_real;
else if (desde == "dolar" && hacia == "real")
resultado *= tasa_dolar_real;
else if (desde == "real" && hacia == "euro")
resultado /= tasa_euro_real;
else if (desde == "euro" && hacia == "real")
resultado *= tasa_euro_real;
else {
cout<<"Opcion invalida"<<endl;
}

cout<<"El valor convertido es:"<<resultado<<endl;
return 0;
}


