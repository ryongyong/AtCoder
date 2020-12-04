#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<long long > a(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> a.at(i) ;

    long long ans = 1L << 60 ; 
    for(int i = -100 ; i <= 100 ; i++){
        long long cnt = 0 ; 
        for(int j = 0 ; j  < N ; j++){
            cnt += ( i - a.at(j))*(i - a.at(j));
        }
        ans = min(ans , cnt ) ; 

    }

    cout << ans << endl;
}