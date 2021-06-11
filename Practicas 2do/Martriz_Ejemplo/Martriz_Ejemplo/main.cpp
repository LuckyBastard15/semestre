
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>

using namespace std;

void imprimir(int** matriz,int nfilas,int ncolumnas)//recive variables
{
    //recorrer la matriz
    for (int i=0;i<nfilas;i++){
        for (int j=0; j<ncolumnas;j++){
            cout<< "["<<matriz[i][j]<<"]";
        }
        cout<<endl;
    }
    
}

int main() {
    
    
    int nfilas = 0, ncolumnas = 0;
    cout<<"ingresa el numero de filas: "<<endl;
    cin>>nfilas;
    cout<<"ingresa el numero de Columnas: "<<endl;
    cin>>ncolumnas;
    //crear la amtriz
    int **matriz = new int* [nfilas];
    // crear las columnas
    for (int i = 0;i<nfilas;i++)
    {
        matriz [i] = new int [ncolumnas];
    }
    //Asingar valores en su pocision
    for(int i= 0; i<nfilas;i++)
    {
        for (int j=0;j<ncolumnas;j++)
        {
            matriz[i][j] = rand()%9;
            
        }
    }
    imprimir(matriz,nfilas,ncolumnas);
    delete[]matriz;
    matriz = NULL;
    return 0;
}
