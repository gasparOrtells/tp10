#include <iostream>
using namespace std;

double byteAKilobyte(double bytes) {
return bytes / 1024;
}

double terabyteAMegabyte(double terabytes) {
return terabytes * 1024 * 1024;
}

double gigabyteAPetabyte(double gigabytes) {
return gigabytes / 1024 / 1024;
}

int main() {
double cantidad;
int opcion;

cout<<"Selecciona una opción de conversión:"<<endl;
cout<<"1. Byte a Kilobyte"<<endl;
cout<<"2. Terabyte a Megabyte"<<endl;
cout<<"3. Gigabyte a Petabyte"<<endl;
cin>>opcion;

cout<<"Introduce la cantidad a convertir:";
cin>>cantidad;

if(opcion==1) {
cout<<cantidad<<" Bytes son "<<byteAKilobyte(cantidad)<<" Kilobytes"<<endl;
} else if(opcion==2) {
cout<<cantidad<<" Terabytes son "<<terabyteAMegabyte(cantidad)<<" Megabytes"<<endl;
} else if(opcion==3) {
cout<<cantidad<<" Gigabytes son "<<gigabyteAPetabyte(cantidad)<<" Petabytes"<<endl;
} else {
cout<<"Opción inválida"<<endl;
}

return 0;
}

