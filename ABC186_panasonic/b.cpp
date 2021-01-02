#include<bits/stdc++.h>
using namespace std ;

int main(){
    int H , W ; 
    cin >> H >> W  ;
    vector<vector<int > > A(H , vector<int> (W)) ; 
    for(int i= 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            cin >> A.at(i).at(j) ; 
        }
    }
    int cnt = A.at(0).at(0) ; 
    for(int i= 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            cnt = min(cnt , A.at(i).at(j));   
        }
    }
    long long ans = 0 ;
    for(int i= 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
              ans += A.at(i).at(j)-cnt ; 
        }
    }
    cout << ans << endl;
}