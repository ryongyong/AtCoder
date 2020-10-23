#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; cin >> N ; 
    vector<long long > A(N) , B(N) , C(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;
    for(int i = 0 ; i < N ; i++) cin >> B.at(i) ;
    for(int i = 0 ; i < N ; i++) cin >> C.at(i) ; 
    sort(A.begin() , A.end());
    sort(B.begin() , B.end());
    sort(C.begin() , C.end()); 

    long long ans = 0 ; 

    for(int i = 0 ; i < N ; i++){
        long long cnt = B.at(i) ; 
        long long iter = lower_bound(A.begin() , A.end() , cnt) - A.begin();        
        long long iter2 = upper_bound(C.begin() , C.end() , cnt) - C.begin(); 
        ans += (iter)*(N - iter2) ; 
    }

    cout << ans << endl;

}