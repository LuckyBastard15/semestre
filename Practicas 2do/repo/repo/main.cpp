//
//  main.cpp
//  repo
//
//  Created by Ronaldo Ortiz on 14/05/21.
//

#include <iostream>
using namespace std;
void imprimir(int matriz[3][3]){
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cout<<"["<<matriz[i][j]<<"]";
        }
        cout<<endl;
    }
}

int main() {
   
    
    //variable para matriz
    int matriz[3][3];
    
    //Metodo para rellenar
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            matriz[i][j] = 1;
        }
    
    }
    imprimir(matriz);
    
    return 0;

    
}
