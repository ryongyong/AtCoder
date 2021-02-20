#include<bits/stdc++.h>
using namespace std ;

long long solve(long long X , long long K , long long D){
    X = abs(X);
    long long q = X/D , r = X%D ; 

    if(q >= K) return X - D*K ; 

    long long rem = K - q ; 
    if(rem % 2 == 0) return r ; 
    else return D - r ; 
}

int main(){
    long long X , K , D ; 
    cin >> X >> K >> D ; 
    cout << solve(X , K , D) << endl;
}