#include<bits/stdc++.h>
using namespace std ;

//やるだけ

int main(){
    int N ; 
    cin >> N ; 
    vector<int> T(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> T.at(i) ;

    sort(T.begin() , T.end()) ; 

    cout << T.at(0) << endl;
}