#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , X ; cin >> N >> X  ; 
    string S ; 
    cin >> S ;

    for(int i = 0 ; i < N ; i++){
        if(S.at(i) == 'o') X++ ; 
        else if (S.at(i) == 'x' && X == 0 ) continue ; 
        else{
            X-- ; 
        }
    }

    cout << X << endl;

}