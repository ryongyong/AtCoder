#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , S , D ; 
    cin >> N >> S >> D  ;
    
    vector<int > X(N) , Y(N) ;
    for(int i = 0 ; i < N ; i++) cin >> X.at(i) >> Y.at(i) ;
    bool ok = false ; 

    for(int i = 0 ; i < N ; i++){
        if(X.at(i) < S && Y.at(i) > D){
            ok = true ; 
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}