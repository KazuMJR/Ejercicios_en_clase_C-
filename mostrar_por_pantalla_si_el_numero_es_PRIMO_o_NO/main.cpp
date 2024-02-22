#include <iostream>

using namespace std;
int main() {

    //Con un numero ingresado por el usuario mostrar por pantalla si el numero es PRIMO o NO

    int numero;
    cout<<"Ingrese un numero para conocer si es primo o no\n"<<endl;
    cin>>numero;

    bool primo =true;

    for(int i=2; i<numero; i++){
        if(numero%i == 0) primo = false;

    }

    if(primo == true) cout<<"El numero es primo";
    else cout<<"El numero no es primo";

    return 0;
}
