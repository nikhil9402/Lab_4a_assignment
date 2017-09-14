#include <iostream>
using namespace std;

int max_function(int a,int b){
       int max;
        if (a>b)
            max=a;
        else 
            max=b;
     return max;
 }

int min_function(int a,int b){
        int min; 
        if (a<b)
            min=a;
        else 
            min=b;
     return min;
 }


int main () {
        int a,b;
        cout << "Enter any two no.\n";
        cin >> a >> b;


        cout << "Maximum of " << a << " and " << b << " is " << max_function(a,b) << endl;
        cout << "Minimum of " << a << " and " << b << " is " << min_function(a,b) << endl;



return 0;
}
