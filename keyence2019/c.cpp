#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ;
    cin >> N ; 
    vector<long long > A(N) , B(N) ;

    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;
    for(int i = 0 ; i < N ; i++) cin >> B.at(i) ;
    long long cnt = 0 ;
    long long res = 0 ;

    vector<long long > D ; 

    for(int i = 0 ; i< N ; i++){
        if(A.at(i) <  B.at(i)){
            cnt -= B.at(i) - A.at(i) ; // 不足分の累計
            res++ ; //準備度が低いため絶対に変更しなければならない
        }
        else{
            D.push_back(A.at(i) - B.at(i)) ; //すでに準備度が高い
        }
    }


    sort(D.begin() , D.end()) ;
    reverse(D.begin() , D.end()) ;

    if(res == 0 ){ // 変更がいらない
        cout << 0 << endl;
        return 0 ;
    }
    else{//変更がいるとき、A-Bの差が大きいものから振り分けていく
 
        for(int i = 0 ; i < D.size() ; i++){
            cnt += D.at(i) ; // 超過しているところから不足分を補っていく
            res++ ; // 補うために、変更しなければならない個数をインクリメント
            if( 0 <= cnt) break ; 
        }

        if(0 <= cnt) cout << res << endl;
        else cout << -1 << endl;    
    }


}