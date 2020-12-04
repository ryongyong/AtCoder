#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , K ; 
    cin >> N >> K ; 
    vector<long long > NUM(K , 0) ; 
    for(int i = 1 ; i <= N ; i++) NUM.at(i%K)++ ; 

    long long ans = 0 ; 

    for(int i = 0 ; i < K ; i++){
        int j = (K-i)%K ; 
        int k = (K-i)%K ; 

        if((j+k)%K != 0) continue  ;

        ans += NUM.at(i)*NUM.at(j)*NUM.at(k) ; 
    }

    cout << ans << endl;


}