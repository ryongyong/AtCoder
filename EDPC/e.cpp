#include<bits/stdc++.h>
using namespace std ;
const long long INF = 1LL << 60 ; 

int main(){

    int  N , W  ; 
    cin >> N >> W ;
    vector<long long > w(N) , v(N) ; 

    for(int i = 0 ;i < N ; i++){
        cin >> w.at(i) >> v.at(i) ; 
    }
    vector<vector<long long > > dp(110 , vector<long long >(100010, INF)) ; 

    dp.at(0).at(0) = 0 ; //dp.at(個数).at(総価値) = 重さ

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j <= 100000 ; j++ ){
            if(j < v.at(i)){
                dp.at(i+1).at(j) = dp.at(i).at(j) ; 
            }
            else{
                dp.at(i+1).at(j) = min(dp.at(i).at(j) , dp.at(i).at(j - v.at(i)) + w.at(i));
            }
        }
    }

    int ans = 100000 ; 
    while(dp.at(N).at(ans) > W) ans-- ; 

    cout << ans << endl;
}