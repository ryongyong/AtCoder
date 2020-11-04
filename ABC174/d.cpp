#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int N ; 
  cin >> N ; 
  string S ;
  cin >> S ; 
  
  int T = S.size() ; 
  int A = 0 ; 
  
  for(int i = 0 ; i < T ; i++){
    if(S.at(i) == 'R' ){
      A++ ; 
    }
  }
  int P = 0 ; 
  for(int i = 0 ; i < A ; i++){
    if(S.at(i) == 'W'){
      P++ ; 
    }
  }

  cout << P << endl ; 
  
}