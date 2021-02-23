#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N  ; 
    long long A ,B ; 
    cin >> N >> A >> B ; 
    vector<long long > X(N) ;
    
    for(int i = 0 ; i < N ; i++){
        cin >> X.at(i) ; 
        X.at(i)-- ;
    }
    long long now = X.at(0) ; 
    long long res = 0 ;

    for(int i = 1 ; i < N ; i++){
        long long next = X.at(i) ;
        if( A*(next - now) <= B){
            res += A*(next-now) ; 
        }
        else{
            res += B ; 
        }
        now = X.at(i) ;
    }

    cout << res << endl;
    return 0 ;
}