#include<bits/stdc++.h>
using namespace std ;

int main(){
    int H , W ;
    cin >> H >> W ; 
    vector<string > S(H) ; 
    for(int i = 0 ; i < H ; i++) cin >> S.at(i) ; 

    ////////////
    vector<vector<int > > left(H , vector<int> (W))  , right(H , vector<int> (W))  ;
    vector<vector<int > > up(H , vector<int> (W))  , down(H , vector<int> (W)) ; 
    ///何歩進めば壁に当たるか 
    /////////////

    for(int i = 0 ; i < H ; i++){
        int cnt = 0 ; 
        for(int j = 0 ; j < W ; j++){
            if(S.at(i).at(j) == '#') cnt = 0 ; 
            else cnt++ ; 
            left.at(i).at(j) = cnt ; 
        }
    }
    for(int i = 0 ; i < H ; i++){
        int cnt = 0 ; 
        for(int j = W-1 ; j >= 0 ; j--){
            if(S.at(i).at(j) == '#') cnt = 0 ; 
            else cnt++ ; 
            right.at(i).at(j) = cnt ; 
        }
    }
    for(int j = 0  ; j < W ; j++){
        int cnt = 0 ; 
        for(int i = 0 ; i < H ; i++){
            if(S.at(i).at(j) == '#') cnt = 0 ; 
            else cnt++ ; 
            up.at(i).at(j) = cnt ; 
        }
    }
    for(int j = 0 ; j < W ; j++){
        int cnt = 0 ; 
        for(int i = H-1 ; i >= 0 ; i--){
            if(S.at(i).at(j) == '#') cnt = 0 ; 
            else cnt++ ; 
            down.at(i).at(j) = cnt ; 
        }
    }    

    int ans= 0 ; 
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            if(S.at(i).at(j) == '#') continue ; 
            int cnt = 0 ; 
            cnt += right.at(i).at(j) ; 
            cnt += left.at(i).at(j) ;          
            cnt += down.at(i).at(j) ; 
            cnt += up.at(i).at(j) ;      
            cnt -= 3 ; 

            ans = max(ans , cnt );                       
        }
    }

    cout << ans << endl;

}