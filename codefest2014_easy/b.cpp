#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ;
    cin >> N ; 
    N-- ;
    int a = N/20 ;

    if( a % 2 == 0){
        cout << N%20 + 1 << endl;
    }
    else{
        cout << 20 - N%20  << endl;
    }

}