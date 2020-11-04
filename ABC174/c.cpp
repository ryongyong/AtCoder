#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int K ; 
  cin >> K ; 
  int64_t T = 7 ;  
  int cnt = 1 ;

  while( cnt   < 10000000 ){
    if(T%K == 0){
      cout << cnt  << endl ; 
      return 0 ; 
    }
    else if(T > K ){
      T = T%K ; 
    }         
    cnt++ ; 
    T = T*10 + 7 ; 
  }
  cout << "-1" << endl ; 
}

