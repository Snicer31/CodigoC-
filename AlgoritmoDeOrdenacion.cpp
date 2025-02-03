#include <iostream>
using namespace std;

void ingresarDatos(int arreglo[10],int &tamaño);
void MostrarDatos(int arreglo[10],int &tamaño);
void Ordenar_arreglo(int arreglo[10],int &tamaño,int &auxiliar);

int main(){
    int arreglo[10],tamaño,auxiliar;
    ingresarDatos(arreglo,tamaño);
    Ordenar_arreglo(arreglo,tamaño,auxiliar);
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
void Ordenar_arreglo(int arreglo[10],int &tamaño,int &auxiliar){
    for(int i = 0; i < tamaño-1 ; i++){
        for(int j = 0; j < tamaño-1 ; j++){
            if(arreglo[j]>arreglo[j+1]){

                auxiliar=arreglo[j];

                arreglo[j]=arreglo[j+1];

                arreglo[j+1]=auxiliar;

                auxiliar=0;

            }
        }
    }
}

void MostrarDatos(int arreglo[10], int &tamaño){
    cout<<"Los elementos que se ingresaron son:"<<endl;

    for(int i = 0 ; i < tamaño ; i++){
        cout <<"["<< arreglo[i]<<"]"<<" ";
    }
    cout<<endl;
}