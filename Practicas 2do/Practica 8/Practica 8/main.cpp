//
//  main.cpp
//  Practica 8
//
//  Created by Ronaldo Ortiz on 28/04/21.
//

#include <iostream>
using namespace std;
int main() {
    char Titulo[5];
    double fecha[5];
    char autor[5];
    
    cout<<"Ingrese el nombre del libro: "<<endl;
    cin.getline(Titulo,10);
    cout<<"Ingrese el autor del libro: "<<endl;
    cin.getline(autor,10);
    cout<<"Ingrese el año: "<<endl;
    cin>>fecha[4];
    
    cout<<"Libro: "<<endl;
    cout<<"Titulo: "<<Titulo<<endl;
    cout<<"El autor: "<<autor<<endl;
    cout<<"Se publico en: "<<fecha[4]<<endl;
    
    
    return 0;
}
