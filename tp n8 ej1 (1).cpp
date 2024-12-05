#include <iostream>
using namespace std;

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

int main() {
int x, y, R;
char operacion;

cout<<"Ingresar primer dato:"<<endl;
cin>>x;
cout<<"Ingresar segundo dato:"<<endl;
cin>>y;

cout<<"Seleccionar la operacion (+, -, *, /):"<<endl;
cin>>operacion;

if (operacion=='+') {
R=suma(x, y);
cout<<"Resultado:"<<R<<endl;
} else if (operacion=='-') {
R=resta(x, y);
cout<<"Resultado:"<<R<<endl;
} else if (operacion=='*') {
R=multiplicacion(x, y);
cout<<"Resultado:"<<R<<endl;
} else if (operacion=='/') {
if (y!=0) {
R=division(x, y);
cout<<"Resultado:"<<R<<endl;
} else {
cout<<"Error: Division por cero no permitida"<<endl;
}
} else {
cout<<"Operacion no valida"<<endl;
}

return 0;
}

int suma(int a, int b) {
return a+b;
}

int resta(int a, int b) {
return a-b;
}

int multiplicacion(int a, int b) {
return a*b;
}

int division(int a, int b) {
return a/b;
}

