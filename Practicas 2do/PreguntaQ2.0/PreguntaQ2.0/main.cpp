//
//  main.cpp
//  PreguntaQ2.0
//
//  Created by Ronaldo Ortiz on 09/05/21.
//

#include <iostream>
using namespace std;

int main() {
   
    string comodin = "comodin";
    bool Lentes_comodin = 1;
    bool Cabello_Negro_Comodin = 1;
    bool Bigote_Comodin = 1;
    bool Hombre_comodin = 1;
    bool Ojos_cafe_comodin = 1;
    
    string Arturo = "arturo";
    bool Lentes_Arturo = 1;
    bool Cabello_negro_Arturo = 0;
    bool Bigote_Arturo = 1;
    bool Hombre_Arturo =  1;
    bool Ojos_cafe_Arturo = 1;
    
    string Mishel = "Mishel";
    bool Hombre_Mishel =  0;
    bool Lentes_Mishel = 1;
    bool Cabello_negro_Mishel = 0;
    bool Bigote_Mishel = 0;
    bool Ojos_cafe_Mishel = 1;
    
    string Alex = "Alex";
    bool Hombre_Alex = 1;
    bool Lentes_Alex = 0;
    bool Cabello_Negro_Alex = 0;
    bool Bigote_Alex = 1;
    bool Ojos_cafe_alex = 0;
    
    string Ale = "Ale";
    bool Hombre_Ale = 0;
    bool Lentes_Ale = 0;
    bool Cabello_Negro_Ale = 1;
    bool Bigote_Ale = 0;
    bool Ojos_cafe_Ale = 1;
    
    string Heriberto = "Heriberto";
    bool Hombre_Heriberto = 1;
    bool Lentes_Heriberto = 1;
    bool Cabello_negro_Heriberto = 1;
    bool Bigote_Heriberto = 1;
    bool Ojos_cafe_Heriberto = 1;
    
    cout<<"Usa 1 para Si o 0 para No"<<endl;
    cout<<"tu personaje es hombre?"<<endl;
    cin>>Hombre_comodin;
    cout<<"tu personaje tiene Lentes?"<<endl;
    cin>>Lentes_comodin;
    cout<<"Tu personaje tiene cabello negro?"<<endl;
    cin>>Cabello_Negro_Comodin;
    cout<<"tu personaje tiene bigote?"<<endl;
    cin>>Bigote_Comodin;
    cout<<"tu personaje tiene los ojos cafes?"<<endl;
    cin>>Ojos_cafe_comodin;
    
    if(Hombre_comodin==Hombre_Arturo&&Lentes_comodin==Lentes_Arturo&&Cabello_Negro_Comodin==Cabello_negro_Arturo&&Bigote_Comodin==Bigote_Arturo&&Ojos_cafe_comodin==Ojos_cafe_Arturo){
        cout<<"tu personaje es: "<<Arturo<<endl;}
    else if
    (Hombre_comodin==Hombre_Mishel&&Lentes_comodin==Lentes_Mishel&&Cabello_Negro_Comodin==Cabello_negro_Mishel&&Bigote_Comodin==Bigote_Mishel&&Ojos_cafe_comodin==Ojos_cafe_Mishel){
        cout<<"tu personaje es: "<<Mishel<<endl;}
        else if
            (Hombre_comodin==Hombre_Alex&&Lentes_comodin==Lentes_Alex&&Cabello_Negro_Comodin==Cabello_Negro_Alex&&Bigote_Comodin==Bigote_Alex&&Ojos_cafe_comodin==Ojos_cafe_alex){
                cout<<"Tu personaje es: "<<Alex<<endl;}
            else if
                (Hombre_comodin==Hombre_Ale&&Lentes_comodin==Lentes_Ale&&Cabello_Negro_Comodin==Cabello_Negro_Ale&&Bigote_Comodin==Bigote_Ale&&Ojos_cafe_comodin==Ojos_cafe_Ale){
                cout<<"Tu personaje es: "<<Ale<<endl;}
    else if
        (Hombre_comodin==Hombre_Heriberto&&Lentes_comodin==Lentes_Heriberto&&Cabello_Negro_Comodin==Cabello_negro_Heriberto&&Bigote_Comodin==Bigote_Heriberto&&Ojos_cafe_comodin==Ojos_cafe_Heriberto){
            cout<<"Tu personaje es: "<<Heriberto<<endl;}
    else {
        cout<<"No hay ningun personaje parecido"<<endl;
    }
  


return 0;
}
/*
    int a;
    cout<<"ingresa numero mayor a 1 pero menor a 3"<<endl;
    cin>>a;
    if (a>1&&a<3){
        cout<<"hola"<<endl;
    }
    else{
        cout<<"adios"<<endl;
    }
    */
    
