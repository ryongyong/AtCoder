#include<bits/stdc++.h>
using namespace std ; 
#define rep(i,n) for(int i = 0 ; i < (n) ; i++)


int main(){
  int n , m ; cin >> n >> m ; 
  vector<int> to[100005] ; 
  const int INF = 1001001001 ; 
  
  rep(i,m) {
    int a, b ; 
    cin >> a >> b  ;
    a-- ; //頂点番号
    b-- ; 
    to[a].push_back(b) ; //a to b
    to[b].push_back(a) ; //b to a
  }
  
  queue<int> q ; 
  vector<int> dist(n , INF) ; 
  vector<int> pre(n , -1) ; 
  
  dist[0] = 0 ;
  q.push(0) ; 
  
  while(!q.empty()){//emptyでないならば
    int v = q.front() ;
    q.pop();//先頭の値を削除
    
    for(int u : to[v]){//uは頂点の番号でto[v]はvに行く頂点
      if(dist[u] != INF) continue ; 
      
      dist[u] = dist[v]+1 ; //vに行く頂点は+1
      pre[u] = v ;//目印
      q.push(u) ; //
    }
  }
  
  cout << "Yes" << endl ; 
  
  rep(i,n){
    if(i == 0) continue ; 
    int ans = pre[i];
    ans++ ;
    cout << ans << endl;
  }
  
  return 0 ; 

}