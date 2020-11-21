#include<bits/stdc++.h>
using namespace std ;

using Graph = vector<vector<int > > ; 
int N , Q ; 
Graph G ; 

// v は子　, p は親　
void dfs(int v, int p , vector<long long > &res){
    if( p != -1) res.at(v) += res.at(p) ; 
    for(auto e : G.at(v)){ //vの隣の全列挙
        if(e == p ) continue ; // v の親p　は無視
        dfs(e , v ,res) ; 
    }
}

int main(){
    cin >> N >> Q ; 
    G.assign(N , vector<int > ()) ; 

    for(int i = 0 ; i < N-1 ; i++){
        int a , b ; 
        cin >> a >> b ;
        a-- ; b-- ; 
        G.at(a).push_back(b) ; 
        G.at(b).push_back(a) ; 
    }
    vector<long long > val(N , 0) ; 
    
    for(int i = 0 ; i < Q ; i++){
        int p , x ; 
        cin >> p >> x ; 
        p-- ; 
        val.at(p) += x ; 
    }

    dfs(0 , -1 , val) ;
    for(auto v : val) cout << v << " " ; 
    cout << endl;


}