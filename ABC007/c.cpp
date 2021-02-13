#include<bits/stdc++.h>
using namespace std ;

// BFS書くだけ

const vector<int > dy = {0 , 1 , 0 , -1} ; 
const vector<int > dx = {1 , 0 , -1 , 0} ; 
const int INF = 100100010  ;

int main(){
    int R , C ; 
    cin >> R >> C ;
    int sy , sx , gy , gx ;
    cin >> sy >> sx >> gy >> gx ; 
    sy-- ; 
    sx-- ; 
    gy-- ;
    gx-- ;

    vector<string> c(R) ;
    vector<vector<int > > cost(R , vector<int >(C,INF)); 
    for(int i = 0 ; i < R ; i++) cin >> c.at(i) ;


    queue<pair<int , int >> que ;
    que.push(make_pair(sy , sx)) ;
    cost.at(sy).at(sx) = 0 ;

    while(!que.empty()){
        auto v = que.front() ;
        que.pop() ;

        for(int i = 0 ; i < 4 ; i++){
            int ny = v.first + dy.at(i) ;
            int nx = v.second + dx.at(i) ; 

            if(ny < 0 && ny >= R) continue ;
            if(nx < 0 && nx >= C) continue ;
            if(cost.at(ny).at(nx) != INF) continue ;

            if(c.at(ny).at(nx) == '.'){
                que.push(make_pair(ny , nx)) ;
                cost.at(ny).at(nx) = cost.at(v.first).at(v.second)+1 ;
            }
        }
    }

    cout << cost.at(gy).at(gx) << endl;
}