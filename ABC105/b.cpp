#include<bits/stdc++.h>
using namespace std ;


int main(){
    int N ; 
    cin >> N ; 

    for(int i = 0 ; i <= 100 ; i++){
        for(int j = 0 ; j <= 100 ; j++){
            int res = i * 4 + j * 7 ; 
            if(N == res){
                cout << "Yes" << endl;
                return 0 ;
            }
        }
    }
    
    cout << "No" << endl;
    return 0 ;
}