#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N , M ; 
    cin >> N >> M ; 

    if(M == 0 ){
        cout << 1 << endl;
        return 0 ;
    }
    vector<long long > A(M) ; 


    for(long long i = 0 ; i < M ; i++){
        cin >> A.at(i) ; 
    }
    sort(A.begin() , A.end()) ; 
    //long long T = M-1 ; 

    A.insert(A.begin() , 0) ; 
    A.push_back(N+1) ; 
    vector<long long > v ; 

    long long K = N ;  //大きさはとりあえず一番大き場合にしておく
    for(int i = 0 ; i < A.size() - 1 ; i++){
        long long len = A.at(i+1) - A.at(i) - 1 ; //白マスの大きさ
        if(len > 0 ){
            v.push_back(len) ; 
            K = min(K , len) ; 
        }
    }
    long long ans = 0 ; 
    for(auto len : v) ans += (len+K-1)/K ; 
    cout << ans << endl;


}