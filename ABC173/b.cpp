#include<bits/stdc++.h>
using namespace std ; 

int main() {
  string S ; 
  int N ; 
  cin >> N ; 
  int A , W , T , R ; 
  A = 0 ; 
  W = 0 ; 
  T = 0 ;
  R = 0 ;
  
  for (int i = 0 ; i<N ; i++ ){
    cin >> S ;
    
    if (S[0] == 'A'){
      A++ ; 
    }
    else if (S[0] =='W'){
      W++ ; 
    }
    else if (S[0] == 'T'){
      T++ ; 
    }
    else {
      R++ ; 
    }
  }
  
  cout << "AC " << "x " << A << endl ; 
  cout << "WA " << "x " << W << endl ; 
  cout << "TLE " << "x " << T << endl ; 
  cout << "RE " << "x " << R << endl ; 
  
}

