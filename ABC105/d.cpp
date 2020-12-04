#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N , M ; 
    cin >> N >> M ; 
    vector<long long > A(N) ; 
    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ; 
    }

    long long ans = 0 ;
    
    map<long long  ,long long  > MAP ;
    MAP[0] = 1 ; //left = rightの時を忘れないこと
    long long sum = 0 ; 
    for(int i = 0 ; i < N ; i++){
        sum += A.at(i) ; 
        MAP[sum%M]++ ; 
    } 
    for(auto p : MAP){
        ans += (p.second * (p.second-1))/2 ; //p_C_2を計算
    }

    cout << ans << endl; 
}