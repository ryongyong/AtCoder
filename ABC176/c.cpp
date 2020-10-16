#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int64_t N ; 
  cin >> N ; 
  vector<int64_t> A(N) ;
  
  for(int i = 0 ; i < N ; i++){
    cin >> A.at(i) ; 
  }
  
  int64_t M = 0 ; 
  int64_t cnt = 0 ; 
  
  for(int64_t i = 0 ; i < N ; i++){
    M = max(M , A.at(i)) ; 
    
    if( M >= A.at(i) ){
      //cout << M - A.at(i) ; 
      cnt += M - A.at(i) ; 
    }
    
  }
  cout << cnt << endl ; 
}