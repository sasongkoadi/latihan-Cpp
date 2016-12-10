//
//  main.cpp
//  Exercise Calculator
//
//  Created by Sasongko Adi on 30/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double diameter, panjang, lebar, sisi;
    int a;
    
    char keputusan;
    
menu_utama:
    
    cout << "Aplikasi Menggitung Luas Bidang " << endl;
    cout << "1 - Persegi "<<endl;
    cout << "2 - Persegi Panjang "<<endl;
    cout << "3 - Lingkaran "<<endl;
    
    
    cout << " Pilih = " ;
    cin >> a;
    
    
    switch (a) {
        case 1:
            
        persegi:
            cout << endl << endl;
            cout << "Menghitung Luas Persegi"<< endl;
            cout << "Masukkan nilai sisi = "; cin >> sisi;
            cout << "Luas Persegi = " <<sisi<< " * "<< sisi << " = " << sisi*sisi<<endl;
            cout << endl << endl;
            cout << "Apakah kamu mau mengulang menghitung luas persegi ? (Y/N) =  "; cin >> keputusan;
            
            if (keputusan =='Y'||keputusan =='y') {
                goto persegi;
            } else {
                goto penutup;
            }
            
            break;
            
        case 2:
            
        persegi_panjang:
            cout << endl << endl;
            cout << "Menghitung Luas Persegi Panjang"<< endl;
            cout << "Masukkan nilai panjang = "; cin >> panjang;
            cout << "Masukkan nilai lebar = "; cin >> lebar;
            if (panjang<=lebar) {
                cout << "Panjang persegi tidak boleh kurang dari atau sama dengan lebar persegi" << endl;
            } else {
                cout << "Luas Persegi = " <<panjang<< " * "<<lebar<< " = " << panjang*lebar<<endl;
            }
            cout << endl << endl;
            
            cout << "Apakah kamu mau mengulang menghitung luas persegi panjang ? (Y/N) = "; cin >> keputusan;
            
            if (keputusan =='Y'||keputusan =='y') {
                goto persegi_panjang;
            } else {
                goto penutup;
            }
            
            
            break;
        case 3:
            
        lingkaran:
            cout << endl << endl;
            cout << "Menghitung Luas Persegi"<< endl;
            cout << "Masukkan nilai diameter = "; cin >> diameter;
            cout << "Luas Lingkaran = " << ((diameter/2)*(diameter/2))*3.14<<endl;
            cout << endl << endl;
            
            cout << "Apakah kamu mau mengulang menghitung luas lingkaran ? (Y/N) = "; cin >> keputusan;
            
            if (keputusan =='Y'||keputusan =='y') {
                goto lingkaran;
            } else {
                goto penutup;
            }
      
            break;
            
        default:
            cout << "Kamu memasukkan kode angka yang salah " << endl;
            cout << endl << endl;
            break;
    }
    
penutup:
    cout << endl << endl;
    cout << "Apakah kamu mau mengulang program ini (Y/N)? "; cin >> keputusan;
    
    if (keputusan =='Y'||keputusan =='y') {
        goto menu_utama;
    } else {
        cout << "Terima Kasih" << endl;
    }
    
    cout << endl << endl;
}
