#include<bits/stdc++.h>
using namespace std ;

const int mod = 1000000007 ;


int main(){
    int N ; 
    cin >> N ; 
    vector<long long > A(N); 
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;
    long long ans = 0 ;

    for(int i = 0 ; i < 60 ; i++){
        long long x = 0 ;
        for(int j = 0 ; j < N ; j++) if( A.at(j)>>i&1) x++ ; //Aのi桁目 = 1である数
        long long now = x*(N - x)%mod ; // 1 , 0 の組み合わせ

        for(int j = 0 ; j < i ; j++) now = now*2%mod ;
        ans += now ;
        ans %= mod ;
    }

    cout << ans << endl;
    return 0 ;
}