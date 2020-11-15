#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int H , W , N ; 
    cin >> H >> W >> N ; 
    vector<vector<int > > HW(H , vector<int >(W));
    
    vector<int > x(N) , y(N) , a(N) ; 
    for(int i = 0 ; i < N ; i ++){
        cin >> x.at(i) >> y.at(i) >> a.at(i) ; 
    }

    for(int i = 0 ; i < N ; i++){
        if(a.at(i) == 1){
            for(int k = 0 ; k < W ; k++)for(int j = 0 ; j < x.at(i) ; j++){
                HW.at(j).at(k) = 1 ; 
            }
        }
        else if(a.at(i) == 2){
            for(int k = 0 ; k < W ; k++)for(int j = x.at(i) ; j < H ; j++){
                HW.at(j).at(k) = 1 ; 
            }
        }
        else if(a.at(i) == 3){
            for(int k = 0 ; k < H ; k++)for(int j = 0 ; j < y.at(i) ; j++){
                HW.at(k).at(j) = 1 ; 
            }
        }
        else if(a.at(i) == 4){
            for(int k = 0 ; k < H ; k++)for(int j = y.at(i) ; j < W ; j++){
                HW.at(k).at(j) = 1 ; 
            }
        }
    }
    int cnt = 0 ; 
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ;j++){
            if(HW.at(i).at(j) == 1) cnt++ ; 
        }
    }
    cout << H*W - cnt << endl;
}