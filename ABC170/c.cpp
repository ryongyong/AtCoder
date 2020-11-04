#include<bits/stdc++.h>
using namespace std ;

int main() {
  int X , N ; 
  cin >> X >> N ; 
  vector<int> p(N) ; 

  for(int i = 0 ; i < N ; i++){
    cin >> p.at(i) ; 
  }
  if(N==0){
    cout << X << endl ;
  }
  
  for(int i = 1 ; i <= N ; i++){
  
  int T1 = X - i ; 
  int T2 = X + i ; 
  int cnt1=0 ;
  int cnt2=0 ;  
  int cnt =0 ; 
    
    for(int j = 0 ; j < N ; j++){
      if(T1 == p.at(j)){
        cnt1++ ; 
      }
      else if(T2 == p.at(j)){
        cnt2++ ; 
      }
      else if(X == p.at(j)){
        cnt++ ; 
      }
    }
    
    if(cnt == 0 ){
      cout << X << endl;
      return 0;
    }

    else if(cnt1 == 0 ){
      cout << T1 << endl ; 
      return 0 ; 
    }
    else if(cnt2 == 0 ){
      cout << T2 << endl;
      return 0 ; 
    }
  }
}