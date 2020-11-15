#include<bits/stdc++.h>
using namespace std ; 

int main(){
    string S , T ; 
    cin >> S ;
    T = "keyence" ; 

    for(int j = 0 ; j <= T.size() ; j++){
        string A = T.substr(0, j) ; 
        string B = T.substr(j , T.size()); 

        for(int i = 0 ; i <= S.size() ; i++){
            for(int k = i ; k <= S.size() ; k++){
                    string C = S.substr(0 , i) ; 
                    string D = S.substr(k , S.size()) ;         

                    if(C == A && B == D){
                        cout << "YES" << endl;
                        return 0 ; 
                    
                }
            }
        }   
    }


    cout << "NO" << endl;

}