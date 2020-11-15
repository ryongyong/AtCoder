#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<long long> a(3*N) ; 
    for(int i = 0 ; i < 3*N ; i++) cin >> a.at(i) ; 
    sort(a.begin() , a.end()) ; 
    reverse(a.begin() , a.end()) ; 

    long long ans = 0 ; 
    for(int i = 1 ; i < 2*N ; i += 2){
        ans += a.at(i) ; 
    }

    cout << ans << endl;

}