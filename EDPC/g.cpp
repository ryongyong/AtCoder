#include<bits/stdc++.h>
using namespace std ;


int N , M ; 
vector<vector<int > > G ; 

vector<int > dp(100100) ; 

int rec(int v){
    if(dp.at(v) != -1) return dp.at(v) ; 

    int res = 0 ; 
    for(auto nv : G.at(v)){
        res = max(res , rec(nv) + 1) ; 
    }
    return dp.at(v) = res ;
}

int main(){
    cin >> N >> M ; 
    G.assign(N , vector<int > ()) ; 

    for(int i = 0 ; i < M ; i++){
        int x , y ;
        cin >> x >> y ; 
        x-- ; 
        y-- ; 
        G.at(x).push_back(y) ; 
    }

    for(int i = 0 ; i < N ; i++) dp.at(i) = -1 ; 

    int ans = 0 ;

    for(int v = 0 ; v < N ; v++){
        ans = max(ans , rec(v)); 
    }

    cout << ans << endl;

}
