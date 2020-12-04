#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N ; 
    cin >> N ; 
    vector<long long> A(N) , T(N+1, 0 ) , P(N+1 , 0 ) ;  //T , P は累積和(i=0で0)なのでN+1
    for(int  i = 0 ; i < N ; i++) cin >> A.at(i) ; 

    for(int i = 0 ; i < N ; i++){
        T.at(i+1) = T.at(i) + A.at(i) ; //累積和
        P.at(i+1) = max(P.at(i) , T.at(i + 1) )  ; //累積和の累積max
    }

    long long ans = 0 ; 
    long long s = 0 ; 

    for(int i = 0 ; i < N+1 ; i++){
        ans = max(ans , s + P.at(i)) ; //i回目の操作中で一番大きくなるところ
        s += T.at(i) ; //i回目の操作後の位置
    }
    
    cout << ans << endl;


}