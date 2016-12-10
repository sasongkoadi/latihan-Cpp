//
//  main.cpp
//  Latihan Conditioan Operation
//
//  Created by Sasongko Adi on 29/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    
    
    // Exercise 1
    int x,y,z,a;
    
    string u;
    
    
    
    
    
    
    
    cout << "Input Nilai Maksimal, Minimal dan nilai diantara keduanya " << endl;
    cout << "----------------------------------------------------------"<< endl;
    
    cout << "Input Nilai Maksimal = ";
    cin >> x;
    
    cout << "Input Nilai Minimal = ";
    cin >> y;
    
    cout << "Input Nilai diantara maksimal dan minimal = ";
    cin >> z;
    
    cout << endl;
    
    string message2 = ( x <= y && y >= x )? "Kamu salah input angka bro ": "";
    
    string message = (z <= x && z >= y) ? "berada pada interval nilai " : "tidak berada pada interval nilai ";
    
    if (x <= y && y >= x) {
        cout <<message2 << endl << endl;
    } else {
        cout <<"Angka " << z << " " << message << y <<" - "<< x <<endl << endl;
    }
    
    
    //Exercise 2
    
    cout << "Input Buah Kesukaanmu " << endl;
    cout << "----------------------------------------------------------"<< endl;
    
    
    cout << "1-Pisang" << endl;
    cout << "2-Apel" << endl;
    cout << "3-Melon" << endl;
    cout << "4-Durian" << endl;
    cout << "5-Semangka" << endl;
    cout << "6-Jeruk" << endl;
    
    cout << "Input (angka) = ";
    cin >> a;
    
    
    switch (a) {
        case 1:
            u="Pisang"; ;
            break;
            
        case 2:
            u="Apel";
            break;
            
        case 3:
            u="Melon";
            break;
            
        case 4:
            u="Durian";
            break;
            
        case 5:
            u="Semangka";
            break;
            
        case 6:
            u="Jeruk";
            break;
    }
    
    
    string pesan = (a >= 1 && a <=6 )? "Buah Kesukaan mu adalah buah " + u : "Kamu tidak suka buah ya? ";
    
    cout << pesan << endl;
    
    
}
