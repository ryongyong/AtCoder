#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<string > A(N);
    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ; 
    } 

    for(int i = 'a' ; i <= 'z' ; i++){
        int ans = 100 ;

        for(int k = 0 ; k < N ; k++){

            int cnt = 0  ; 
            for(int j = 0 ; j < A.at(k).size() ; j++){
                if( i == A.at(k).at(j)) cnt++ ; 
            }

            ans = min(ans , cnt) ; 
        }

        for(int l = 0 ; l < ans ; l++){
            char c =  i  ; 
            cout << c ;
        }

    }

    cout << endl;
}