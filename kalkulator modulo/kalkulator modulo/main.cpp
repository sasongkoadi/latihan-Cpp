//
//  main.cpp
//  kalkulator modulo
//
//  Created by Sasongko Adi on 26/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,modul1,modul2,modul3,modul4;
    
    
    
    cout << "Masukkan tahun = ";
    cin >> a;
    
    modul1=a%4;
    modul2=a%100;
    modul3=a%400;
    
    modul4=(modul2 || modul3);
    
    
    
    cout << "Hasil " << a << " % " << 4 << " = " << modul1<<endl;
    cout << "Hasil " << a << " % " << 100 << " = " << modul2<<endl;
    cout << "Hasil " << a << " % " << 400 << " = " << modul3<<endl;
    cout << ((a%4==0) || (modul4==0)) << endl;
    cout << modul4<< endl;
    
    
    
    
    
}
