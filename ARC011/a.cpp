#include<bits/stdc++.h>
using namespace std ;

int main(){
    int m , n , N ; 
    cin >> m >> n >> N ; 
    long long cnt = N ; //最初回収した本数であり、最初に売った本数

    while(1){
        if( cnt < m ) break ;//再利用できないなら終わり
        cnt -= m ; // 回収した鉛筆からm個消費
        cnt += n ; //　m個消費してn個作る
        N += n ;  // n個売る
    }

    cout << N << endl;
    return 0 ; 
}