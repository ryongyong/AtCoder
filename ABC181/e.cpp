#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N , M ; 
    cin >> N >> M ; 
    vector<long long> H(N) , W(M) ; 
    for(int i = 0 ; i < N ; i++) cin >> H.at(i) ; 
    for(int i = 0 ; i < M ; i++) cin >> W.at(i) ; 
    
    sort(H.begin() , H.end()) ; 

    vector<long long > left(N+1 , 0) , right(N+1 , 0) ;//累積和配列

    for(int i = 2 ; i < N ; i++ ){
        left.at(i) = left.at(i-2) +  H.at(i-1) - H.at(i-2) ; //左からの累積和
        right.at(i) = right.at(i-2) + H.at(N-i+1) - H.at(N-i) ; //右からの累積和
    }
    long long ans = 2LL<<60 ; 

    for(auto w : W){
        int i = lower_bound(H.begin() , H.end() , w) - H.begin() ; //iはwよりも小さい要素の個数

        if(i %2 == 0 ){ //何番目にwが挿入されるかで場合分け
            ans = min(ans , left.at(i) + right.at(N-i-1) + H.at(i) - w) ; 
        }
        else{
            ans = min(ans , left.at(i-1) + right.at(N-i) + w - H.at(i-1)) ; 
        }
    }

    cout <<ans << endl;


}