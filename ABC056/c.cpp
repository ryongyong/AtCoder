#include<bits/stdc++.h>
using namespace std ;

int main(){
    int X ; 
    cin >> X ; 
    int cnt = 0 ; 
    int i = 1 ; 
    while(X- i > cnt){
        cnt += i ; 
        i++ ; 
    }
    cout << i << endl;
    
}