#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<long long> x(N) , y(N) ; 
    for(int i = 0 ; i < N ; i++){
        cin >> x.at(i) >> y.at(i) ; 
    }

    //x座標とy座標の和と差
    vector<long long > wa(N) , sa(N) ; 

    for(int i = 0 ; i < N ; i++){
        wa.at(i) = x.at(i) + y.at(i) ; 
        sa.at(i) = x.at(i) - y.at(i) ; 
    }

    sort(wa.begin(), wa.end() ) ; 
    sort(sa.begin() , sa.end()) ; 

    long long ans = 0 ; 
    ans = max(wa.back() - wa.front() , sa.back() - sa.front() ) ; 
    cout << ans << endl;


}