#include<bits/stdc++.h>
using namespace std ;


const int INF = 1001001001 ;
struct edge{long long  to, cost;};

struct graph{
  long long  V;
  vector<vector<edge> > G;
  vector<long long> d;

  graph(long long n){
    init(n);
  }

  void init(long long n){
    V = n;
    G.resize(V);
    d.resize(V);
    for(int i = 0 ; i < V ; i++){
      d[i] = INF;
    }
  }

  void add_edge(long long s, long long t, long long cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }

  void dijkstra(long long s){
    for(int i = 0 ; i < V; i++){
      d[i] = INF;
    }
    d[s] = 0;
    priority_queue<pair<long long , long long >,vector<pair<long long, long long> >, greater<pair<long long , long long > > > que;
    que.push(make_pair(0,s));
    while(!que.empty()){
      pair<long long , long long> p = que.top(); 
      que.pop();
      long long v = p.second;

      if(d[v]<p.first) continue;
      for(auto e : G[v]){
        if(d[e.to]>d[v]+e.cost){
          d[e.to] = d[v]+e.cost;
          que.push(make_pair(d[e.to],e.to));
        }
      }
    }
  }
};

// graph g(n) -> n頂点のグラフ生成
// g.add_edge(a,b ,cost) 
// g.dijkstra(s) -> sからの最短経路探索
// int dist = g.d[i]: が距離に格納される



int main(){
    int N , M ; 
    cin >> N >> M ; 
    vector<long long> A(M) , B(M) , C(M) ;
    for(int i = 0 ; i < M ; i++) cin >>A.at(i) >> B.at(i) >> C.at(i) ;
    graph g(N) ,gr(N);

    for(int i = 0 ; i < M ; i++){
        A.at(i)-- ; 
        B.at(i)-- ; 
        g.add_edge(A.at(i),B.at(i) , C.at(i)) ;
        gr.add_edge(B.at(i),A.at(i) , C.at(i)) ;
    }

    for(int i = 0 ; i < N ; i++){
        long long ans = INF ; 

        g.dijkstra(i) ; //iから別の街への通路の最小値
        gr.dijkstra(i) ;
        for(int j = 0 ; j < N ; j++){
            if(i == j ) continue ; 

            long long dist_r = gr.d[j] ;
            long long  dist = g.d[j];

            //cout << i << "to" << j << " " << dist << endl;
            //cout << j << "to" << i << " " << dist_r << endl; 
            ans = min(ans , dist  + dist_r) ; 

        }

        for(int j = 0 ; j < M ; j++){
            if(A.at(j) == B.at(j) && A.at(j) == i ){
                ans = min(ans , C.at(j)) ;
            }
        }
        if(ans == INF){
            cout << -1 << endl;
        }
        else cout << ans << endl;
    }


}