#include<bits/stdc++.h>
using namespace std ;
int dx[4] = {1 , -1 , 0 , 0} ; 
int dy[4] = {0 , 0 , 1 , -1} ; 

int main(){
    int H , W ; 
    cin >> H >> W ; 
    vector<string > S(H) ; 
    for(int i = 0 ; i < H ; i++) cin >> S.at(i) ;

    int white_cnt = 0 ; 

    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            if(S.at(i).at(j) == '.') white_cnt++ ; 
        }
    }

    int sx = 0 ; 
    int sy = 0 ; 
    queue<pair<int , int > > q ; 
    q.push(make_pair(sx,sy)) ; 
    vector<vector<int > > dist(H , vector<int > (W,-1)) ; 
    dist.at(sx).at(sy) = 0 ; 

    while(!q.empty()){
        auto a = q.front() ; 
        q.pop(); 
        int x = a.first ; 
        int y = a.second ; 

        for(int i = 0 ; i < 4 ; i++){
            int nx , ny ; 
            nx = a.first + dx[i];
            ny = a.second + dy[i] ; 
            if(nx < 0 || ny < 0 || nx >= H || ny >= W ) continue ; 
            if(S.at(nx).at(ny) == '#') continue ; 

            if(dist.at(nx).at(ny) == -1){
                dist.at(nx).at(ny) = dist.at(x).at(y) + 1 ; 
                q.push(make_pair(nx , ny)) ;
            }
        }
    }

    if(dist.at(H-1).at(W-1) == -1){
        cout << -1 << endl;
        return 0 ; 
    }
    else{
        cout << white_cnt - ( dist.at(H-1).at(W-1) + 1)  << endl;
        return 0 ; 
    }
}

