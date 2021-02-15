#include<bits/stdc++.h>
using namespace std ;

void solve(vector<int > B , int N ){
    vector<int > ans(N) ;

    for(int i = 0 ; i < N ; i++){
        int now = -1 ;
        for(int j = B.size()-1 ; j >= 0 ; j--){
            if(B.at(j) == j){
                now = j ;
                break ;
            }
        }

        if(now == -1){
            cout << -1 << endl;
            return ;
        }

        ans.at(i) = now + 1 ;
        B.erase(B.begin() + now) ;
    }

    for(int i = N -1 ; i >= 0 ; i--){
        cout << ans.at(i) << endl;
    }

}

int main(){
    int N ;
    cin >> N ; 
    vector<int > B(N)  ;

    for(int i = 0 ; i < N ; i++){
        cin >> B.at(i) ;
        B.at(i)-- ;
    }

    solve(B , N ) ;

}