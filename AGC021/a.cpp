#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ;
    cin >> S ; 
    int N = S.size()  ;
    int c = S.at(0) - 48 ; 

    for(int i = 1 ; i < N ; i++){
        if(S.at(i) == '9') continue ; 
        cout << 9 * (N - 1) + c - 1 << endl;
        return 0 ; 
    }

    cout << 9 * (N - 1) + c << endl;
}