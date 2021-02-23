#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , Q ; 
    cin >> N >> Q ; 
    vector<int> imos(N+2,0) ;
    for(int i = 0 ; i < Q ; i++){
        int  l , r ; 
        cin >> l >> r ; 
        l-- ;
        r ; 
        imos.at(l)++ ;
        imos.at(r)-- ;
    }

    vector<int > T(N+1) ;
    T.at(0) = imos.at(0);
    
    for(int i = 1; i < N ; i++){
        T.at(i) = T.at(i-1) + imos.at(i) ;
    }

    for(int i = 0 ; i < N ; i++){
        if(T.at(i) % 2 == 0){
            cout << '0' ;
        }
        else{
            cout << '1' ;
        }
    }

    cout << endl;


}