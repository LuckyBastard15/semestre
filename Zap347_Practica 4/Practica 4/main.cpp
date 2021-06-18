//
//  main.cpp
//  Practica 4
//
//  Created by Ronaldo Ortiz on 09/04/21.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    using namespace std;
    
    int a , b , c;
    float d, e ;
    char nombre [40];
    double f, g ;
    
//-------------------------------------------------------------------------------------------------------
    //int
    
    cout<< "Bienvenido\n";
    cout<< "ingresa valores para a ";
    cin>> a;
    cout<< "ingresa valores para b ";
    cin>> b;
    cout<< "ingresa valores para c ";
    cin>> c;
    cout<<endl;
//-------------------------------------------------------------------------------------------------------
    //Impresion en pantalla de int
    
    cout<< "el valor de a es: "<<a <<endl;
    cout<< "el valor de b es: "<<b <<endl;
    cout<< "el valor de c es: "<<c <<endl;
    cout<<endl;
    
//-------------------------------------------------------------------------------------------------------
    //float
    cout<<endl;
    cout<<"Suma,Resta, Multiplica y Divide tus numeros"<<endl;
    cout<<"Ingresa el primer numero ";
    cin>>d;
    cout<<"Ingresa el segundo numero ";
    cin>>e;
//-------------------------------------------------------------------------------------------------------
    //Impresion en pantalla de float
    cout<<endl;
    cout<< "Los valores son: "<<endl;
    cout<< "La Suma el total es: ";cout<< (d+e)<<endl;
    cout<< "La resta el total es: ;";cout<< (d-e)<<endl;
    cout<< "La Multiplicacion el total es: ";cout<<(d*e)<<endl;
    cout<< "La Division el total es: ";cout<<(d/e)<<endl;
    
//-------------------------------------------------------------------------------------------------------
    //Char
    cout<<endl;
    cout<<"ingrese el nombre que desea guardar: "<<endl;cin>>nombre;
    cout<<"El nombre que guardo es: " <<nombre<<endl;
    cout<<endl;
//-------------------------------------------------------------------------------------------------------
    //double
    cout<<endl;
    cout<<"Suma,Resta, Multiplica y Divide tus numeros"<<endl;
    cout<<"Ingresa el primer numero ";
    cin>>f;
    cout<<"Ingresa el segundo numero ";
    cin>>g;
    cout<<endl;
//-------------------------------------------------------------------------------------------------------
    //Impresion en pantalla de Double
    cout<<endl;
    cout<< "Los valores son : "<<endl;
    cout<< "La Suma el total es: ";cout<< (f+g)<<endl;
    cout<< "La resta el total es: ;";cout<< (f-g)<<endl;
    cout<< "La Multiplicacion el total es: ";cout<<(f*g)<<endl;
    cout<< "La Division el total es: ";cout<<(f/g)<<endl;
    cout<<endl;
//-------------------------------------------------------------------------------------------------------
    //string
    cout<<endl;
    string cadena1;
    cout<<"ingrese el valor de string: "<<endl; getline(cin,cadena1);
    cout<<"el valor de tu string es: "<<cadena1<<endl;
    cout<<endl;
    
    
    return 0;
}
