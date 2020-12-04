#include<bits/stdc++.h>
using namespace std ;

//しゃくとる

int main(){
    long long  N , K ; 
    cin >> N >> K ; 
    vector<long long > a(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> a.at(i) ;
    long long ans = 0 ;
    long long tot = 0 ; 
    long long right = 0 ; 

    for(long long  i = 0 ; i < N ; i++){
        while(right < N && tot < K ){
            tot += a.at(right) ; 
            right++ ; 
            //インデックスiからrightまでの総和がK以上になるまでrightをインクリメント
        }
        if(tot < K) break ; 
        // rightをどうしてもK以上にならないなら、左端iを動かしても意味なし

        ans += N - right + 1 ; //総和がK以上になる部分列の個数

        if(right == i ) right++ ; //right=iなら右端rightを増やす
        else tot -= a.at(i) ; //左端を狭めるならその分配列の総和から引く
    }

    cout << ans << endl;

}