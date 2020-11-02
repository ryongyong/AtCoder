#include<bits/stdc++.h>
using namespace std ;
int main(){
  string S ; 
  cin >> S ; 
  vector<int> A(4);
  vector<char> op(3) ; 
  for(int i=0 ; i < 4 ; i++)  A.at(i) = S.at(i) - '0' ; 
  
 
  int sum = 0 ; 
  
  for(int i = 0 ; i < 8 ; i++){
    sum = A.at(0) ; 
    for(int j = 0 ; j < 3 ; j++){
      if(i &(1<<j)){
        op.at(j) = '+' ; 
        sum += A.at(j+1) ; 
      }
      else{
        op.at(j) ='-' ; 
        sum -= A.at(j+1) ; 
      }
    }
    if(sum == 7 ) break ; 
  }
  
  for(int i = 0 ; i < 3 ; i++){
    cout << A.at(i) << op.at(i) ; 
  }
  cout << A.at(3) << "=7" ; 
}