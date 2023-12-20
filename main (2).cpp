#include <cmath>
#include <iostream>
using namespace std;

double const epsilon = 3e-6; 
  double f(double x) 
  { 
   return 3*x-4*std::log(x)-5; 
  } 
  double dif(double x) 
  { 
   return 3-4/x; 
  } 
  double secdif(double x) 
  { 
   return 4/(x*x); 
  } 
   
 int main() 
 {
     double x,x0,a=2,b=4;
    x=b;
    x0=f(x);
    while (x-x0>epsilon) {
        x=x0;
        x0=f(x);
    }
     (cout<<x0);
 return (0);
 }

