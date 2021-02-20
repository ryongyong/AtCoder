#include<bits/stdc++.h>
using namespace std ;

//dijkstra

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
    graph g(N) ;

    for(int i = 0 ; i < M ; i++){
        int a , b ; 
        cin >> a >> b ;

        a-- ;
        b-- ;
        g.add_edge(a, b , 1) ; 
        g.add_edge(b , a , 1) ;

    }

    for(int  i= 0 ; i < N ; i++){
        g.dijkstra(i) ;
        int cnt = 0 ;

        for(int j = 0 ; j < N ; j++){
            int dist = g.d[j] ;
            if(dist == 2) cnt++ ;
        }

        cout << cnt << endl;
    }


}