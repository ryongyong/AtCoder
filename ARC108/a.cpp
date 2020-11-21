#include<bits/stdc++.h>
using namespace std ; 

int main(){
    long long S , P ; 
    cin >> S >> P ; 

    for(long long i = 0 ; i <= max(S,P) ; i++){
        if(i*i > S*i) break ; 
        if((S-i)*i == P){
            cout << "Yes" << endl;
            return 0 ; 
        }
    }

    cout << "No" << endl;

}