//
//  main.cpp
//  Membuat Bintang
//
//  Created by Sasongko Adi on 02/12/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int v,w,x,y,z;
    
    cout << "Masukkan jumlah bintang = " ; cin >> y;
    
    
    for (x=1; x<=y; x++) {
        
        for (z=1; z<=y-x; z++) {
            cout << "*";
        }
        cout << endl;
    }

    
    int i , j , k, l ;
    cout<<"Masukan tinggi segitiga ";
    cin>>l;
    for(i=l;i>=0;i--){
        for(j=i;j>=0;j--){
            cout<<" ";
        }
        for(k=1;k<=l-i;k++){
            cout<<"*";
        }
        for(k=1;k<l-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    }
    
   
    

