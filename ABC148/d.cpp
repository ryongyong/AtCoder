#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<int> a(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> a.at(i) ; 
    int cnt = 1 ; 
    int ans = 0 ; 
    for(int i = 0 ; i< N ; i++){
        if(a.at(i) == cnt ){
            cnt++ ; 
            ans++ ; 
        }
    }
    if(ans == 0 ){
        cout << -1 << endl;
        return 0 ; 
    }
    cout << N - ans << endl;
}