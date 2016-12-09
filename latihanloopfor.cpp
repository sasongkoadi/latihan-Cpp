#include <iostream>
using namespace std;

int main (){
    
double faktor[1],y;
    
    cout << "Ini adalah aplikasi Faktorisasi" << endl;

cout << "Masukkan angka = "; cin >> y;
    
    faktor[0]=1;
    for (double x = 2;x<=y;x++){
       
        faktor[0]=faktor[0]*x; 


    }

cout << " Faktorisasi " << y <<"! = " << faktor[0]<<endl;
    

    for (double z =y;z>1;z--){
        
    faktor[0]=faktor[0]/z;
        
    cout << " Faktorisasi " << z-1 <<"! = " << faktor[0]<<endl;
   
    }



}

