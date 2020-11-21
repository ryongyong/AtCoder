#include<bits/stdc++.h>
using namespace std ;

int main(){
  double xa , ya , xb , yb , xc , yc ; 
  cin >> xa >> ya >> xb >> yb >> xc >> yc ; 
  double a , b , c , d ; 
  a = xb - xa ; 
  b = yb - ya ; 
  c = xc - xa ; 
  d = yc - ya ; 
  
  cout <<fixed << setprecision(10) <<  abs(a*d - b*c)/2 << endl;
}