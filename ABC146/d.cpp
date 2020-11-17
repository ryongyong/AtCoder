#include<bits/stdc++.h>
using namespace std ;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using Edge = pair<int ,int > ;
using Graph = vector<vector< Edge > > ;

int N ; 
Graph G ; 


void dfs(int v, int p, int pc, vector<int> &res) {
    int color = 1;
    if (color == pc) ++color;
    for (auto e : G.at(v)) {
        if (e.first == p) continue; 
        res[e.second] = color;
        dfs(e.first, v, color, res);
        ++color;
        if (color == pc) ++color;
    }
}


int main(){
    cin >> N ; 
    G.assign(N , vector<Edge>()) ; 

    for(int i = 0 ; i < N - 1 ; i++){
        int a , b  ; 
        cin >> a >> b ; 
        a-- ; 
        b-- ; 
        G.at(a).emplace_back(b,i) ; 
        G.at(b).emplace_back(a,i) ; 
    }

    int max_color = 0 ; 
    for(int i = 0 ; i < N ; i++) max_color = max(max_color , (int)G.at(i).size()) ; 
    vector<int > res(N-1 , -1) ; 
    dfs(0, -1, -1, res);
    cout << max_color << endl;

    for( auto v : res) cout << v << endl;
}