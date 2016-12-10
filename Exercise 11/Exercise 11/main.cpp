//
//  main.cpp
//  Exercise 11
//
//  Created by Sasongko Adi on 26/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
  
    // Exercise 11
    
    int d;
    string e, f, g, h, i, j;

    
    
    
    
    cout << "Piliha Makanan Yang Kamu Sukai"<<endl;
    cout << "1 - Sate "<<endl;
    cout << "2 - Gulai "<<endl;
    cout << "3 - Kambing Guling"<<endl;
    cout << "4 - Siomay"<<endl;
    cout << "5 - Cie Mie"<<endl;
    cout << "6 - Nasi Kuning"<<endl;
    
    e="Sate";
    f="Gulai";
    g="Kambing Guling";
    h="Siomay";
    i="Cie Mie";
    j="Nasi Kuning";
    
    cout << endl << endl ;
    cout << "Silahkan Pilih makanan = ";
    cin >> d;
    
    
    
    if (d<=6 && d!=0) {
        if (d==1) {
            cout << " Kamu memilih makanan " << e << endl;
        }
        else if (d==2){
            cout << " Kamu memilih makanan " << f << endl;
        }
        
        else if (d==3){
            cout << " Kamu memilih makanan " << g << endl;
            
        }
        else if (d==4){
            cout << " Kamu memilih makanan " << h << endl;
            
        }
        else if (d==5){
            cout << " Kamu memilih makanan " << i << endl;
        }
        else if (d==6){
            cout << " Kamu memilih makanan " << j << endl;
        }
        
    }
        
        
    else {
            cout << "Anda Salah Memilih " << endl<<endl;
        }

        
    
}
