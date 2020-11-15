#include<bits/stdc++.h>
using namespace std ; 

int main(){
    long long N , M ; 
    cin >> N >> M ; 
    long long ans = 0 ; 

    ans = min(N , M/2) ; 
    //cout << M/2 << endl;
    M -= 2*ans ; 

    ans += M/4 ; 
    cout << ans << endl;
}