#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ; 
    cin >> S ;
    long long ans = 0 ; 
    vector<long long > a(S.size() + 1) ; 

    for(int i = 0 ; i < S.size() ; i++){
        if(S.at(i) == '<' ){
            a.at(i+1) = a.at(i) + 1 ; 
        }
    }
    for(int i = S.size() - 1 ; i >= 0 ; i--){
        if(S.at(i) == '>' && a.at(i+1) >= a.at(i)){
            a.at(i) = a.at(i+1) + 1 ; 
        }        
    }

    for(long long i : a){
        ans += i ; 
    }
    cout << ans << endl;
}