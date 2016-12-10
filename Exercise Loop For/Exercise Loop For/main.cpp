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
    
        
        double faktor[1],y;
    int a,b,c,e;
    
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
    
    
    
    cout << endl<< endl;
    
    cout << "Masukkan angka = "; cin >> a;
    
    cout << endl;
    
    b=a+4;
    e=a;
    
    for (int d=1; d<=e/4; d++)
        {
            for (c=a; c<b; c++)
            {
                cout << "*";
               
            }
            
            a=a-4;
            b=b-4;
            cout << endl;
        }
    
    
    
  
    /* for (int a=1; a<=y/5; a++)
        
    {
        for (int b=y/4; b>=1; b--)
            
        {
            cout << "*";
        }
        cout << endl;
    }
     
     
     if (y<=5)
     
     {
     
     for (int a=1; a<=1; a++)
     {
     for (int b=y; b>=1; b--)
     {
     cout << "*";
     }
     }
     
     }else if (y>=6&&y<=10)
     
     {}

    
    */






}


    
   
    
    
        
        
        
    
    
    
 
    

   

