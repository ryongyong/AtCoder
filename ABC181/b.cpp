#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<long long> a(N) , b(N) ;
    for(int i = 0 ; i < N ; i++) cin >> a.at(i) >> b.at(i) ; 
    long long ans = 0 ; 

    for(int i = 0 ; i < N ; i++){
        ans += (b.at(i) - a.at(i)+1)*(a.at(i) + b.at(i))/2 ; 
    }

    cout << ans << endl;
    return 0 ; 
}