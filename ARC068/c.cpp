#include<bits/stdc++.h>
using namespace std ;


int main(){
    long long N ; 
    cin >> N ; 

    long long a = N/11 ; 
    int b = N%11 ; 

    long long ans = a * 2; 
    if(b > 6){
        cout << ans + 2  << endl; 
    } 
    else if(b == 0 ){
        cout << ans  << endl;
    }
    else{
        cout << ans + 1 << endl;
    }
}