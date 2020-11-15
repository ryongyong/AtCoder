#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int > B(3) , G(3) ; 
    for(int i = 0 ; i < 3 ; i++) cin >> B.at(i) ; 
    for(int i = 0 ; i < 3 ; i++) cin >> G.at(i) ; 
    int ans = 0 ; 

    vector<int > P(3) ; 
    for(int i = 0 ; i < 3; i++){
        P.at(i) = i+1 ;
    }

    do{
        int cnt = 1 ; 
        for(int i = 0 ; i < 3 ; i++){
            cnt *= B.at(i)/G.at(P.at(i) - 1) ;
        }
        ans = max(cnt , ans ) ; 
    }while(next_permutation(P.begin() , P.end())) ; 

    cout << ans << endl;
}