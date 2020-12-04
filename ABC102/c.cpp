#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<long long > A(N) ,B(N); 
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;
    for(int i = 0 ; i < N ; i++) B.at(i) = A.at(i) - i ; 

    sort(B.begin() , B.end()) ;
    long long median = B.at(N/2) ; 

    long long ans = 0 ; 
    for(int i = 0 ; i < N ; i++){
        ans += abs(median - B.at(i)) ;
    }
    cout << ans << endl;
}