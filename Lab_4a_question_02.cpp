#include <iostream>
#include <cmath>
using namespace std;

float r,d,c,A;

float diameter_function(float r) {
      d=2*r;
   return d;
  }

float circumference_function(float r) {
       c=(2*3.14)*r;
    return c;
  }

float area_function(float r) {
       A=(3.14*r)*r;
    return A;
  }



int main () {
      cout << "Enter radius\n";
      cin >> r;
 
      diameter_function(r);
      circumference_function(r);
      area_function(r);

      cout << "Diameter = " << d << endl;
      cout << "circumference = " << c << endl;
      cout << "Area = " << A << endl;
return 0;
}
