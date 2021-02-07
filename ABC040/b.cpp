#include<bits/stdc++.h>
using namespace std ;


int main(){
    long long N ; 
    cin >> N ; 
    long long tmp = N ; 
    for(int i = 1 ; i <= N ; i++){
        for(int j = 1 ; j <= N ; j++){
            if(i*j > N){
                break ; 
            }
            tmp = min(tmp , N- i*j +  abs(i-j)) ; 

        }
    }

    cout << tmp << endl;

}