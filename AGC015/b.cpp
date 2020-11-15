#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ; 
    cin >> S ; 
    long long ans = 0 ; 
    for(int i = 0 ; i < S.size() ; i++){
        if(S.at(i) == 'U') ans += S.size() - ( i + 1 ) + 2*i ; 
        else ans += (S.size() - (i + 1)) * 2 + i ; 
    }

    cout << ans << endl;
}