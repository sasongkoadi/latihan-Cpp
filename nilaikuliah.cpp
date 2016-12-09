#include <iostream>
using namespace std;
 //Compiler version g++ 4.9

 int main()
 {
 	double nilai[3],rata_rata;
    
    cin >> nilai[0];
    cin >> nilai[1];
    cin >> nilai[2];
    
    rata_rata=(nilai[0]+nilai[1]+nilai[2])/3;
    //cout << "rata rata = " << rata_rata;
    
    if (rata_rata>90&&rata_rata<=100){
   
    cout <<"A";
	}else if(rata_rata>80&&rata_rata<=90){
        
				cout <<"B";
    }else if(rata_rata>70&&rata_rata<=80){
        
				cout <<"C";
    }
    

 }