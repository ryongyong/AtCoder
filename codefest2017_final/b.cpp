#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ;
    cin >> S ;
    int a = 0 , b = 0 , c = 0 ; 
    for(int i = 0 ; i < S.size() ; i++){
        if(S.at(i) == 'a') a++ ; 
        else if(S.at(i) == 'b') b++ ; 
        else c++ ; 
    }

    if( max(abs(a-b) , max(abs(a-c) , abs(c-b))) < 2){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}