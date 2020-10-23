#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S , T ; 
    cin >> S >> T ; 
    for(int i = 0 ; i < 3 ; i++){
        if(S.at(i) == T.at(2-i)) continue ; 
        cout << "NO" << endl;
        return 0 ; 
    }

    cout << "YES" << endl;
}