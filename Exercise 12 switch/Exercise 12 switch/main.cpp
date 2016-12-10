//
//  main.cpp
//  Exercise 12 switch
//
//  Created by Sasongko Adi on 26/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int d,bulan,tahun,kabisat1;
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
    
    switch (d) {
        case 1:
            cout << " Kamu memilih makanan " << e << endl;
            break;
            
        case 2:
            cout << " Kamu memilih makanan " << f << endl;
            break;
            
        case 3:
            cout << " Kamu memilih makanan " << g << endl;
            break;
            
        case 4:
            cout << " Kamu memilih makanan " << h << endl;
            break;
            
        case 5:
            cout << " Kamu memilih makanan " << i << endl;
            break;
            
        case 6:
            cout << " Kamu memilih makanan " << j << endl;
            break;
            
            
        default:
            cout << "Kamu Salah Memilih " << endl;
            break;
    }
    
    
    cout << endl<< endl<< endl;
    
    
    // Exercise 13
    
    
    cout << "Aplikasi Perhitungan Jumlah Hari Pada Setiap Tahun " << endl << endl;
    
    
    cout << "Masukkan tahun (angka) = ";
    cin >> tahun;
    cout << "Masukkan bulan (angka) = ";
    cin >> bulan;
    
    
    
    cout << endl << endl;

    
    
    
    kabisat1=tahun%100 && tahun%400;
    
    
    
    switch (bulan) {
        case 1:
            cout << " Bulan Januari terdiri dari 31 Hari "<< endl;
            break;
            
        case 3:
            cout << "Pada "<< tahun << " bulan Maret terdiri dari 31 Hari "<< endl;
            break;
            
        case 4:
            cout << "Pada "<< tahun << " bulan April terdiri dari 30 Hari "<< endl;
            break;
            
        case 5:
            cout << "Pada "<< tahun << " bulan Mei terdiri dari 31 Hari "<< endl;
            break;
            
        case 6:
            cout << "Pada "<< tahun << " bulan Juni terdiri dari 30 Hari "<< endl;
            break;
            
        case 7:
            cout << "Pada "<< tahun << " bulan Juli terdiri dari 31 Hari "<< endl;
            break;
            
        case 8:
            cout << "Pada "<< tahun << " bulan Agustus terdiri dari 31 Hari "<< endl;
            break;
            
        case 9:
            cout << "Pada "<< tahun << " bulan September terdiri dari 30 Hari "<< endl;
            break;
            
        case 10:
            cout << "Pada "<< tahun << " bulan Oktober terdiri dari 31 Hari "<< endl;
            break;
            
        case 11:
            cout << "Pada "<< tahun << " bulan November terdiri dari 30 Hari "<< endl;
            break;
            
        case 12:
            cout << "Pada "<< tahun << " bulan Desember terdiri dari 31 Hari "<< endl;
            break;
            
        default:
            cout << "Bulan tidak lebih dari 12 ya :)"<< endl;
            break;

        case 2:
            
                if ((tahun%4==0) || (kabisat1==0)) {
            
                   
                    
                    cout << "Pada tahun "<< tahun << ", merupakan tahun kabisat sehingga "<< " bulan Februari terdiri dari 29 Hari "<< endl;
            
            
                }
            
                else
                {
                     cout << "Pada tahun "<< tahun << ", bukan tahun kabisat sehingga "<< " bulan Februari terdiri dari 28 Hari "<< endl;
                }

    
    }
    
    
    
    
    
   


    
    
}
