#include <iostream>
using namespace std;

int main() {

    //Generar las tablas de multiplicar del 4 y del 6

    int numero;

    do{
cout<<"Digite el numero 4 o 6 para generar su tabla\n";cin>>numero;
    }while((numero != 4) && (numero !=6 ));

    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }

    return 0;
}
