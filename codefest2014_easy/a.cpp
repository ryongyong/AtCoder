#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ;
    cin >> N ; 
    vector<long long > A(N) ;
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;

    long double  ans = 0 ;

    for(int i = 0 ; i< N - 1 ; i++){
        ans += A.at(i+1) - A.at(i) ; 
    }

    ans /= N-1 ;
    cout << fixed << setprecision(10) <<  ans << endl;
}