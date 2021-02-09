#include<bits/stdc++.h>
using namespace std ;

//keywords
//dp , DAG , topological sort
// dp in graph

int main(){
    int N , M ; 
    cin >> N >> M ; 
    vector<int > A(N) ;
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;

    vector<vector<int > >  to(N) ;

    for(int i = 0 ; i < M ; i++){
        int a, b ; 
        cin >> a >> b ; 
        a-- ; 
        b-- ; 
        to.at(a).push_back(b) ;
    }

    const int INF = 1001001001 ; 
    vector<int > dp(N , 2*INF) ; //iに来た時の支出の最小値
    int ans = -INF ; 
    for(int i = 0 ; i < N ; i++){
        ans = max(ans , A.at(i) - dp.at(i));//前ループまでの最大利益候補 or　今ループ 
        for(int j : to.at(i)){
            dp.at(j) = min(dp.at(j) , dp.at(i)) ; // 今までで一番支出が低いものを選ぶ
            dp.at(j) = min(dp.at(j) , A.at(i)) ;  // 今までの支出の最小 or ここで買うか
        }
    }

    cout << ans << endl;

}