#include<bits/stdc++.h>
using namespace std ;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    int H , W ; 
    cin >> H >> W ; 
    vector<string > a(H) ; 
    for(int i = 0 ; i < H ; i++) cin >> a.at(i) ; 

    int sx , sy , gx , gy ; //start : sx,sy     // goal : gx , gy 
    vector<vector<pair<int ,int > > >  pw(26) ; //ワープマス座標 i , j をプッシュしたい

    for(int i = 0 ;i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            if(a.at(i).at(j) == 'S'){
                sx = i ;
                sy = j ; 
            }
            else if(a.at(i).at(j) == 'G'){
                gx = i ; 
                gy = j ; 
            }
            else if( a.at(i).at(j) >= 'a' && a.at(i).at(j) <= 'z'){
                pw.at(a.at(i).at(j) - 'a').push_back(make_pair(i , j)) ; 
            }
        }
    }
    vector<bool> used(26, false);    
    vector<vector<int> > dist(H, vector<int>(W, -1)); //distance of start to (i , j)
    dist.at(sx).at(sy) = 0 ; 

    queue<pair<int ,int > > que ; 
    que.push(make_pair(sx , sy)) ; 

    while(!que.empty()){
        auto tmp = que.front();
        que.pop();
        int x = tmp.first ; 
        int y = tmp.second;

        if(a.at(x).at(y) >= 'a' && a.at(x).at(y) <= 'z'){
            int c = a[x][y] - 'a';
            if(!used.at(c)){
                for(auto p : pw.at(c)){
                    if(dist.at(p.first).at(p.second) == -1){ // すでに通ったワープはしない
                        dist.at(p.first).at(p.second) = dist.at(x).at(y) + 1;
                        que.push(p);                        
                    }
                }
            }
            used.at(c) = true ; //そのワープマスを使ったらtrue 
        }

        for(int i = 0  ; i < 4 ; i++){
            int new_x = x + dx[i] ; 
            int new_y = y + dy[i] ; 
            if (new_x < 0 || new_x >= H || new_y < 0 || new_y >= W || a[new_x][new_y] == '#') continue ; 

            if(dist.at(new_x).at(new_y) == -1){ //まだたどり着いてないところだったら
                dist.at(new_x).at(new_y) = dist.at(x).at(y)+1 ; 
                que.push(make_pair(new_x , new_y )) ; 
            }
        }


    }

    cout << dist.at(gx).at(gy) << endl;

}