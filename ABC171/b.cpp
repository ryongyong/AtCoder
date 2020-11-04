#include<bits/stdc++.h>
using namespace std ; 

int main() {
  int N , K ;
  int P ; 
  int price = 0  ; 

  cin >> N >> K ;
  vector<int> A(N) ;
  
  for (int i = 0 ; i < N ; i++){
    cin >> P ; 
    A.at(i) = P ; 
  }
  sort(A.begin() , A.end()) ; 
  for ( int i = 0 ; i < K ; i++){
    price = price + A.at(i) ; 
  }
  cout << price << endl ; 
}

