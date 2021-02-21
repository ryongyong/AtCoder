#include<bits/stdc++.h>
using namespace std ;

struct Edge{
    int to ; 
    int t ; 
    int k ;
    Edge(int to , int t , int k): to(to) , t(t) , k(k) {}
};


int main(){
    int N , M , X , Y ;
    cin >> N >> M >> X >> Y ; 
    X-- ;
    Y-- ;
    vector<vector<Edge> > g(N) ;

    for(int i = 0 ; i < M ; i++){
        int a , b , t , k ; 
        cin >> a >> b >> t >> k ;
        a-- ;
        b-- ;
        g.at(a).emplace_back(b,t,k);
        g.at(b).emplace_back(a,t,k);
    }

    const long long INF = 1e18 ;
    vector<long long > dist(N , INF) ;
    priority_queue< pair<long long , int > , vector<pair<long long , int > > , greater<pair<long long , int > > > que ;
    dist.at(X) = 0 ;
    que.push(make_pair(dist.at(X) , X)) ;

    while(!que.empty()){
        int v = que.top().second ; 
        long long d = que.top().first ;
        que.pop();

        if(d != dist.at(v)) continue ;

        for(Edge& e : g.at(v)){
            long long nx = (d + e.k -1)/e.k*e.k + e.t ;
            if(dist.at(e.to) >= nx){
                dist.at(e.to) = nx ; 
                que.push(make_pair(nx , e.to)) ;
            }
        }
    }

    long long ans = dist.at(Y) ;

    if(ans == INF) ans = -1 ;

    cout << ans << endl;

}