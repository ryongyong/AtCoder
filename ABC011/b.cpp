#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ;
    cin >> S ;

    for(int i = 0 ; i < S.size() ; i++){
        if(i == 0){
            char a = toupper(S.at(i)) ;
            cout << a ;
        }
        else{
            char a = tolower(S.at(i)) ;
            cout << a ;
        }
    }
    cout << endl;
    return 0 ;
}