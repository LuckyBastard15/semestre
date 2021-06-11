//
//  main.cpp
//  Practica 9
//
//  Created by Ronaldo Ortiz on 07/05/21.
//

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;
void imprimir(string* titulos, string* autores, int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<"el titulo del libro: "<<i+1<<"es: "<<endl;
        cout<<titulos[i]<<endl;
        cout<<"el autor del libro: "<<i+1<<"es: "<<endl;
        cout<<autores[i]<<endl;
    }
}

int main() {
    /*
    int caja;
    int* nombre_del_apuntador = & caja;
    
    cout<<"valor de la variable: "<<caja<<endl;
    *nombre_del_apuntador = 20;
    cout<<"valor de la variable "<<caja<<endl;
    cout<<"valor del puntero: "<<nombre_del_apuntador<<endl;
    cout<<"valor de la apuntador: "<<*nombre_del_apuntador<<endl;
    cout<<"valor de la variable: "<<&caja<<endl;
    */
    setlocale(P_ALL, "SPANISH");
    string* titulos = NULL;
    string* autores = NULL;
    
    int size = 0;
    cout<<"cuantos elementos quiere registrar: "<<endl;
    cin>>size;
    titulos = new string[size];
    autores = new string[size];
    cout<<"captura la informacion:"<<endl;
    for( int i=0; i<size; i++){ cout<<"ingresa el titulo del libro numero: "<<i+1<<endl;
        if(i==0){
            cin.ignore();
        }
        getline(cin,titulos[i]);
                cout<<"ingresa el autor del libro: "<<i+1<<endl; getline(cin,autores[i]);}
    imprimir(titulos, autores, size);
    


    return 0;
}
