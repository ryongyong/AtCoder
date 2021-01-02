#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ;
    vector<long long > A(N) ; 
    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ;
    }
    sort(A.begin() , A.end()) ;
    vector<long long > T(N+1 , 0) ; 
    for(int i = 0 ; i < N ; i++){
        T.at(i+1) = T.at(i) + A.at(i) ;
    }

    long long ans = 0 ;
    for(int i= 0 ; i < N ; i++){
        ans += A.at(i)*i - T.at(i) ;
    }
    cout << ans << endl;

}