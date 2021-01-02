#include<bits/stdc++.h>
#include <sstream>
using namespace std ;
std::stringstream ss;
int main(){
    long long N ; 
    cin >> N ; 
    long long ans = 0 ;

    for(int i = 1 ; i <= N; i++){
        string s = to_string(i) ; 
        int T = s.size() ; 
        int j = 0 ;
        bool ok = false ;
        bool ok2 = false ;  

        while( j < T){
            if(s.at(j) == '7'){
                ok = true ;  
            }
            j++ ; 
        }

        int k = i ; 
        while( k / 8 ){
            if(k % 8 == 7 ){
                ok2 = true ;
                k /= 8 ; 
                //cout << i << endl;
            }
        k /= 8 ; 
        }

        if(k%8 == 7){
            ok2 = true ; 
            //cout << i << endl;
        }
        if(ok || ok2) ans++  ; 
        
    }
    cout << N - ans << endl;
}