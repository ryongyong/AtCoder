#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; cin >> N ; 
    vector<int > A(N) ;
    for(int i = 0 ; i < N ; i++ )cin >> A.at(i) ; 

    map<int , int > M; 
    int cnt = 0 ; 
    for(int j = 2 ; j<= 1000 ; j++){
        for(int  i =0 ; i < N ; i++){
            if(A.at(i) % j == 0 ){
                M[j]++ ; 
            }
        }
    }
    int ans = 0 ; 
    for(auto p: M){
        if(cnt <= p.second){
            cnt = p.second ; 
            ans = p.first ; 
        }
    }

    cout << ans << endl;
}