#include<bits/stdc++.h>
using namespace std ;
int dx[4] = {1 , -1, 0 , 0 } ; 
int dy[4] = {0 , 0, 1 , -1 } ; 


int main(){
    int H , W ;
    cin >> H >> W ; 
    vector<string> A(H) ; 
    for(int i = 0 ; i < H ; i++) cin >> A.at(i) ; 

    queue<pair<int , int >  > que ; 
    vector<vector<int > > dist(H , vector<int > (W, -1)) ; 

    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            if(A.at(i).at(j) == '#'){
                que.push(make_pair(i,j)) ; 
                dist.at(i).at(j) = 0 ; 
            }
        }
    }

    while(!que.empty()){
        auto a = que.front() ;
        que.pop() ;  
        for(int i = 0 ; i < 4 ; i++){
            int nx = a.first + dx[i] ; 
            int ny = a.second + dy[i] ;
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue ;
            if(dist.at(nx).at((ny)) ==  -1 ){
                dist.at(nx).at(ny) = dist.at(a.first).at(a.second) + 1 ; 
                que.push(make_pair(nx, ny));
            }
        }
    }
    
    int ans = 0 ; 
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            ans = max(ans , dist.at(i).at(j)) ; 
        }
    }

    cout << ans << endl;

    
}