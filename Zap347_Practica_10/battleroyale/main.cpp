//
//  main.cpp
//  battleroyale
//
//  Created by Ronaldo Ortiz on 31/05/21.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    srand( static_cast<unsigned int>(time(nullptr)));
    
    
    string David = "David";
    int David_fuerza = rand()%10;
    bool David_FZ = false;
    bool David_AG = false;
    bool David_BJ = false;
    bool David_FF = false;
    cout<<"FZ David:"<<David_fuerza<<",";
    
    string Didier ="Didier";
    int Didier_fuerza = rand()%10;
    bool Didier_FZ = false;
    bool Didier_AG = false;
    bool Didier_BJ = false;
    bool Didier_FF = false;
    cout<<" FZ Didier:"<<Didier_fuerza<<",";
    
    string Jesus_Ruiz = "Jesus Ruiz";
    int Jesus_fuerza = rand()%10;
    bool Jesus_Ruiz_FZ = false;
    bool Jesus_Ruiz_AG = false;
    bool Jesus_Ruiz_BJ = false;
    bool Jesus_Ruiz_FF = false;
    cout<<" FZ Jesus:"<<Jesus_fuerza<<",";
    
    string Miguel_santiago = "Miguel Santiago";
    int Miguel_fuerza = rand()%10;
    bool Miguel_santiago_FZ = false;
    bool Miguel_santiago_AG = false;
    bool Miguel_santiago_BJ = false;
    bool Miguel_santiago_FF = false;
    cout<<" FZ Miguel:"<<Miguel_fuerza<<",";
    
    string Francisco_Cebreros = "Francisco Cebreros";
    int Francisco_fuerza = rand()%10;
    bool Francisco_Cebreros_FZ = false;
    bool Francisco_Cebreros_AG = false;
    bool Francisco_Cebreros_BJ = false;
    bool Francisco_Cebreros_FF = false;
    cout<<" FZ Francisco:"<<Francisco_fuerza<<",";
    
    string Diego_Castañeda = "Diego Castañeda";
    int Diego_fuerza = rand()%10;
    bool Diego_castañeda_FZ = false;
    bool Diego_castañeda_AG = false;
    bool Diego_castañeda_BJ = false;
    bool Diego_castañeda_FF = false;
    cout<<" FZ DiegoC.:"<<Diego_fuerza<<",";
    
    
    string Eva_luna = "Eva Luna";
    int Eva_fuerza = rand()%10;
    bool Eva_luna_FZ = false;
    bool Eva_luna_AG = false;
    bool Eva_luna_BJ = false;
    bool Eva_luna_FF = false;
    cout<<" Eva:"<<Eva_fuerza<<endl;
    
    //fuerza

    if(David_fuerza>Didier_fuerza&&David_fuerza>Jesus_fuerza&&David_fuerza>Miguel_fuerza&&David_fuerza>Francisco_fuerza&&David_fuerza>Diego_fuerza&&David_fuerza>Eva_fuerza){
        
        David_FZ= true;
        cout<<"El oponente mas fuerte es: "<<David<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if (Didier_fuerza>David_fuerza&&Didier_fuerza>Jesus_fuerza&&Didier_fuerza>Miguel_fuerza&&Didier_fuerza>Francisco_fuerza&&Didier_fuerza>Diego_fuerza&&Didier_fuerza>Eva_fuerza){
        Didier_FZ = true;
        cout<<"El oponente mas fuerte es: "<<Didier<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Jesus_fuerza>David_fuerza&&Jesus_fuerza>Didier_fuerza&&Jesus_fuerza>Miguel_fuerza&&Jesus_fuerza>Francisco_fuerza&&Jesus_fuerza>Diego_fuerza&&Jesus_fuerza>Eva_fuerza){
        Jesus_Ruiz_FZ = true;
        cout<<"El oponente mas fuerte es: "<<Jesus_Ruiz<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Miguel_fuerza>David_fuerza&&Miguel_fuerza>Didier_fuerza&&Miguel_fuerza>Jesus_fuerza&&Miguel_fuerza>Francisco_fuerza&&Miguel_fuerza>Diego_fuerza&&Miguel_fuerza>Eva_fuerza){
        Miguel_santiago_FZ = true;
        cout<<"El oponente mas fuerte es: "<<Miguel_santiago<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if (Francisco_fuerza>David_fuerza&&Francisco_fuerza>Didier_fuerza&&Francisco_fuerza>Jesus_fuerza&&Francisco_fuerza>Miguel_fuerza&&Francisco_fuerza>Diego_fuerza&&Francisco_fuerza>Eva_fuerza){Francisco_Cebreros_FZ = true;
        cout<<"El oponente mas fuerte es: "<<Francisco_Cebreros<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Diego_fuerza>David_fuerza&&Diego_fuerza>Didier_fuerza&&Diego_fuerza>Jesus_fuerza&&Diego_fuerza>Miguel_fuerza&&Diego_fuerza>Francisco_fuerza&&Diego_fuerza>Eva_fuerza){
        Diego_castañeda_FZ = true;
        cout<<"El oponente mas fuerte es: "<<Diego_Castañeda<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Eva_fuerza>David_fuerza&&Eva_fuerza>Didier_fuerza&&Eva_fuerza>Jesus_fuerza&&Eva_fuerza>Miguel_fuerza&&Eva_fuerza>Francisco_fuerza&&Eva_fuerza>Diego_fuerza){
        
        Eva_luna_FZ = true;
        cout<<"El oponente mas fuerte es: "<<Eva_luna<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    
    else {cout<<"Hubo un empate de fuerza"<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    
    //Agilidad
    
    int David_agilidad = rand()%10;cout<<"AG David:"<<David_agilidad<<",";
    int Didier_agilidad = rand()%10;cout<<"AG Didier:"<<Didier_agilidad<<",";
    int Jesus_agilidad = rand()%10;cout<<"AG Jesus:"<<Jesus_agilidad<<",";
    int Miguel_agilidad = rand()%10;cout<<"AG Miguel:"<<Miguel_agilidad<<",";
    int Francisco_agilidad = rand()%10;cout<<"AG Francisco:"<<Francisco_agilidad<<",";
    int Diego_agilidad = rand()%10;cout<<"AG Diego:"<<Diego_agilidad<<",";
    int Eva_agilidad = rand()%10;cout<<"AG Eva:"<<Eva_agilidad<<endl;
    
    if (David_agilidad>Didier_agilidad&&David_agilidad>Jesus_agilidad&&David_agilidad>Miguel_agilidad&&David_agilidad>Francisco_agilidad&&David_agilidad>Diego_agilidad&&David_agilidad>Eva_agilidad){David_AG=true;
        cout<<"El oponente mas agil es: "<<David<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Didier_agilidad>David_agilidad&&Didier_agilidad>Jesus_agilidad&&Didier_agilidad>Miguel_agilidad&&Didier_agilidad>Francisco_agilidad&&Didier_agilidad>Diego_agilidad&&Didier_agilidad>Eva_agilidad){Didier_AG = true;
        cout<<"El oponente mas agil es: "<<Didier<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Jesus_agilidad>David_agilidad&&Jesus_agilidad>Didier_agilidad&&Jesus_agilidad>Miguel_agilidad&&Jesus_agilidad>Francisco_agilidad&&Jesus_agilidad>Diego_agilidad&&Jesus_agilidad>Eva_agilidad){Jesus_Ruiz_AG = true;
        cout<<"El oponente mas agil es: "<<Jesus_Ruiz<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if (Miguel_agilidad>David_agilidad&&Miguel_agilidad>Didier_agilidad&&Miguel_agilidad>Jesus_agilidad&&Miguel_agilidad>Francisco_agilidad&&Miguel_agilidad>Francisco_agilidad&&Miguel_agilidad>Eva_agilidad){Miguel_santiago_AG = true;
        cout<<"El oponente mas agil es: "<<Miguel_santiago<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Francisco_agilidad>David_agilidad&&Francisco_agilidad>Didier_agilidad&&Francisco_agilidad>Jesus_agilidad&&Francisco_agilidad>Miguel_agilidad&&Francisco_agilidad>Diego_agilidad&&Francisco_agilidad>Eva_agilidad){Francisco_Cebreros_AG = true;
        cout<<"El oponente mas agil es: "<<Francisco_Cebreros<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Diego_agilidad>David_agilidad&&Diego_agilidad>Didier_agilidad&&Diego_agilidad>Jesus_agilidad&&Diego_agilidad>Francisco_agilidad&&Diego_agilidad>Miguel_agilidad&&Diego_agilidad>Eva_agilidad){ Diego_castañeda_AG = true;
        cout<<"El oponente mas agil es: "<<Diego_Castañeda<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Eva_agilidad>David_agilidad&&Eva_agilidad>Didier_agilidad&&Eva_agilidad>Jesus_agilidad&&Eva_agilidad>Miguel_agilidad&&Eva_agilidad>Francisco_agilidad&&Eva_agilidad>Diego_agilidad){
        Eva_luna_AG = true;
        cout<<"El oponente mas agil es: "<<Eva_luna<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else {
        cout<<"Hubo un empate de agilidad"<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
       
    //Blindaje
    
    int David_blindaje = rand()%10;cout<<"BJ David:"<<David_blindaje<<",";
    int Didier_blindaje = rand()%10;cout<<"BJ Didier:"<<Didier_blindaje<<",";
    int Jesus_blindaje = rand()%10;cout<<"BJ Jesus:"<<Jesus_blindaje<<",";
    int Miguel_blindaje = rand()%10;cout<<"BJ Miguel:"<<Miguel_blindaje<<",";
    int Francisco_blindaje = rand()%10;cout<<"BJ Francisco:"<<Francisco_blindaje<<",";
    int Diego_blindaje = rand()%10;cout<<"BJ Diego:"<<Diego_blindaje<<",";
    int Eva_blindaje = rand()%10;cout<<"BJ Eva:"<<Eva_blindaje<<endl;
    
    if (David_blindaje>Didier_blindaje&&David_blindaje>Jesus_blindaje&&David_blindaje>Miguel_blindaje&&David_blindaje>Francisco_blindaje&&David_blindaje>Diego_blindaje&&David_blindaje>Eva_blindaje){
        David_BJ = true;
        cout<<"El oponente con mas blindaje es: "<<David<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Didier_blindaje>David_blindaje&&Didier_blindaje>Jesus_blindaje&&Didier_blindaje>Miguel_blindaje&&Didier_blindaje>Francisco_blindaje&&Didier_blindaje>Diego_blindaje&&Didier_blindaje>Eva_blindaje){
        Didier_BJ = true;
        cout<<"El oponente con mas blindaje es: "<<Didier<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Jesus_blindaje>David_blindaje&&Jesus_blindaje>Didier_blindaje&&Jesus_blindaje>Miguel_blindaje&&Jesus_blindaje>Francisco_blindaje&&Jesus_blindaje>Diego_blindaje&&Jesus_blindaje>Eva_blindaje){
        Jesus_Ruiz_BJ = true;
        cout<<"El oponente con mas blindaje es: "<<Jesus_Ruiz<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if (Miguel_blindaje>David_blindaje&&Miguel_blindaje>Didier_blindaje&&Miguel_blindaje>Jesus_blindaje&&Miguel_blindaje>Francisco_blindaje&&Miguel_blindaje>Francisco_blindaje&&Miguel_blindaje>Eva_blindaje){
        Miguel_santiago_BJ = true;
        cout<<"El oponente con mas blindaje es: "<<Miguel_santiago<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Francisco_blindaje>David_blindaje&&Francisco_blindaje>Didier_blindaje&&Francisco_blindaje>Jesus_blindaje&&Francisco_blindaje>Miguel_blindaje&&Francisco_blindaje>Diego_blindaje&&Francisco_blindaje>Eva_blindaje){
        Francisco_Cebreros_BJ = true;
        cout<<"El oponente con mas blindaje es: "<<Francisco_Cebreros<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Diego_blindaje>David_blindaje&&Diego_blindaje>Didier_blindaje&&Diego_blindaje>Jesus_blindaje&&Diego_blindaje>Francisco_blindaje&&Diego_blindaje>Miguel_blindaje&&Diego_blindaje>Eva_blindaje){
        Diego_castañeda_BJ = true;
        cout<<"El oponente con mas blindaje es: "<<Diego_Castañeda<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Eva_blindaje>David_blindaje&&Eva_blindaje>Didier_blindaje&&Eva_blindaje>Jesus_blindaje&&Eva_blindaje>Miguel_blindaje&&Eva_blindaje>Francisco_blindaje&&Eva_blindaje>Diego_blindaje){
        Eva_luna_BJ = true;
        cout<<"El oponente con mas blindaje es: "<<Eva_luna<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else {cout<<"Hubo un empate de blindaje"<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    
    //velocidad
    
    int David_velocidad = rand()%10;cout<<"FF David:"<<David_velocidad<<",";
    int Didier_velocidad = rand()%10;cout<<"FF Didier:"<<Didier_velocidad<<",";
    int Jesus_velocidad = rand()%10;cout<<"FF Jesus:"<<Jesus_velocidad<<",";
    int Miguel_velocidad = rand()%10;cout<<"FF Miguel:"<<Miguel_velocidad<<",";
    int Francisco_velocidad = rand()%10;cout<<"FF Francisco:"<<Francisco_velocidad<<",";
    int Diego_velocidad = rand()%10;cout<<"FF Diego:"<<Diego_velocidad<<",";
    int Eva_velocidad = rand()%10;cout<<"FF Eva:"<<Eva_velocidad<<endl;
    
    if (David_velocidad>Didier_velocidad&&David_velocidad>Jesus_velocidad&&David_velocidad>Miguel_velocidad&&David_velocidad>Francisco_velocidad&&David_velocidad>Diego_velocidad&&David_velocidad>Eva_velocidad){
        David_FF = true;
        cout<<"El oponente mas fast es: "<<David<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Didier_velocidad>David_velocidad&&Didier_velocidad>Jesus_velocidad&&Didier_velocidad>Miguel_velocidad&&Didier_velocidad>Francisco_velocidad&&Didier_velocidad>Diego_velocidad&&Didier_velocidad>Eva_velocidad){
        Didier_FF = true;
        cout<<"El oponente mas fast es: "<<Didier<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Jesus_velocidad>David_velocidad&&Jesus_velocidad>Didier_velocidad&&Jesus_velocidad>Miguel_velocidad&&Jesus_velocidad>Francisco_velocidad&&Jesus_velocidad>Diego_velocidad&&Jesus_velocidad>Eva_velocidad){
        Jesus_Ruiz_FF = true;
        cout<<"El oponente mas fast es: "<<Jesus_Ruiz<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if (Miguel_velocidad>David_velocidad&&Miguel_velocidad>Didier_velocidad&&Miguel_velocidad>Jesus_velocidad&&Miguel_velocidad>Francisco_velocidad&&Miguel_velocidad>Francisco_velocidad&&Miguel_velocidad>Eva_velocidad){
        Miguel_santiago_FF = true;
        cout<<"El oponente mas fast es: "<<Miguel_santiago<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Francisco_velocidad>David_velocidad&&Francisco_velocidad>Didier_velocidad&&Francisco_velocidad>Jesus_velocidad&&Francisco_velocidad>Miguel_velocidad&&Francisco_velocidad>Diego_velocidad&&Francisco_velocidad>Eva_velocidad){
        Francisco_Cebreros_FF = true;
        cout<<"El oponente mas fast es: "<<Francisco_Cebreros<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    else if(Diego_velocidad>David_velocidad&&Diego_velocidad>Didier_velocidad&&Diego_velocidad>Jesus_velocidad&&Diego_velocidad>Francisco_velocidad&&Diego_velocidad>Miguel_velocidad&&Diego_velocidad>Eva_velocidad){
        Diego_castañeda_FF = true;
        cout<<"El oponente mas fast es: "<<Diego_Castañeda<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
        
    else if(Eva_velocidad>David_velocidad&&Eva_velocidad>Didier_velocidad&&Eva_velocidad>Jesus_velocidad&&Eva_velocidad>Miguel_velocidad&&Eva_velocidad>Francisco_velocidad&&Eva_velocidad>Diego_velocidad){
        
        Eva_luna_FF = true;
        cout<<"El oponente mas fast es: "<<Eva_luna<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
   
    else {cout<<"Hubo un empate de velocidad"<<endl;cout<<endl;
        cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;}
    
    //ganador
    
    if((David_FZ==true&&David_BJ==true)||(David_FZ==true&&David_FF==true)){
        cout<<"El ganador del Battledoyale:"<<David<<endl;}
    else if((Didier_FZ==true&&Didier_BJ==true)||(Didier_FZ==true&&Didier_FF==true)){
        cout<<"El ganador del Battleroyale es:"<<Didier<<endl;}
    else if((Jesus_Ruiz_FZ==true&&Jesus_Ruiz_BJ==true)||(Jesus_Ruiz_FZ==true&&Jesus_Ruiz_FF==true)){
        cout<<"El ganador del Battleroyale es:"<<Jesus_Ruiz<<endl;}
    else if((Miguel_santiago_FZ==true&&Miguel_santiago_BJ==true)||(Miguel_santiago_FZ==true&&Miguel_santiago_BJ==true)){cout<<"El ganador del Battleroyale es:"<<Miguel_santiago<<endl;}
    else if ((Francisco_Cebreros_FZ==true&&Francisco_Cebreros_BJ==true)||(Francisco_Cebreros_FZ==true&&Francisco_Cebreros_FF==true)){cout<<"El ganador del Battleroyale es:"<<Francisco_Cebreros<<endl;}
    else if ((Diego_castañeda_FZ==true&Diego_castañeda_BJ==true)||(Diego_castañeda_FZ==true&&Diego_castañeda_FF==true)){cout<<"El ganador del Battleroyale es:"<<Diego_Castañeda<<endl;}
    else if ((Eva_luna_FZ==true&&Eva_luna_BJ==true)||(Eva_luna_FZ==true&&Eva_luna_FF==true)){
        cout<<"La ganadora del Battleroyale es:"<<Eva_luna<<endl;}
    
    else {
        cout<<"Todos murieron, Nadie logro equiparse completamente..."<<endl;
        cout<<"Vuelvan a sus posiciones y a PELEAR!!"<<endl;cout<<endl;
    }
    return 0;
    }
        
   




    
