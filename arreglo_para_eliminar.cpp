#include <iostream>
using namespace std;

void Eliminar(int arreglo[5],int &indice);
void pedirIndice(int &indice);
void mostrar(int arreglo[5],int &indice);

/*Hacer una funcion que quite un elemento del arreglo*/

int main(){
     int arreglo[5]{1,2,3,4,5};
     int indice;
     pedirIndice(indice);
     Eliminar( arreglo,indice);
     mostrar( arreglo,indice);
     return 0;
}

//Funciones segundarias
void pedirIndice(int &indice){
    do{
     cout<<"Cual valor del indice del arreglo desea eliminar?"<<endl;
     cin>>indice;
      if(indice > 4 || indice < 0){
         cout<<"El indice indicado no existe en el arreglo!"<<endl;
      }
    }while(indice > 4 || indice < 0);
}
void Eliminar(int arreglo[5],int &indice){
    for(int i=0; i < 5 ; i++){
         if(i==indice){
            arreglo[i]=0;
         }
    }
}
void mostrar(int arreglo[5],int &indice){
    for(int i=0; i < 5; i++){
        if(i==0){
             cout<<"El arreglo es:"<<endl;
        }
         cout<<"["<<arreglo[i]<<"]";
    }
}
