#include<bits/stdc++.h>
using namespace std ; 

int main(){

  int cnt = 0 ; 
  string S ; 
  cin >> S ; 
  int N = S.size() ; 
  
  for(int i = 0 ; i < N ; i++){
    char A = S.at(i) ; 
    cnt += A - '0' ;
  }
  if((cnt % 9 )== 0){
    cout << "Yes" << endl;
    return 0 ;
  }
  else{
    cout << "No" << endl ; 
  }
}