#include<bits/stdc++.h>
using namespace std ; 
const int di[] = {-1,0,1,0} ; 
const int dj[] = {0,-1,0,1} ; 

int main(){
  int h , w ; 
  cin >> h >> w ; 
  int si , sj ; 
  cin >> si >> sj ; 
  int ti , tj ; 
  cin >> ti >> tj ; 
  si-- , sj-- , ti-- , tj-- ; 
  vector<string> s(h) ; 
  for(int i = 0 ; i < h ; i++) cin >> s.at(i) ; 
  const int INF = 1e9 ; 
  vector<vector<int>> cost(h , vector<int>(w,INF));
  deque<pair<int , int>> q ; 
  cost.at(si).at(sj) = 0 ; 
  q.emplace_back(si,sj) ; 
  
  while(!q.empty()){
    int i = q.front().first ; 
    int j = q.front().second ; 
    int d = cost.at(i).at(j) ; 
    q.pop_front();        
    for(int v = 0 ; v < 4 ;v++){
      int ni = i+di[v], nj = j+dj[v] ; 
      if(ni < 0 || ni>=h || nj<0 || nj >=w) continue ; 
      if(s.at(ni).at(nj) == '#') continue ; 
      if(cost.at(ni).at(nj) <= d) continue ; 
      cost.at(ni).at(nj) = d ; 
      q.emplace_front(ni,nj);
    }
    for(int ei = -2 ; ei <= 2 ; ei++){
      for(int ej = -2 ; ej <= 2 ; ej++){
        int ni = i+ei , nj = j+ej ;
        if(ni < 0 || ni>=h || nj<0 || nj >=w) continue ; 
        if(s.at(ni).at(nj) == '#') continue ; 
        if(cost.at(ni).at(nj) <= d+1) continue ; 
        cost.at(ni).at(nj) = d+1 ; 
        q.emplace_back(ni,nj) ; 
      }
    }
  }
  int ans = cost.at(ti).at(tj) ; 
  if(ans == INF) ans = -1 ; 
  cout << ans << endl ; 
  
}