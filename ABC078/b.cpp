#include<bits/stdc++.h>
using namespace std ;

int main(){
  int X , Y , Z  ;
  cin >> X >> Y >> Z ;
  int T = 0 ; 
  for(int i = 0 ; i < 1000000 ; i++){
    T = Y*i + (i+1)*Z ; 
    if(T > X){
      cout << i-1 << endl; 
      break ; 
    }
  }
}