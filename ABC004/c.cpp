#include<bits/stdc++.h>
using namespace std ;

//周期性を探す

int main(){
    long long N ; 
    cin >> N ; 
    vector<int > M(6) ;
    for(int i = 0 ; i < 6 ; i++){
        M.at(i) = i+1 ; 
    }
    N %= 30  ;

    for(int i = 0 ; i < N ; i++){
        swap(M.at(i%5), M.at( (i%5)+1 ) ) ; 
    }

    for(int i = 0 ; i < 6; i++){
        cout << M.at(i) ;
    }
    cout << endl;

}