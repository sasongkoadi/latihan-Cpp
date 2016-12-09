#include <iostream>
#include <cstring>
#include <iomanip>


using namespace std;

 //Compiler version g++ 4.9

 int main()
 {
 	
    double jari;
    double phi=3.14;
    
    cin >> jari; 
    
    

				if(jari<=-1){
        jari=0;


    }
				cout << fixed;
				cout << setprecision(2);
    cout << (jari*jari)*phi;

 }
