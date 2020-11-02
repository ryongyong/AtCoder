#include<bits/stdc++.h>
using namespace std ;

int main(){
  string S ;
  cin >> S ;
  int N = S.size() ; 
  int T = 0 ; 
  int X = 0 ; 
  for(int i = 0 ; i < N ; i++){
    T += S.at(i)-'0' ; 
    X += pow(10,N-i-1)*(S.at(i)-'0') ; 
  }
  if(X %T == 0 ) cout << "Yes" << endl;
  else cout << "No" << endl; 
}