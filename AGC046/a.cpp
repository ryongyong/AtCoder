#include<bits/stdc++.h>
using namespace std ;

int main(){
    int X ; 
    cin >> X ; 

    for(long long  i = 1 ; i <= 1e10 ; i++){
        if((i * X) % 360== 0 ){
            cout << i << endl;
            return 0 ; 
        }
    }
}