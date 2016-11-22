//
//  main.cpp
//  modulus operator
//
//  Created by Sasongko Adi on 18/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    short x, y;
    
   /* cout << "Masukkan angka pertama = ";
    cin >> x;
    
    cout << "Masukkan angka ke dua = ";
    cin >> y; */
    
    x=10;
    y=4;
    
    /* 10 % 4 = 2 mengapa? Karena 4 x ... = mendekati 10 ? maka jawabanya adalah 2
     sehingga hasilnya adalah = 10 - 8 = 2 */
    
    cout << x % y << endl << endl << endl; // Modular hanya bisa menggunakan integer
    
    
    x=1;
    y=5;
    
    /* 1 % 5 = 1 mengapa? Karena 5 x ... = mendekati 1 ? maka jawabanya adalah 0
     sehingga hasilnya adalah = 1 - 0 = 1 */
    
    cout << x % y << endl << endl << endl; // Modular hanya bisa menggunakan integer


    x=5;
    y=1;
    
    /* 5 % 1 = 0 mengapa? Karena 1 x ... = mendekati 10 ? maka jawabanya adalah 5
     sehingga hasilnya adalah = 5 - 5 = 0 */
    
    cout << x % y << endl << endl << endl; // Modular hanya bisa menggunakan integer
    
    x=9;
    y=2;
    
    /* 9 & 2 = 1 mengapa? Karena 2 x ... = mendekati 9 ? maka jawabanya adalah 4
     sehingga hasilnya adalah = 9 - 8 = 1 */
    
    cout << x % y << endl << endl << endl; // Modular hanya bisa menggunakan integer
    
    cout << "---------------------------------------"<< endl;
    cout << "Contoh Modulus Operator Bilangan ganjil"<< endl;
    cout << "---------------------------------------"<< endl << endl;
    
    cout << "Masukkan bilangan ganjil= ";
    cin >> x;
    cout << endl << endl << endl;
    
    
    cout << "Hasilnya adalah = " << x % 2 << endl << endl << endl; // Modular hanya bisa menggunakan integer
    
    cout << "---------------------------------------"<< endl;
    cout << "Contoh Modulus Operator Bilangan genap"<< endl;
    cout << "---------------------------------------"<< endl << endl;
    
    cout << "Masukkan bilangan genap = ";
    cin >> x;
    cout << endl << endl << endl;
    
    
    cout << "Hasilnya adalah = " << x % 2 << endl << endl << endl; // Modular hanya bisa menggunakan integer
   
    cout << "---------------------------------------"<< endl;
    cout << "Menetukan Bilangan Genap atau Ganjil"<< endl;
    cout << "---------------------------------------"<< endl << endl;
 
    
    cout << "Masukkan bilangan = ";
    cin >> x;
    cout << endl;
    
    
    if (x % 2 == 0) {
        cout << "Ini Bilangan genap "<< endl;
    }
    
    else {
        cout << "Ini Bilangan ganjil " << endl;
    }
    
}
