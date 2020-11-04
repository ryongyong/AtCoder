#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int64_t N ,T=1 ; 
  cin >> N ; 
  vector<int64_t> A(N) ;

  for(int i = 0 ; i < N ; i++){
    cin >> A.at(i) ; 
    if(A.at(i) == 0 ){
      cout << 0 << endl ; 
      return 0 ; 
    }
  }
  
  for(int i = 0 ; i < N ; i++){
    if(A.at(i) > 1000000000000000000/T){
      cout << "-1" << endl ; 
      return 0 ; 
    }
    T *= A.at(i) ;     
  }
    cout << T << endl;
}