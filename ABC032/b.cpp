#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ; 
    int K ; 
    cin >> S >> K ; 

    set<string > ans ; 

    for(int i = 0 ; i <= S.size() - K  ; i++){
        if(S.size() < K) break ; 
        ans.insert(S.substr(i , K)) ;  
    }
    
    cout << ans.size() << endl;
    return 0 ; 
}