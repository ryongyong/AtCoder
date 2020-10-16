#include<bits/stdc++.h>
using namespace std ; 

int main(){
    string S ; 
    cin >> S ; 
    map<char , int> M ; 
    for(char i = 'a' ; i <= 'z' ; i++ ){
        M[i]++ ; 
    }

    for(int i = 0 ; i < S.size() ; i++){
        M[S.at(i)]-- ; 
    }

    for(auto p : M){
        if(p.second == 1){
            cout << p.first << endl;
            return 0 ; 
        }
    }

    cout << "None" << endl; 
}