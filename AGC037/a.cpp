#include<bits/stdc++.h>
using namespace std ; 


template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }


int main(){
    string S ; 
    cin >> S ; 
    int N = S.size() ; 
    vector<vector<int > > dp(N+1 , vector<int > (3 , -1)) ; 
    dp.at(0).at(0)= 0 ; 

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j <= min(i , 2) ; j++){
            string suffix = S.substr(i - j , j) ;
            for(int add = 1 ; add <= 2 && i + add <=N ; add++){
                if(S.substr(i , add) != suffix){
                    chmax(dp.at(i + add).at(add) , dp.at(i).at(j)+1 ); 
                }
            }
        }
    }
    cout << max(dp[N][1], dp[N][2]) << endl;

}