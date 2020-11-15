#include<bits/stdc++.h>
using namespace std ; 

int main(){
    string N ; 
    cin >> N ; 
    reverse(N.begin() , N.end());
    int odd = 0 , even= 0 ;
    for(int i = 0  ; i < N.size() ; i++){
        if(i % 2 == 0 ) even += N.at(i) - '0' ; 
        else odd += N.at(i)  - '0'; 
    } 

    cout << odd << " " << even << endl;
}