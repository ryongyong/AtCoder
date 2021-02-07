#include<bits/stdc++.h>
using namespace std ;
const long long INF = 1LL << 60 ; 
//ワーシャルフロイド法


int main(){
    int N , M ; 
    cin >> N >> M ; 

    vector<vector<long long > > dist(N , vector<long long>(N,INF)) ; 
    vector<int> ls ;

    for(int i = 0 ;i < M ; i++){
        int a, b, c ; 
        cin >> a >> b >> c; 
        a-- ; 
        b-- ; 
        dist.at(a).at(b) = c ;
        dist.at(b).at(a) = c ; 
        if(a == 0){
            ls.push_back(b) ; 
        }
        else if(b == 0 ){
            ls.push_back(a) ; 
        }
    }

    long long ans = INF ; 

    for(int k = 1 ; k < N ; k++){
        for(int i = 1 ; i < N ; i++){
            for(int j = 1 ; j < N ; j++){
                dist.at(i).at(j) = min(dist.at(i).at(j) , dist.at(i).at(k)+dist.at(k).at(j)) ; 
            }
        }
    }

    for(int i = 0 ; i < ls.size() ; i++){
        for(int j = 0 ; j < ls.size() ; j++){
            if(ls.at(i) == ls.at(j)) continue ;
            if(dist.at(ls.at(i)).at(ls.at(j)) == INF) continue ;
            ans = min(ans , dist.at(0).at(ls.at(i)) + dist.at(ls.at(i)).at(ls.at(j)) + dist.at(ls.at(j)).at(0)) ; 
        }
    }

    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}
