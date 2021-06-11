//
//  main.cpp
//  Examen 3ro
//
//  Created by Ronaldo Ortiz on 19/05/21.
//

#include <iostream>

using namespace std;
void imprimir(int **matriz,int filas, int columnas){
    //recorrer matriz
    for(int i=0;i<filas;i++) {
        for (int j=0;j<columnas;j++){
            cout<<"["<<matriz[i][j]<<"]"<<endl;
        }
        cout<<endl;
    }
}


int main() {
    
    int filas = 0, columnas = 0;
    
    cout<<"Ingresa las filas"<<endl;
    cin>>filas;
    cout<<"Ingresa las coumnas"<<endl;
    cin>>columnas;
    
    //creamos matriz
    int **matriz = new int* [filas];
    for(int i=0;i<filas;i++){
        matriz[i] = new int [columnas];
    }
    //asignar valor a posicion
    for(int i=0;i<filas;i++) {
        for (int j=0;j<columnas;j++){
            matriz[i][j] = rand()%9;
        }
      
    }
    imprimir(matriz, filas, columnas);
    delete[]matriz;
    matriz = NULL;
    
    return 0;
}
