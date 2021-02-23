#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    string ans ="" ;

    while(N!=0){
        int r = N%2 ; 

        if(r < 0) r = 1 ;//Nが負だとrも負になってしまう可能性

        N =(N-r)/(-2) ;
        ans += (char)(r+'0');
    }
    if(ans.size() == 0) ans = "0" ;
    reverse(ans.begin(),ans.end()) ;

    cout << ans << endl;
}