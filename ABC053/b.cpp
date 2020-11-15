#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ;
    cin >> S ; 
    int a = 0 , z = 0 ; 
    bool ok = true ; 
    for(int i = 0 ; i < S.size() ; i++){
        if(S.at(i) == 'A'){
            if(ok){
                a = i ; 
                ok = false ; 
            }
        }
        else if(S.at(i) == 'Z'){
            z = i ; 
        }
    }

    cout << z - a + 1 << endl;
}