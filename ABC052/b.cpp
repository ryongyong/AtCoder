#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    string S ; 
    cin >> S ; 
    int cnt= 0 ;
    int ans = 0 ;  

    for(int i = 0 ; i < N ; i++){
        if(S.at(i) == 'I') cnt++ ; 
        if(S.at(i) == 'D') cnt-- ; 

        ans = max(ans , cnt ) ; 
    }

    cout << ans << endl;
}