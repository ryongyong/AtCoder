#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<int> A(N) ;
    for(int i = 0 ; i < N ;i++){
        cin >> A.at(i) ; 
    }
    map<int , int> M ;

    for(int i = 0 ; i<N ; i++){
        M[A.at(i)]++ ;
        M[A.at(i)+1]++ ; 
        M[A.at(i)-1]++ ; 

    }
    int cnt = 0 ;
    for(auto p : M){
        cnt = max(cnt , p.second) ; 
    }

    cout << cnt << endl;
}