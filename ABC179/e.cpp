#include <bits/stdc++.h>
using namespace std;
using ll = long long ; 
int main(){
  ll n , x , m ; 
  cin >> n >> x >> m ; 
  vector<int> id(m,-1);
  int len = 0 ; 
  ll tot = 0 ; 
  vector<int> a ; 
  while(id.at(x) == -1){
    a.push_back(x) ; 
    id.at(x) = len ; 
    len++ ;     
    tot += x  ; 
    x = (x*x)%m ;     
  }
  
  int c = len - id.at(x) ; 
  ll s = 0 ; 
  for(int i = id.at(x) ; i<len ; i++) s += a.at(i) ; 
  
  ll ans = 0 ; 
  if(n <= len){
    for(int i = 0 ; i < n ; i++){
      ans += a.at(i) ; 
    }
  }
  else{
    ans += tot ; 
    n -=len ; 
    ans += s*(n/c) ; 
    n %= c; 
    for(int i = 0 ;i < n ; i++){
      ans += a.at(id.at(x)+i) ; 
    }
  }
  cout << ans << endl;
}