#include<bits/stdc++.h>
using namespace std ;

vector<vector<pair<int , long long > > > G ;
vector<int > ans ;

void dfs(int from , int now , long long dist){
    if(dist % 2 == 1){
        ans.at(now) = 1 ;
        //cout << ans.at(now) << endl;
    }

    for(auto p : G.at(now)){
        int to = p.first ; 
        long long delta = p.second ;
        //cout << now << " " <<p.first << " " << p.second << endl;
        if(to == from){
            continue ;
        }

        dfs(now , to , dist + delta) ;
    }
}

    

int main(){
    int N ; 
    cin >> N ; 
    ans.resize(N) ;
    G.assign(N , vector<pair<int , long long  >> ());
    for(int i = 0 ; i < N - 1 ; i++){
        int u , v ;
        long long w; 
        cin >> u >> v >> w ;
        u-- ;
        v-- ;
        G.at(u).push_back(make_pair(v,w)) ;
        G.at(v).push_back(make_pair(u,w)) ;
    }

    dfs(-1 , 0 , 0 ) ;

    for(int i = 0 ; i < N ; i++){
        cout << ans.at(i) << endl;
    }
}