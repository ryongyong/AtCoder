#include<bits/stdc++.h>
using namespace std ;

int main(){
    int V , T , S , D ; 
    cin >> V >> T >> S >> D ; 
    int v_s = V*T ; 
    int v_e = V*S ; 

    if(D <= v_e && D >= v_s){
        cout << "No" << endl;
    }
    else cout << "Yes" << endl;
}