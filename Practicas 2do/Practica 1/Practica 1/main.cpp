//
//  main.cpp
//  Practica 1
//
//  Created by Ronaldo Ortiz on 24/03/21.
//

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>

int main() {
    
    using namespace std;
    char mi_primer_cadena [] = "Hola mundo";
    int a , b , c;
    bool mi_primer_booleano = false;
    float mi_primer_flotante = 0.1;
    double mi_primer_double = 99999999999999;
    
    // insert code here...

//---------------------------------------------------------------------------
  //char
    
    cout<<"valor de Char: ";
    cout<<mi_primer_cadena;
    cout <<endl;
//------------------------------------------------------------------------
    //int
    cout <<endl;
    
    cout <<"Ingresa el valor de A: "; cin >>a;
    cout <<"Ingresa el valor de B: "; cin >>b;
    cout <<"Ingresa el valor de C: "; cin >>c;
    
    cout <<"los valores son " << "a = " << a <<"  " << "b = " << b << "  " <<"c = " << c <<"\n"<<"\n";
    
//------------------------------------------------------------------*/
    //Bool
    cout <<endl;
    
    cout <<"valor de tu booleano: ";
    cout <<mi_primer_booleano;
    
    cout <<endl;
//------------------------------------------------------------------*/
    //Float
    cout <<endl;
    
    cout <<"valor de float: ";
    cout << mi_primer_flotante;
    
    cout <<endl;
//------------------------------------------------------------------*/
    //Double
    cout <<endl;
    
    cout<<"valor de double: ";
    cout<<mi_primer_double;
    
    cout <<endl;
//------------------------------------------------------------------*/
    
    return 0;
}

/*
bool mi_primer_booleano = false;
int mi_primer_entero;
char mi_primer_cadena [] = "Hola mundo";
float mi_primer_flotante = 0.1;
double mi_primer_double = 99999999999999;;
long int x = 0;
short int y = 0;

*/
