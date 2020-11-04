#include<bits/stdc++.h>
using namespace std ; 

int main() {
  string S , T ; 
  int N ; 
  int C = 0 ;
  cin >> S >> T ; 
  
  N = S.size() ; 
  
  for (int i = 0 ; i < N ; i++){
    if (S.at(i) != T.at(i)){
      C++ ;  
    }
  }
  
  cout << C << endl ; 
}

