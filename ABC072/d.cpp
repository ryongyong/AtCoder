#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ;
    cin >> N ; 
    vector<int> P(N) ; 
    for(int i = 0 ; i < N ; i++){
        cin >> P.at(i);
        P.at(i)-- ; 
    }

    int cnt = 0 ; 
    int ans = 0 ; 
    for(int i = 0 ; i < N ; i++){
        if(i == P.at(i) ){
            cnt++ ; 
        }
        else{
            if(cnt % 2 == 0) ans += cnt/2 ;
            else ans += cnt/2 + 1 ;  

            cnt = 0 ; 
        }
    }
    if(cnt % 2 == 0) ans += cnt/2 ;
    else ans += cnt/2 + 1 ;  
    cout << ans << endl; 
}