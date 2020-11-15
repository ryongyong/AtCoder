#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int Q , H , S , D ; 
    cin >> Q >> H >> S >> D ; 
    int N ; cin >> N ; 

    int cnt2 = min(8*Q , min(4*H , min(2*S , D))) ; 
    int cnt1 = min(4*Q , min(2*H , S)) ; 

    long long ans = 0 ; 
    while(N != 0 ){
        if( N >= 2){
            N -= 2 ; 
            ans += cnt2 ; 
        }
        else{
            ans += cnt1 ; 
            N -= 1 ; 
        }
    }

    cout << ans << endl;
}