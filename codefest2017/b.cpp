#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<int> A(N) ;
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ; 
    long long odd = 0 , even  = 0 ; 

    for(int i = 0 ; i < N ; i++){
        if(A.at(i) % 2 == 0 ) even++  ; 
        else odd++ ; 
    }
    long long ans = pow(3 , N) ; 
    cout << ans - pow(2, even) << endl;
}