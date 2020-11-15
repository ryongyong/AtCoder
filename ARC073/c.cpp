#include<bits/stdc++.h>
using namespace std ; 

int main(){
    long long N , T ; 
    cin >> N >> T ; 
    vector<long long> t(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> t.at(i) ; 
    long long cnt = 0 ; 

    for(int i = 0 ; i < N-1 ; i++){
        cnt += min(T , t.at(i+1) - t.at(i)) ; 
    }
    cnt += T ; 
    cout << cnt << endl;
}