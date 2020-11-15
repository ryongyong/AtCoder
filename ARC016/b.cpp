#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<string> S(N) ; 
    int M = 9 ; 
    int ans = 0 ; 

    for(int i = 0 ; i < N; i++) cin >> S.at(i) ; 

    vector<int > P(M) ;  
    for(int i = 0 ; i < N ;i++){
        for(int j = 0 ; j < M ; j++){
            if(S.at(i).at(j) == 'x')  ans++ ; 
            if(S.at(i).at(j) == 'o' && P.at(j) == 0 ){
                P.at(j) = 1 ; 
                ans++ ;  
            }
            else if(S.at(i).at(j) != 'o' && P.at(j) == 1){
                P.at(j) = 0 ; 
            }
        }
    }

    cout << ans << endl;
}