#include<bits/stdc++.h>
using namespace std ;

int main(){
  int N ; 
  cin >> N ; 
  vector<long long > A(N) ; 
  for(int i = 0 ; i < N ; i++){
    cin >> A.at(i) ;
  }
  long long cnt = 0 ;
  for(int i = 0 ; i < N ; i++){
    if(i %2 == 0){
      cnt += A.at(i)*2 ; 
    }
    else{
      cnt -= A.at(i)*2 ; 
    }
  } 

  long long x = cnt/2 ;

  for(int i = 0 ; i < N ; i++){

    x = 2*A.at(i) - x ; 
    cout << 2*A.at(i) - x << " " ; 
  }


}