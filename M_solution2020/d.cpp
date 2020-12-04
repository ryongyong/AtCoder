#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<int > A(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;
    long long ans = 1000 ; 

    for(int i = 0 ; i < N-1 ; i++){
        int p_today = A.at(i) ; //今日の株価
        int p_tomorrow = A.at(i+1) ; //明日の株価

        if( p_today < p_tomorrow){ //明日の方が高いなら
            long long k = ans/p_today ; //　買えるだけ買う
            ans %= p_today ; // 買った後に残った所持金
            ans += k * p_tomorrow ;  //所持金　＋　次の日に売って手に入るお金
        }
    
    }

    cout << ans << endl;

}