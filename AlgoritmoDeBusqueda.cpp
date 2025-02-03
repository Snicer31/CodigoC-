#include <iostream>
using namespace std;

void ingresarDatos(int arreglo[10],int &tamaño);
void MostrarDatos(int arreglo[10],int &tamaño);
void Buscar_en_arreglo(int arreglo[10],int &buscar, int &tamaño,bool &bandera);

int main(){
    int arreglo[10];int tamaño,buscar;
    bool bandera;

    ingresarDatos(arreglo,tamaño);
    Buscar_en_arreglo(arreglo,buscar,tamaño,bandera);
    MostrarDatos(arreglo,tamaño);
    return 0;
}
void ingresarDatos(int arreglo[10],int &tamaño){
    cout << "Ingrese el numero de elementos que va ingresar" << endl;
    cin >> tamaño;

    for(int i = 0 ; i < tamaño ; i++){
        cout << "Elemento #" << i+1 << endl;
        cin>>arreglo[i];
    }
    cout<<endl;
}
void MostrarDatos(int arreglo[10], int &tamaño){
    cout<<"Los elementos que se ingresaron son:"<<endl;

    for(int i = 0 ; i < tamaño ; i++){
        cout <<"["<< arreglo[i]<<"]"<<" ";
    }
    cout<<endl;
}
void Buscar_en_arreglo(int arreglo[10],int &buscar, int &tamaño,bool &bandera){
    //La bandera se utiliza para saber si el elemento se encuentra en el arreglo
    bandera = false;

    cout<<"Ingrese el elemento que quiere buscar"<<endl;
    cin>>buscar;

    for(int i = 0; i < tamaño; i++){
        if(arreglo[i]==buscar){
            cout<<"El elemento buscado es: "<<arreglo[i]<<endl;
            bandera = true;
        }
    }
    // si el numero no se encuentra en el arreglo se activa este condicional
    if(bandera == false){
        cout<<"El elemento"<<" "<<buscar<<" "<<"no se encuentra en el arreglo"<<endl;
    }
}

