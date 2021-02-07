#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ;
    cin >> N ; 
    long long X ; 
    cin >> X ; 
    vector<long long > A(N) ;
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;

    for(int i = 0 ;  i < N ; i++){
        if(A.at(i) == X) continue ;

        cout << A.at(i) << " " ;
    }

    cout << endl;
}