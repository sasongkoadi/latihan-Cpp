#include <iostream>
#include <string>
using namespace std;
 //Compiler version g++ 4.9

 int main()
 {
 	string x;
 	
 	 int w;
 	
 	cout << "Write your word = "<<endl;
    cin >> x;
 	w = x.length()/2	;
 	
 	x.resize (w);
 	
 
 	cout << x<<endl;
 	
 	
 }