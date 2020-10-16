#include<bits/stdc++.h>
using namespace std ;
const long long MOD = 1000000007 ; 
int main(){
  int S ; 
  cin >> S ; 
  vector<long long> dp(S+1) ; 
  dp.at(0) = 1 ; 
  for(int i = 1 ; i < S+1 ; i++){
    for(int j = 0 ; j < i-3+1  ; j++){
      dp.at(i) += dp.at(j) ; 
      dp.at(i) %= MOD ;   
    }
  }
  
  cout << dp.at(S) << endl; 
}