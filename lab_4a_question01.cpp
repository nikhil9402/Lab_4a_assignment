#include <iostream>
using namespace std;

int a,cube;

void print_function(){
    cout << "Enter any no.\n" ;
    cin >> a;
   }

int cube_function (int a){
     
    cube = (a*a)*a;

   return cube;
   }

int main () {

  // cout << "Enter any no.\n" ;
  // cin >> a;
   print_function();
   cube_function(a);

   cout << "Cube of " << a << " is " << cube;
 return 0;
}
