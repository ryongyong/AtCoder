#include<bits/stdc++.h>
using namespace std ;

//典型dpやるだけ


int main(){
    int N ; 
    cin >> N ; 
    vector<int > A(N) ;
    for(int i = 0 ; i < N ; i++ ) cin >> A.at(i) ; 

    vector<long long > dp(N+1 , 0 ) ; 
    dp.at(1) = abs( A.at(1) - A.at(0) ) ; 

    for(int i = 2 ; i < N ; i++){
        dp.at(i) = min(dp.at(i-1) + abs(A.at(i-1) - A.at(i))  , dp.at(i-2) + abs(A.at(i-2) - A.at(i))) ; 
    } 

    cout << dp.at(N-1) << endl;

}