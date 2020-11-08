#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ; 
    cin >> S ; 
    int k = S.size() ;

    int  ans = 300 ; 
    long long  ifend = 0 ; 

    for(int i = 0 ; i < k ; i++){
        ifend += S.at(i) - '0' ; 
    }

    if(ifend % 3 == 0 ){
        cout << 0 << endl;
        return 0 ; 
    }
    
    for(long long is = 0 ; is  < (1 << k) ; is++){
        long long  cnt = 0 ; 
        for(long long i = 0 ; i < k ; i++){
            if(is >> i&1) cnt += S.at(i) - '0' ; 
        }

        if( cnt % 3 == 0 && cnt > 0 ){
            ans = min(ans , k - __builtin_popcount(is) ) ; 
        }
        //cout << is << endl;
    }
    if(ans == 300) ans = -1 ; 
    cout << ans << endl;
}