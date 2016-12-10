//
//  main.cpp
//  Latihan Cpp ke-2
//
//  Created by Sasongko Adi on 22/11/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
 
    int a, b;
    int var_1, var_2;
    
    /*
    cout << "Enter Number 1 = ";
    cin >> a;
    
    cout << "Enter Number 2 = ";
    cin >> b;
    
    
    if (a>b) {
        cout << a <<" > "<<b<< endl;
    } else {
        cout << a<< " < " << b << endl;
    }
    */
    
    

    
    
    cout << "Enter Number A = ";
    cin >> a;
    
    cout << "Enter Number B = ";
    cin >>b;
    
    
    
    if (a > b) {
        cout << a << " > " << b << " = Benar"<< endl;
    }
    else if (a < b){
        cout << a << " < " << b << " = Benar"<< endl;
    }
    else if (a == b){
        cout << a << " == " << b << " = Benar" << endl;
    }
    
    if (a != b){
        cout << a << " != " << b << " = Benar" << endl;
    }
    
    
    var_1=a >= b;
    
    var_2=a <= b;
    
    
    if (var_1 || var_2) {
        cout << var_1 << " || " << var_2 << " = True "<< endl;
    } else {
        cout << var_1 << " || " << var_2 << " = False "<< endl;
    }
    
    if (var_1 && var_2) {
        cout << var_1 << " && " << var_2 << " = True "<< endl;
    } else {
        cout << var_1 << " && " << var_2 << " = False "<< endl;
    }
    
    
    
}
