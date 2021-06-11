//
//  main.cpp
//  Matriz dinamica
//
//  Created by Ronaldo Ortiz on 09/05/21.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


void pedirdatos();
void mostrar_matriz(int **,int,int);

int **matriz, nfilas, ncolumnas;

int main() {
    pedirdatos();
    mostrar_matriz(matriz,nfilas,ncolumnas);
   
    //liberar la memoria utilizada
    for(int i=0;i<nfilas;i++){
        delete[] matriz[i];
    }
    delete []matriz;
    
    getchar();
    return 0;
}
     
void pedirdatos(){
    cout<<"Numero de Filas: "<<endl;
    cin>>nfilas;
    cout<<"Numero de Columnas: "<<endl;
    cin>>ncolumnas;
    //reservar memoria para la matriz final
    matriz = new int*[nfilas];//reservar memoria para las filas
    for(int i=0;i<nfilas;i++){
        matriz[i]= new int [ncolumnas];
    }
    
    cout<<"\nElementos de la Matriz: ";
    for(int i=0; i<nfilas; i++){
        for(int j=0;j<ncolumnas;j++){
            cout<<"Digite un numero["<<i<<"]""["<<j<<"]" ;
            cin>>*(*(matriz+i)+j);
        }
    }
}

void mostrar_matriz(int ** matriz,int nfilas, int ncolumnas){
    cout<<"Imprimiendo matriz "<<endl;
    for (int i=0;i<nfilas;i++){
        for (int j=0;j<ncolumnas;j++){
            cout<<*(*(matriz+i)+j);//matriz[i][j]
        }
        cout<<"\n";
    }
}


