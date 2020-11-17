#include<bits/stdc++.h>
using namespace std ;

long long intpow(long long A , long long x){
    long long B = 1 ; 
    for(int i = 1 ; i <= x ; i++){
        B *= A ; 
    }
    return B ; 
}

int main(){
    long long N ;
    cin >> N ;   

    for(long long  i = 1 ; i <= 37 ; i++){
        for(long long  j = 1 ; j <= 25 ; j++){
            if(intpow(3 , i) + intpow(5 , j) == N){
                cout << i << " " << j << endl;
                return 0 ; 
            }
        }
    }

    cout << "-1" << endl;

}