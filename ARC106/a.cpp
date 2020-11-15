#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N ;
    cin >> N ;   
    for(long long j = 1 ; pow(5,j) <= N ; j++){
        long long cnt = N - pow(5, j ) ;    

        for(long long i = 1 ; pow(3,i) <= cnt ; i++){
            if(cnt == (long long)pow(3,i)){
                cout << i << " " <<  j << endl;
                return 0 ; 
            }
        }
    }
    cout << -1 << endl;
}