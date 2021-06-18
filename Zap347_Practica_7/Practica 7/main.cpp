//
//  main.cpp
//  Practica 7
//
//  Created by Ronaldo Ortiz on 14/04/21.
//

#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    //Ciclos Anidados!!
        for(int C_externo = 0; C_externo<=10;C_externo++) //C_externo = C_externo + 1
        {
            for (int C_interno = 0; C_interno <= 10; C_interno++)
            {
                cout << "El contador Externo lleva: " << C_externo << endl;
                cout << "El contador Interno lleva: " << C_interno << endl;
            }
        }
    
    return 0;
}
