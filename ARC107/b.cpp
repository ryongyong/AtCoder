#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N , K ; 
    cin >> N >> K ; 
    if(K < 0 ) K = -K ;

    vector<long long > num(N*2+1 , 0 ) ; 
    for( long long n = 2 ; n <= 2*N ; n++) num.at(n) = min(n-1, N*2+ 1 - n ) ;
    long long res = 0 ; 
    for(long long n = K ; n <= 2*N ; n++) res += num.at(n) * num.at(n-K) ; 
    cout << res <<endl;
}