#include<bits/stdc++.h>
using namespace std ;


int main(){
    int N ; 
    cin >> N ; 
    vector<long long> A(N) ; 
    map<long long , long long> M ; 
    long long MIN=1000010000 , MAX = 0  ; 
    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ; 

    }
    long long ans = A.at(0) ; 

    for(int i = 1 ; i < N ; i++){
        ans = gcd(ans , A.at(i)) ; 
    }
    cout << ans << endl ;


    

}