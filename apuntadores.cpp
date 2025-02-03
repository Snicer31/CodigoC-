#include <iostream>
using namespace std;

int main(){
    string saludo = "hola mundo";
   
    string *apr;
    apr = &saludo;
    

    cout<<"La direccion de la variable es :"<<apr<<endl;
    cout<<"El valor de la variable es:"<<saludo<<endl;
    
}