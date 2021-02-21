#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N ;
    cin >> N ; 

    int a , b , c ; 
    cin >> a >> b >> c;
    const int INF = 100100010 ;
    vector<int > dp(N+10 , INF) ;
    dp.at(N) = 0 ;

    for(int i = N  ; i >= 0 ; i--){
        for(int j = 1 ; j <= 3 ; j++){
            if( (i - j) == a ||  (i - j) == b ||  (i - j) == c) continue ;
            if( i - j < 0 ) continue ;
            dp.at(i-j) = min(dp.at(i) + 1 , dp.at(i-j)) ;
        }
    }

    if( N == a || N == b || N == c){
        cout << "NO" << endl;
        return 0 ;
    }

    if( dp.at(0) >  100) cout << "NO" << endl;
    else cout << "YES" << endl;
}