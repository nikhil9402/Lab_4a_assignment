#include <iostream>
using namespace std;

int n;
bool even=0;

bool even_odd_function(int n){
       
 
       if (n%2==0)
          even=1;
            
        return even;
   }  


int main () {
        
        cout << "Enter any no.\n";
        cin >> n;
      
        even_odd_function(n);
         
        if (even)
        cout << n << " is even.\n";
         
        else
        cout << n << " is odd.\n";


return 0;
}
