#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N ; 
    cin >> N ; 
    map<int , int > M ; 

    for(int i = 1 ; i <= N ; i++){
        int cnt = 0 ; 
        int P = i ; 
        while( P % 2 == 0){
            cnt++ ; 
            P /= 2 ; 
        }
        M[i] = cnt ;  
    }

    int ans = 1 ; 
    int T = 0 ; 
    for(auto p : M ){
        if(T <= p.second){
            ans = p.first ; 
            T = p.second ;
        }
    }

    cout << ans << endl;
    return 0 ; 
}