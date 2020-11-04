#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int N ; 
  cin >> N ; 
  long long xorval = 0  ; 
  vector<int> A(N) ; 
  for(int i = 0 ; i < N ; i++){
    cin >> A.at(i) ; 
    xorval ^= A.at(i) ; 
  }
  
  for(int i = 0 ; i < N ; i++){
    cout << (A.at(i) ^= xorval ) << " " ; 
  }
}