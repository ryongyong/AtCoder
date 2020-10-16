#include<bits/stdc++.h>
using namespace std ;

int main(){
  string s,t ; 
  cin >> s ; 
  cin >> t ;
  int ans = 0 ; 
  int N = s.size() ; 
  int M = t.size() ; 
 
  for(int i = 0 ; i <= N-M ; i++){
    int cnt = 0 ;
    //cout << i << endl ; 
    for(int j = 0 ; j < M ; j++){
      if(s.at(i+j) - t.at(j) == 0 ){
        cnt++ ; 
      }
    }
    ans = max(cnt , ans) ; 
  }

  cout << t.size() - ans << endl ; 
  
}