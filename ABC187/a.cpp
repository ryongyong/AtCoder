#include<bits/stdc++.h>
using namespace std ;

int main(){
    string  A , B ; 
    cin >> A >> B ; 

    int T1 = 0  , T2 = 0 ; 
    for(int i = 0 ; i < 3 ; i++){
        T1 += A.at(i) - '0' ;
        T2 += B.at(i) - '0' ;
    }

    int ans = max(T1 , T2) ;
    cout << ans << endl;
}