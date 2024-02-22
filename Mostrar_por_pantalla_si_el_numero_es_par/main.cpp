#include <iostream>

using namespace std;
int main() {

    //Con un numero ingresado por el usuario mostrar por pantalla si el numero es par

    int numero, i=2;
    cout<<"Digite un numero para conocer si es par"<<endl;
    cin>>numero;

        if(numero%i == 0){
            cout<<"El numero: "<<numero<<" es par"<<endl;
        }else{
            cout<<"El numero: "<<numero<<" no es par"<<endl;
        }

    return 0;
}
