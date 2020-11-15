#include<bits/stdc++.h>
using namespace std ; 

int main(){
    string S ; 
    cin >> S ;
    string ANS ; 
    int N = S.size() ; 

    for(int i = 0 ; i < N ; i++){
        if(S.at(i) == '0') ANS.push_back('0') ; 
        else if(S.at(i) == '1') ANS.push_back('1') ; 
        else {
            if(!ANS.empty()) ANS.pop_back() ; 
        }
    }

    cout << ANS << endl;
}