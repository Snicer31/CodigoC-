#include <iostream>
using namespace std;

int main(){
    int arreglo[] = {1,2,3,4,5,6,7,8,9,10};
    int mitad,primero = 0,ultimo = 9,numero;
    int  resultado = 0;

    cout<<"Ingrese el numero a buscar en el arreglo:"<<endl;
    cin>>numero;

    while(primero <= ultimo && resultado == 0){

        mitad = (primero + ultimo) / 2;

        if(numero == arreglo[mitad]){

            resultado = 1;
        }
        if(numero < arreglo[mitad]){
            ultimo = mitad-1;
        }
        if(numero > arreglo[mitad]){
            primero = mitad+1;
        }

    }

    if(numero == arreglo[mitad]){
        cout<<"El numero buscado esta en el indice: "<<mitad; 
    }else{
        cout<<"El numero no se encuentra en el arreglo"<<endl;
    }
    return 0;
}