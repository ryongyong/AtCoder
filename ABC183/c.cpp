#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N , K ; 
    cin >> N >> K ; 
    vector<vector<int > > T(N , vector<int > (N)) ; 
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> T.at(i).at(j) ; 
        }
    }
    vector<int > P(N-1) ; 
    for(int i = 0 ; i < N-1 ; i++){
        P.at(i) = i+1 ; 
    }
    //for(int i = 0 ; i < N-1 ; i++) cout << P.at(i) ;
    int ans = 0 ; 
    
    do{
        long long cnt = T.at(0).at(P.at(0)) ;     
        for(int i = 1 ; i < P.size() ; i++){
            cnt += T.at(P.at(i-1)).at(P.at(i)) ; 
        }
        cnt += T.at(P.at(P.size()-1)).at(0) ; 

        if(cnt == K) ans++;
        //cout << cnt << endl;
    }while(next_permutation(P.begin() , P.end())) ; 

    cout << ans << endl;
}