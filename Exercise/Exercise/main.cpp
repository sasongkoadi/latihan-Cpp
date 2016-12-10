//
//  main.cpp
//  Exercise
//
//  Created by Sasongko Adi on 25/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // exercise 1
 
    double inch, leng, convert, celcius, fahren, kelvin, x, y, plus, minus, multi, devine;
    int s, t, modul, a,b,c;
    
    inch= 2.45;
    
    cout << "Converter inch to centimeters " << endl;
    cout << "Input = ";
    cin >> leng;
    convert=leng*inch;
    cout << leng << " inch = " << convert << " centimeters " << endl<<endl;
    
    
    // exercise 2
   
    cout << "Celcius Tempertaure Convert Program " << endl;
    cout << "Input = ";
    cin >> celcius;
    fahren=celcius+32;
    kelvin=celcius+273.15;
    cout << celcius << " celcius = " << fahren << " fahrenheit " << endl;
    cout << celcius << " celcius = " << kelvin << " kelvin " << endl<< endl<<endl;
    
    // Exercise 3 - 6
    
    cout << "Selamat Datang di Aplikasi Calculator " << endl;;
    cout << "Input Number = ";
    cin >> x;
    cout << "Input Number = ";
    cin >> y;
    
    
    plus=x+y;
    minus=x-y;
    multi=x*y;
    devine=x/y;
    
    cout << "Hasil calculator " << endl;
    cout << x << " + " << y << " = " << plus << endl;
    cout << x << " - " << y << " = " << minus << endl;
    cout << x << " * " << y << " = " << multi << endl;
    cout << x << " / " << y << " = " << devine << endl<<endl<<endl;
    
    //Exercise 7
    
    cout << "Selamat Datang di Aplikasi Pembagian Sisa " << endl;;
    cout << "Input Number = ";
    cin >> s ;
    cout << "Input Number = ";
    cin >> t;
    
    modul=s%t;
    
    cout << "Sisa dari hasil bagi " << s << " % " << t << " = " << modul << endl<<endl<<endl;
    
    
    //Ecercise 8
    
    cout << "Masukkan 2 angka dengan aturan"<<endl;
    cout << "1. Input Angka Maksimal"<<endl;
    cout << "2. Input Angka Minimum"<<endl;
    cout <<endl<<endl;
    
    cout << "Input Angka Maksimal = "; cin>> a;
    cout << "Input Angka Minimum = "; cin>> b;
    
    c=(a+b)/2;
    cout << "Interval angka anda adalah = "<< a << " - " << b << endl;
    cout << "Dengan nilai tengah adalah = " << c << endl;
    
    if (c<a) {
        cout << c << " < " << a << " = Benar "<< endl;
    }
    
    if (c>b) {
        cout << c << " > " << b << " = Benar "<< endl<<endl<<endl;
    }
    
    
    
    //Exercise 9 dan 10
    
    cout << "Masukkan 3 angka dengan aturan"<<endl;
    cout << "1. Input Angka Maksimal"<<endl;
    cout << "2. Input Angka Minimum"<<endl;
    cout << "3. Input Angka Minimum"<<endl;
    cout <<endl<<endl;
    
    cout << "Input Angka Maksimal = "; cin>> a;
    cout << "Input Angka Minimum = "; cin>> b;
    cout << endl;
    
    if (b<a) {
        
         cout << "Input Angka  = "; cin>> c;
    
            if (c<=a && c>=b) {
                    cout <<"Angka"<<c << " merupakan bagian dari interval " << a << " - "<< b << endl<<endl;
                }
            else {
                    cout <<"Angka "<< c << " bukan bagian dari interval " << a << " - "<< b << endl<<endl;
                }

        
    }else{
        cout << "PROGRAM ERROR!!!! "<< endl;
        cout << "Angka ke-2 tidak boleh lebih besar dari angka ke-1 "<< endl<< endl;
    }
    
    
    //Exercise 11
    
    
    
}
