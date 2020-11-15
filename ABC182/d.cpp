#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N ; 
    cin >> N ; 
    vector<long long> A(N) , T(N) ;  
    for(int  i = 0 ; i < N ; i++) cin >> A.at(i) ; 
    T.at(0) = A.at(0) ; 
    for(int i = 1 ; i < N ; i++){
        T.at(i) += T.at(i-1) + A.at(i) ; 
    }
    long long ans = 0 ; 

    for(int i = 0 ; i < N-1 ; i++){
        if(T.at(i) > 0 && T.at(i+1) <= 0 ){
            for(int j = 0 ; j <= i ; j++){
                ans += T.at(j) ; 
            }
            //cout << ans << endl;
           long long cnt = ans ;             
            for(int j = 0 ; j < N ; j++ ){
                cnt += A.at(j) ;  
                ans = max( ans , cnt) ; 
            }
            //cout << ans << endl;
        }
    }
    //for(int i = 0 ; i < N ; i++) cout << T.at(i) << endl;
    cout << ans << endl;
}