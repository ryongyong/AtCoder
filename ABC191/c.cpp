#include<bits/stdc++.h>
using namespace std ;

const vector<int > dx = {0 , 0 , -1 , -1} ;
const vector<int > dy = {0 , -1 , 0 , -1} ;

int main(){
    int H , W ; 
    cin >> H >> W ; 
    vector<string> S(H) ;
    int edge = 0 ;

    for(int i = 0 ; i < H ; i++){
        cin >> S.at(i) ;
    }

    for(int i = 1 ; i < H ; i++){
        for(int j = 1 ; j < W; j++){
            int cnt = 0 ;
            for(int k = 0 ; k < 4 ; k++){
                int nx = j + dx.at(k) ; 
                int ny = i + dy.at(k) ; 

                if(S.at(ny).at(nx) == '#') cnt++ ;

            }

            if(cnt == 3 || cnt == 1)  edge++ ;
        }
    }

    cout << edge << endl;
}