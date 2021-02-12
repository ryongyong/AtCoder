#include<bits/stdc++.h>
using namespace std ; 

const int MOD =  10007 ; 

//メモ化

int main(){
    int N ; 
    cin >> N; 

    long long ans = 0 ;
    vector<long long > tri(N+10) ;
    tri.at(1) = tri.at(2) = 0 ; 
    tri.at(3) = 1 ; 



    for(int i = 4 ; i < N+1 ; i++){
        tri.at(i) = (tri.at(i-1) + tri.at(i-2) + tri.at(i-3) )%MOD ; 
    }

    cout << tri.at(N) << endl;

}