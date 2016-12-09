#include <iostream>
#include <string>
using namespace std;
 //Compiler version g++ 4.9

 int main() {
 	string x;
    string s;
 	
 	 int w,z,y;
 	
 	cout << "Write your word = "<<endl;
    cin >> x;
    
   w = x.length()	;
    
 
  
      for (y=1;y<=w;y++){
            
         s=x;
     					s.length();
        
        		s.resize(y);
 
   							cout << s<<endl;
        
   			 }
 	
 	
 }