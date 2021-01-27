#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N ; 
    cin >> N ; 
    vector<char> ans_rev ; 

    while(N != 0 ){
        N-- ; 
        char C = 'a' + N%26   ;
        ans_rev.push_back(C) ; 
        N /= 26 ; 
    }

    reverse(ans_rev.begin() , ans_rev.end()) ;

    for(int i = 0 ; i < ans_rev.size() ; i++){
        cout << ans_rev.at(i) ; 
    }

    cout << endl;

}