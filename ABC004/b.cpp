#include<bits/stdc++.h>
using namespace std ;

//やるだけ

int main(){
    vector<vector<char > > S(4 , vector<char>(4)) ; 

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cin >> S.at(i).at(j) ;
        }
    }

    for(int i = 3 ; i >= 0 ; i--){
        for(int j = 3 ; j >=  0  ; j--){
            cout << S.at(i).at(j) << " "  ; 
        }
        cout << endl;
    }
}