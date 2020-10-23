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

int main(){
    int N , M ; 
    cin >> N >> M ; 
    vector<int> a(M) , b(M) ; 
    for(int i = 0 ; i < M ; i++){
        cin >>a.at(i) >> b.at(i) ; 
        a.at(i)-- ; 
        b.at(i)-- ; 
    }
    int ans = 0 ; 
    int cnt = 0 ; 
    for(int i = 0 ; i < M ; i++){

        map<int , int > MAP ; 
        UnionFind uf(N) ; 
        //int cnt = 0 ; 
        for(int j = 0 ; j < M ; j++){
            if(j == cnt) continue ; 
            uf.unite(a.at(j),b.at(j)) ; 
        }

        for(int j = 0 ; j < N ; j++){
            MAP[uf.find(j)]++ ; 
        }

        if(MAP.size()!=1) ans++ ; 
        cnt++ ; 
    }
    cout << ans << endl;


}