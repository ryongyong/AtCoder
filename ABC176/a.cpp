#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int N , X , T  ;
  cin >> N >> X >> T ; 
  
  if( N%X == 0 ){
    cout << (N/X)*T <<endl ; 
    return 0 ; 
  }
  cout << (N/X)*T + T << endl ; 
  
}