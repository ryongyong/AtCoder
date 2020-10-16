#include<bits/stdc++.h>
using namespace std ;
using ll = long long  ;
const int MAX_A = 1000005 ; 

int main(){
  int N ; 
  cin >> N ; 
  vector<int> A(N) ; 
  vector<int> C(MAX_A) ; 
  
  bool pairwaise = 1 ; 
  for(int i = 0 ; i < N ; i++){
    cin >> A.at(i) ; 
    C.at(A.at(i))++ ; 
  }
  
  for(int i = 2 ; i < MAX_A ; i++){
    int cnt = 0 ; 
    for(int j = i ; j < MAX_A ; j += i ){
      cnt += C.at(j) ; 
    }
    if( cnt > 1) pairwaise = 0 ; 
  }
  
  if(pairwaise){
    cout << "pairwise coprime" << endl ; 
    return 0 ; 
  }
  
  int g = 0  ;
  
  for(int i = 0 ; i < N ; i++) g = gcd(g,A.at(i)) ; 
  
  if(g == 1) cout << "setwise coprime" << endl ; 
  else cout << "not coprime" << endl ; 
  
  return 0 ; 
  
  
}