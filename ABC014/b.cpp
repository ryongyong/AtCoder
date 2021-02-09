#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ;
    int X ; 
    cin >> N >> X ; 

    vector<int > A(N) ;
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;

    long long ans = 0 ;
    for(int bit = 0 ; bit < N ; bit++){
        //cout << 1 & (X<<bit)  << endl;
        if(X & (1<<bit) ) ans += A.at(bit) ;
    }

    cout << ans << endl;
}