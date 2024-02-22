#include <iostream>

using namespace std;
int main() {

    //Con un numero ingresado por el usuario calcular el factorial y mostrarlo por pantalla

    int numero, factorial=1;
    cout<<"Ingrese un numero para conocer su factorial"<<endl;
    cin>>numero;

    for(int i=1; i<=numero; i++){
        factorial=factorial*i;
    }
    cout<<"\nEl factorial del numero es: "<<factorial<<endl;

    return 0;
}
