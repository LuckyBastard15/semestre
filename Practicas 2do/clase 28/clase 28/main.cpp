//
//  main.cpp
//  clase 28
//
//  Created by Ronaldo Ortiz on 28/04/21.
//

#include <iostream>
using namespace std;
int main() {
    char array[9];
    int array2[49];
    bool array3[100];
    string array4[1000];
    float array5[2];
    double array6[5];
    
    string array7[6] = {"dato 0","eva","cerveros","antimo","yisus","felipe"};
    int array8[6] = {0,20,22,19,28,20};
    cout<<"Imprimir solo a eva"<<endl;
    cout<<"La alumna es "<<array7[1]<<endl;
    cout<<"Su edad es "<<array8[1]<<"años"<<endl;
    
    cout<<"el alumno es: "<<array7[0]<<endl;
    cout<<"su edad es: "<<array8[0]<<endl;
    //remplazar el valor
    array7[0] = "Miguel";
    array7[0] = 22;
    
    cout<<"el alumno es: "<< array7[0]<<endl;
    cout<<"la edad es: "<< array8[0]<<endl;
    
    //como imprimir todo el arreglo
    cout<<"los alumnos son: ";
    for (int i=0; i<6;i++){
        cout<<array7[i]<<endl;
    }
    
    
    return 0;
    
    
}

