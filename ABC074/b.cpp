#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , K ; 
    cin >> N >> K ; 
    vector<int> x(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> x.at(i) ; 
    int cnt = 0 ; 
    for(int i = 0 ; i < N ; i++){
        if(x.at(i) <= K/2 ) cnt += x.at(i) * 2 ; 
        else cnt += (K-x.at(i)) *2 ; 
    }

    cout << cnt << endl;
}