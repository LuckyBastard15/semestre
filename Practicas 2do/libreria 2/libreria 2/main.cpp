#include <iostream>
using namespace std;

int main() {
    
    string titulos[5], autores[5],año[5];
    
    for(int i=0;i<3;i++){
    cout<<"Ingresa el autor del libro: "<<endl;
        cout<<"\n****** libro"<<i + 1 <<" ********\n";
        cout<<"Titulo: "<<endl;
        getline(cin,titulos[i]);
        cout<<"Autor: "<<endl;
        getline(cin,autores[i]);
        cout<<"Año: "<<endl;
        getline(cin,año[i]);
        cout<<endl;
        cout<<endl;
    }
    for(int i =0; i<3;i++){
        cout<<"los libros son: "<<endl;
        cout<<"el libro "<<i+1<<" es: "<<endl;
        cout<<"El titulo del libro "<<i+1<<" es: "<<titulos[i]<<endl;
        cout<<"El autor de "<<titulos[i]<<" es: "<< autores[i]<<endl;
        cout<<"El año del libro "<<titulos[i]<<" es: "<<año[i]<<endl;
        cout<<endl;
        /*
        cout<<"el libro 2 es: "<<endl;
        cout<<"El titulo del libro 2 es: "<<titulos[1]<<endl;
        cout<<"El autor del libro: "<<titulos[1]<< autores[1]<<endl;
        cout<<"El año del libro "<<titulos[1]<<" es: "<<año[1]<<endl;
        cout<<endl;
        cout<<"el libro 3 es: "<<endl;
        cout<<"El titulo del libro 3 es: "<<titulos[2]<<endl;
        cout<<"El autor del libro: "<<titulos[2]<< autores[2]<<endl;
        cout<<"El año del libro "<<titulos[2]<<" es: "<<año[2]<<endl;
        cout<<endl;
        cout<<"el libro 4 es: "<<endl;
        cout<<"El titulo del libro 1 es: "<<titulos[3]<<endl;
        cout<<"El autor del libro: "<<titulos[3]<< autores[3]<<endl;
        cout<<"El año del libro "<<titulos[3]<<" es: "<<año[3]<<endl;
        cout<<endl;
        cout<<"el libro 5 es: "<<endl;
        cout<<"El titulo del libro 1 es: "<<titulos[4]<<endl;
        cout<<"El autor del libro: "<<titulos[4]<< autores[4]<<endl;
        cout<<"El año del libro "<<titulos[4]<<" es: "<<año[4]<<endl;
         */
    }
    
    return 0;
}

