#include<bits/stdc++.h>
using namespace std ;

int main(){
  string S ; 
  cin >> S ; 
  
  int N = S.size() ; 
  
  if( S.at(N-1) == 's'){
    for(int i = 0 ; i < N ; i++) cout << S.at(i) ;
    cout << "es" << endl ; 
  }
  else {
    cout << S << "s" << endl ; 
  }

}