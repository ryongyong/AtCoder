#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    
    vector<long long  >  P(N);
    long long tot = 0 ;
    
    for(int i = 0 ; i < N ; i++){
        long long A , B , T ; 
        cin >> A >> B ;
        T = 2*A + B ; 
        tot += A ; 
        P.at(i) = T ; 
    }

    sort(P.begin() , P.end()) ; 
    reverse(P.begin() , P.end()) ;

    long long ans = 0 ;
    long long now = 0 ;

    for(int i = 0 ; i < N ; i++){
        if(tot >= now){
            tot -= P.at(i) ;
            ans++ ; 
        }
    }

    cout << ans << endl;
    



}