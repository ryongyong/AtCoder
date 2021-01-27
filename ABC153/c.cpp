#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , K ; 
    cin >> N >> K ; 
    vector<long long > H(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> H.at(i) ;

    sort(H.begin(),H.end()) ;
    reverse(H.begin(),H.end()) ;
    long long cnt = 0 ;

    for(int i = K ; i < N ; i++){
        if(K >= N){
            cout << K << endl;
            return 0 ; 
        }
        
        cnt += H.at(i) ;
    }

    cout << cnt << endl;

}