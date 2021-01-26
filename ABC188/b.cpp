#include<bits/stdc++.h>
using namespace std ;

int main(){
  int N ; 
  cin >> N ;
  vector<int> A(N) , B(N) ; 
  for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;
  for(int i = 0 ; i < N ; i++) cin >> B.at(i) ; 
  long long  ans = 0 ; 
  
  for(int i = 0 ; i < N ; i++){
     ans += A.at(i)*B.at(i) ; 
  }
  if(ans == 0 ){
    cout << "Yes"<< endl;
  }
  else{
    cout << "No" << endl;
  }
      
}