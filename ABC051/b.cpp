#include<bits/stdc++.h>
using namespace std ;

int main(){
    int K , S ; 
    cin >> K >> S ; 

    int res = 0 ;

    for(int i = 0 ; i <= K ; i++){
        for(int j = 0 ; j <= K ; j++){
            int Z = S - i - j ; 
            
            if(Z >= 0 && Z <= K){
                res++ ; 
            }
        }
    }

    cout << res << endl;
}