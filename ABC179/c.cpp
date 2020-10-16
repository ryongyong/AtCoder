#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int N ; 
  cin >> N ; 
  ll cnt = 0 ; 
  for(int i = 1 ; i < N ; i++){
    cnt += (N-1)/i ; 
  }
  
  cout << cnt << endl ; 
}