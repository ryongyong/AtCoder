#include<bits/stdc++.h>
using namespace std ;

const long long mod = 1000000007 ; 

int main(){
    int N ; 
    cin >> N ; 

    vector<int > A(N) , cnt(N);
    for(int i = 0 ;i < N ; i++){
        cin >> A.at(i) ;
        cnt.at(A.at(i))++ ; 
    }

    if( N%2 == 0 ){
        for(int i = 1 ; i < N ; i++){
            if(cnt.at(i) % 2 == 0 ) continue ;
            else{
                cout << 0 << endl;
                return 0 ;
            }
        }
    }
    else{
        if( cnt.at(0) != 1 ){
            cout << 0 << endl;
            return 0 ;
        }    
        for(int i = 1 ; i < N ; i++){
            if(cnt.at(i) % 2 == 0 ) continue ;
            else{
                cout << 0 << endl;
                return 0 ; 
            }
        }
    }
    long long ans = 1 ; 
    for(int i = 0 ; i < N/2 ; i++){
        ans *= 2 ;
        ans %= mod ; 
    }

    cout << ans << endl;

}