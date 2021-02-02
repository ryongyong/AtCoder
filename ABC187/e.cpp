#include<bits/stdc++.h>
using namespace std ;

int N ; 
vector<vector<int > > es ; 
vector<int > A , B ; 

void DepthDFS(int a , int d , vector<int> &depth){
    depth.at(a) = d ; 
    for(int next : es.at(a)){
        if(depth.at(next) == -1){
            DepthDFS(next , d+1 , depth) ;
        }
    }
}

void ImosDFS(int a , long long now , vector<int> &depth , vector<long long > &dp){
    now += dp.at(a) ;
    dp.at(a) = now ;//今の点に書かれている値を足して更新
    for(int next : es.at(a)){
        if(depth.at(next) > depth.at(a)){ // next の方が深い==下
            ImosDFS(next , now , depth , dp) ;
        }
    }
}


int main(){
    cin >> N ; 
    es.resize(N);
    A.resize(N - 1) ;
    B.resize(N - 1 ) ;
    vector<int> depth(N , -1) ;
    vector<long long > dp(N , 0 ) ;

    for(int i = 0 ; i < N-1 ; i++){
        cin >> A.at(i) >> B.at(i) ;
        A.at(i)-- ;
        B.at(i)-- ; 
        es.at(B.at(i)).push_back(A.at(i)) ;
        es.at(A.at(i)).push_back(B.at(i)) ;
    }

    DepthDFS(0,0,depth) ; 

    int Q ; 
    cin >> Q ; 
    for(int i = 0 ; i < Q ; i++){
        int t , e , x ; 
        cin >> t >> e >> x ; 
        e-- ; 

        int va , vb ; //va = 始点 , vb = 通れない点
        if (t == 1){
            va = A.at(e) ;
            vb = B.at(e) ;
        }
        else{
            va = B.at(e) ;
            vb = A.at(e) ;            
        }

        if(depth.at(va) < depth.at(vb)){ //depthが小さい方が上
            //通れない点が下なら根に足してimos
            dp.at(0) += x ;
            dp.at(vb) -= x ; 
        }
        else{
            dp.at(va) += x ; 
        }
    }
    
    ImosDFS(0 , 0 , depth , dp) ; 

    for(int i = 0 ; i < N ; i++){
        cout << dp.at(i) << endl;
    }
    return 0 ;


}