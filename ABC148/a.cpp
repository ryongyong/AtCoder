#include<bits/stdc++.h>
using namespace std ; 

int main() {
  int A ,B ; 
  cin >> A >> B ;
  
  if( A == 1){
    if (B == 2){
      cout << 3 << endl ; 
    }
  else {
      cout << 2 << endl ; 
    }
  }
    
  else if (A == 2){
    if (B==1){
      cout << 3 << endl ; 
    }
    else {
    cout << 1 << endl ; 
    }
  }
  
  else if (A == 3){
    if (B==2){
      cout << 1 << endl ; 
    }
    else {
      cout << 2 << endl ; 
    }
  }
  
}