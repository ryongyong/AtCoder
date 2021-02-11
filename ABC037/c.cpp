#include<bits/stdc++.h>
using namespace std ;

//累積和を使って区間和を求める

int main(){
    int N , K ; 
    cin >> N >> K ; 
    vector<long long > A(N) , T(N+1, 0 ) ;
    for(int i = 0 ;i < N ; i++){
        cin >> A.at(i) ; 
        T.at(i+1) = T.at(i) + A.at(i) ; 
    }
    long long res = 0 ;
    for(int i = 0 ; i + K <= N ; i++){
        res += T.at(i+K) - T.at(i) ;
    }

    cout << res << endl;
}