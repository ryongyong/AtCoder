#include<bits/stdc++.h>
using namespace std ;

int main(){
    int H , W ; 
    cin >> H >> W ;
    int N ; 
    cin >> N ;
    vector<int > a(N);
    for(int i = 0 ; i < N ; i++) cin >> a.at(i);

    queue<int > que ;

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < a.at(i) ; j++){
            que.push(i+1) ; //塗るべき色をqueueに突っ込む
        }
    }

    vector<vector<int > > G(H , vector<int >(W, 0)) ;

    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            int c = que.front() ;
            if(i % 2 == 0 ){
                G.at(i).at(j) = c ;
            }
            else{
                G.at(i).at(W - j - 1) = c ;
            }
            que.pop() ;
        }
    }

    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            cout << G.at(i).at(j) << " " ;
        }

        cout << endl;
    }
}