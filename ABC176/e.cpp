#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int H , W , M ; 
  cin >> H >> W >> M ; 
  vector<int> A(H) ; 
  vector<int> B(W) ; 
  set<pair<int , int >> s ; 
  for(int i = 0 ; i < M ; i++){
    int h , w ; 
    cin >> h >> w ; 
    h-- , w-- ; 
    A.at(h)++ ; 
    B.at(w)++ ;
    s.emplace(h,w) ; 
  }
  
  int mh = 0 , mw = 0 ; 
  for(int i = 0 ; i < H ; i++) mh = max(mh , A.at(i)); 
  for(int i = 0 ; i < W ; i++) mw = max(mw , B.at(i));   
  
  vector<int> is , js ; 
  for(int i = 0 ; i < H ; i++) if(mh == A.at(i)) is.push_back(i) ; 
  for(int i = 0 ; i < W ; i++) if(mw == B.at(i)) js.push_back(i) ;   
  int ans = mh + mw ; 
  
  for(int i : is)for(int j : js){
    if(s.count(pair(i,j))) continue ; 
    cout << ans << endl ; 
    return 0 ; 
  }
  
  ans-- ; 
  cout << ans << endl; 
  return 0 ; 
}