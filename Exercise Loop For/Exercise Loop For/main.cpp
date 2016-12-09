//
//  main.cpp
//  Exercise Loop For
//
//  Created by Sasongko Adi on 06/12/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int faktor[100],x,y;
    
    
    cout << "Masukkan angka faktorisasi = "; cin >> y;
    
    
   /* for (x=0; x<y; x++) {
        
    
        
    }
    
    */
    
    
    for (x=0; x<y; x++) {
        
        for (int z=1; z<=y; z++) {
            
            faktor[x]=faktor[x]*(z);
            
            cout << "Faktorisasi " << z << "! = " << faktor[1] << endl;

        }
        
    }
    

   
    
    
    
}
