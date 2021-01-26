#include<bits/stdc++.h>
using namespace std ;

// UnionFind


struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};

//uf.uniteで連結
//uf.findで根を検索
//uf.sameで根が同じかどうか検索

int main(){
    int N , M ; 
    cin >> N >> M ; 
    UnionFind uf(N) ; 
    vector<int > X(M) , Y(M) , Z(M) ;
    for(int i = 0 ; i < M ; i++){
        cin >> X.at(i) >> Y.at(i) >> Z.at(i) ;
        X.at(i)-- ; 
        Y.at(i)-- ;
        uf.unite(X.at(i),Y.at(i)) ;
    }

    map<int , int > MAP ; 
    for(int i = 0 ; i < N ; i++){
        MAP[uf.find(i)]++ ; 
    }

    cout << MAP.size() << endl;
    
}