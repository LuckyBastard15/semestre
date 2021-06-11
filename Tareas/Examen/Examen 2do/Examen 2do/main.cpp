//
//  main.cpp
//  Examen 2do
//
//  Created by Ronaldo Ortiz on 21/04/21.
//

#include <iostream>
using namespace std;
int main() {
    
    string a,b,c;
    int d = 0,e = 0,f = 0, total=0;
    
    cout <<"Sintomas"<<endl;
    cout<<"Fiebre"<<endl;
    cin>>a;
    if (a=="si"){
        a=d;
        d=1;
    }else{
        a=d;
        d=0;
    }
    cout<<"Toz seca"<<endl;
    cin>>b;
    if (b=="si"){
        b=e;
        e=1;
    }else{
        b=e;
        e=0;
    }
    cout<<"Dificultades para respirar"<<endl;
    cin>>c;
    if (c=="si"){
        c=f;
        f=1;
    }else{
        c=f;
        f=0;
    }
    
    total=d+e+f;
    if (total==3){
        cout<<"vaya al hospital"<<endl;
    }else{
        if (total==2){
            cout<<"quedate en casa"<<endl;
        }else{
            if (total==1){
                cout<<"puede ser solo gripa"<<endl;
            }else{
                cout<<"usted esta sano"<<endl;
            }
        }
    }
    
    return 0;
}
