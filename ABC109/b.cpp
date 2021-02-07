#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N ; 
    cin >> N ; 

    long long left = 0 ; 
    long long right = 2000000000 ; 

    while(right - left > 1){
        long long x = left+right ; 
        x /= 2 ; 
        if(x*(x+1)/2 <= N+1) left = x ; 
        else right = x ; 
    }

    cout << N + 1 - left << endl;

}