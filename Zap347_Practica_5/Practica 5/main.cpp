//
//  main.cpp
//  Practica 5
//
//  Created by Ronaldo Ortiz on 10/04/21.
//

#include <iostream>

using namespace std;
int main() {
    string nombre1;

    cout << "Bienvenido\n";
    cout<<"ingrese el nombre que quiere confirmar "<<endl;
    cin>>nombre1;
    if (nombre1=="Mauricio") {
        cout<<"EL nombre es correcto "<<endl;
    } else {
        if (nombre1=="mauricio") {
            cout<<"EL nombre es correcto"<<endl;
        } else {
            cout<<"el nombre es incorrecto"<<endl;
        }
    }
    
    
    
    return 0;
}
