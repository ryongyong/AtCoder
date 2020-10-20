#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ; cin >> S ;
    bool ok = false ; 
    for(int i = 0 ; i < S.size(); i++){
        if( S.at(i) == '9') ok = true ; 
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

}