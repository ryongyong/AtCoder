#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ; 
    cin >> S ; 
    int cnt = 0 ; 
    int k = S.size() ;
    for(int i = 0 ; i < k ; i++){
        if(S.at(i) == 'x') cnt++ ; 
    }

    if(cnt < 8 ) cout << "YES" << endl;
    else cout << "NO" << endl;


}