#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long N , A , B ;
    cin >> N >> A >> B ; 
    long long ans = 0 ;
    if(B >= A ) ans = B*(N-2) - A*(N-2) + 1 ; 
    if(N == 1){
        if(B != A) ans = 0 ; 
        else ans = 1 ; 
    }
    cout << ans << endl;
}