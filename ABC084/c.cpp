#include<bits/stdc++.h>
using namespace std ;
int main(){
    int N ; 
    cin >> N ; 
    vector<int> C(N) , S(N) , F(N) ; 
    for(int i = 0 ; i < N-1 ; i++){
        cin >> C.at(i) >> S.at(i) >> F.at(i) ; 
    }

    for(int i = 0 ; i < N-1  ; i++){
        long long  ans = S.at(i) ; 
        ans += C.at(i) ; 
        //cout << ans << endl;
        for(int j = i+1; j < N-1 ; j++){
            if(ans < S.at(j)) ans = S.at(j) ; 
            else if(ans % F.at(j) == 0 ){
                ans = ans ; 
            }
            else{
                ans = ans + F.at(j) - ans%F.at(j) ; 
            }
            //cout << j << endl ;
            ans += C.at(j) ; 
            //cout << ans << endl; 
            
        }
        //cout << endl; 
        cout << ans << endl;
        //cout << endl;
    }

    cout << 0 << endl;
}