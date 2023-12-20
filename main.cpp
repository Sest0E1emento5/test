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
     double c,a=2,b=4;
     c=b-(b-a)/2;
     while (b-a>epsilon) 
     {
         if (b*c<0) 
         {
             a=c;
             c=b-(b-a)/2;
         } else 
         {
             b=c;
             c=b-(b-a)/2;
         }
     }
     (cout<<c);
 return (0);
 }
