#include<bits/stdc++.h>
using namespace std ;

int main(){
  long long N ; 
  cin >> N ; 
  long long M = 2<<(N-1) ;
  vector<long long > A(M) ;
  long long MAX_rate = 0 , MAX_player;

  for(int i = 0 ; i < M ; i++){
    cin >> A.at(i) ; 
    //cout << A.at(i) ; 
    if(A.at(i) > MAX_rate){
      MAX_rate = A.at(i) ; 
      MAX_player = i ; 
    }
  }

  
  long long second_rate = 0 , second_player ;  
  if(MAX_player >= M/2){
    for(long long i = 0 ; i < M/2 ; i++){
      if(second_rate < A.at(i)){
        second_rate = max(second_rate , A.at(i)) ;
        second_player = i ; 
      }
    }
  }
  else{
    long long second_rate = 0 ; 
    for(long long i = M/2 ; i < M ; i++){
        if(second_rate < A.at(i)){
          second_rate = max(second_rate , A.at(i)) ;
          second_player = i ; 
      }
    }    
  }
  
  cout << second_player + 1 << endl;
  
      
}