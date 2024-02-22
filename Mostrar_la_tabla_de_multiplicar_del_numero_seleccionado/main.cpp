#include <iostream>

using namespace std;
int main() {

    //Con un numero ingresado por el usuario mostrar la tabla de multiplicar

    int numero;

    do{
        cout<<"Digita un numero para generar la tabla de multiplicar deseada\n";cin>>numero;
    }while((numero<1) || (numero>10));

    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }

    return 0;
}
