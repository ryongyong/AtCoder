#include<bits/stdc++.h>
using namespace std ; 

int main() {
  int K ;  
  string S ;
  cin >> K ;
  cin >> S ;
  
  if (S.size() > K){
    for (int i = 0 ; i < K ; i++ ){
    cout << S.at(i) ;
    }
    cout << "..." << endl ; 
  }
  else {
    cout << S << endl ; 
  } 
}