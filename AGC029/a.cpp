#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ; 
    cin >> S ; 
    int cnt = 0 ; 
    int N = S.size() ;
    int M = N ; 
    long long ans = 0 ; 
    for(int i = 0 ; i < N ; i++){
        if(S.at(i) == 'B') cnt = i ; 
    }

    for(int i = N-1 ; i >= 0 ; i-- ){
        if(S.at(i) == 'B'){
            //cout << i+1 << " " << M << endl;
            ans += M - (i + 1) ;
            M-- ;
        }
    }

    cout << ans << endl;
}