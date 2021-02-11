#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<long long > A(N);
    for(int i = 0 ;i < N ; i++) cin >> A.at(i) ; 

    vector<int> left_gcd(N+1 , 0) , right_gcd(N+1,0) ; 
    for(int i = 0 ; i < N ; i++) left_gcd.at(i+1) = gcd(left_gcd.at(i) , A.at(i)) ; 
    for(int i = N-1 ; i >= 0 ; i--) right_gcd.at(i) = gcd(right_gcd.at(i+1) , A.at(i)) ; 

    int ans = 0 ;

    for(int i = 0 ; i < N ; i++){
        int l = left_gcd.at(i) ; 
        int r = right_gcd.at(i+1) ;
        ans = max(ans , gcd(r,l)) ; 
    }

    cout << ans << endl;

}