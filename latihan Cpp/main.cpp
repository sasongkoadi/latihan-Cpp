//
//  main.cpp
//  latihan Cpp
//
//  Created by Sasongko Adi on 02/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//


// iostream stand for input=output
//Variables
//INITIALIZATION
//address
//allocate
//Hungarian notation
#include <iostream>
using namespace std; //menghilangkan std::



int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!"<< endl<<endl;
    // Cout adalah Console Output

    
    
    
    // MATERI VARIABLE LATIHAN 1
    
    /*
    
    //Variables
    //INITIALIZATION
    //address
    //allocate
    //Hungarian notation
    int A = 10;
    //A = 4;
    //& (ampersand)
    //&name_of_variable;
 
    int Tanggal;
    int tanggalTua;
    int tanggal_tua;
    int tglTua
    
    
    cout << A << endl;
    cout << &A << endl;
    
    A = 10;
    cout << A << endl;
    cout << &A << endl<<endl << endl;
    
    
     1. Variables can't have the same name.
     2. Variables can't start from the number
     3. We can't use spaces
     4. Our variables should be self-descriptive
     5. Variables can't be constructed of special characters, keywords
     6. Variables sould be nouns
     */
    
    
    
    
    // BREAK FOR LATIHAN 2
    
    
    /*

    
    // Jenis Jenis Variable
    
    float a , b;
    float kali, bagi, tambah, kurang;
    string nama;
    int tanggal, tahun;
    string bulan, tempat_lahir;
    
     
    kali *= sama dengan kali = kali + 1
    bagi /= sama dengan bagi = bagi / 1
    kurang -= sama dengan kurang = kuramg - 1
    modulus %= sama dengan modulus = modulus % 1
    tambah += sama dengan tambah = tambah +1
    increment ++
    decrement --

    
    
    unsigned short f;
    
    cout << "Masukkan nama anda = ";
    cin >> nama;
    
    cout << "Tempat tanggal lahir anda (DD/JANUARY/YYYY)"<< endl;
    cout << "Tempat = ";
    cin >> tempat_lahir;
    cout << "Tanggal = ";
    cin >> tanggal;
    cout << "Bulan = ";
    cin >> bulan;
    cout<< "Tahun = ";
    cin >> tahun;
    
    cout << endl << endl;
    
    cout << "Masukkan angka ke-1 = ";
    cin >> a;
    
    cout << "Masukkan angka ke-2 = ";
    cin >> b;

    
    kali = a*b;
    bagi = a/b;
    kurang = a-b;
    tambah = a+b;
    
    //Bolean : true or false
    
    bool d = true;
    bool e = false;

    cout << "--------------------------" << endl;
    cout << "HASILNYA BRO" << endl;
    cout << "--------------------------" << endl << endl;
    
   
    cout << "Nama Anda = " << nama << endl;
    cout <<  tempat_lahir << " | " << tanggal << " - " << bulan << " - " << tahun << endl << endl;
    
    cout << " Angka ke-1 = " << a << endl;
    cout << " Angka ke-2 = " << b << endl<<endl;
    
    
    cout << "Hasil Perkalian = " << kali << endl;
    cout << "Hasil Pembagian = " << bagi << endl;
    cout << "Hasil Pertambahan = " << tambah << endl;
    cout << "Hasil Pengurangan = " << kurang << endl<< endl << endl;
    

    
    cout << "Hasil Dari Variable Bolean" << endl << endl;
    cout << d<< endl;
    cout << e << endl<< endl<< endl;
    
    
    // unsigned short adalah fungsi dengan nilai maksimal dan minmal dari variable short, int atau double
    
    cout << "Masukkan Jumlah Uang anda = ";
    cin >> f;
    cout << "Hasil Dari unsigned short int"<< endl;
    cout << "Uang anda sebanyak = " << f << endl<< endl<< endl;
     
     */
    
    
    
    // BREAK LATIHAN 3
    
    
    // Relation Operator ==, !=, >, <, >=, <=
    
    cout << "--------------------------" << endl;
    cout << "RELATION OPERATOR" << endl;
    cout << "--------------------------" << endl << endl;
    
    int o, p , q;
    
    o=10;
    p=9;
    q=10;
    
    cout << "Nilai o = "<< o << endl;
    cout << "Nilai p = "<< p << endl;
    cout << "Nilai q = "<< q << endl << endl;
    
    cout << "Nilai 1 = True/benar "<< endl;
    cout << "Nilai 0 = False/salah "<< endl << endl;
    
    cout << "o == p = " <<(o==p) << endl;
    cout << "o == q = " <<(o==q) << endl;
    cout << "p != q = " <<(p!=q) << endl;
    cout << "o != q = " <<(o!=q) << endl;
    cout << "! (o != q) = " << !(o!=q) << endl;
    cout << "! (o != p) = " << !(o!=p) << endl;
    cout << "! (p == q) = " << !(p==q) << endl<<endl;
    

    cout << "o > q = " <<(o > q) << endl;
    cout << "o < q = " <<(o < q) << endl;
    cout << "o > p = " <<(o > p) << endl;
    cout << "o < p = " <<(o < q) << endl<<endl;
    
    cout << "o >= q = " <<(o >= q) << endl;
    cout << "o <= q = " <<(o <= q) << endl;
    cout << "o <= p = " <<(o <= p) << endl;
    cout << "o >= p = " <<(o >= p) << endl<<endl;
    
    
    // BREAK LATIHAN 4
    
    /* 
     
     
     AND CONJUCTION &&
    
    
      5 < 7 && 7 != 10 Nilainya adalah benar karena 5 kurang dari 7 dan 7 tidak sama dengan 10
     
     expr1      expr2      result
        0          0        0
        1          0        0
        0          1        0
        1          1        1
     
     
     OR DISJUCTION ||
     
     5 > 7 ||  !(2!=2) Nilainya adalah benar karena 5 kurang dari 7 adalah salah atau  tidak benar 2 tidak sama dengan 2 adalah benar
     
     
     expr1         expr2        result
        0           0               0
        1           0               1
        0           1               1
        1           1               1
     
     
     */
    
    cout << (5 > 7 ||  ! (2!=2)) << endl;
    
    cout << (5 < 7 && 7!=10) << endl;
    
    
    
}
