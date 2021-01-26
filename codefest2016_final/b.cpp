#include<bits/stdc++.h>
using namespace std ;

int main(){
  long long N ;
  cin >> N ; 


  vector<long long > tot(N+1) ; 
  for(int i = 1 ; i <= N ; i++){
    tot.at(i) = i *(i+1) ; 
    tot.at(i) /= 2 ; 
  }

  long long max_diff = 0 ; 

  for(int i = 1 ; i <= N ; i++){
    if(tot.at(i) >= N){
      max_diff = i ; 
      break ; 
    }
  }


  for(int i = max_diff ; i > 0 ; i--){
    if(N < i) continue  ;
    N -= i ;
    cout << i << endl;
    
  }

}