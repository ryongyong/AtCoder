#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S , T ; 
    cin >> S >> T ; 
    int N = S.size() ; 

    vector<vector<int > > StoT(26 , vector<int>(26)) ;//alphabetは26個

    for(int i = 0 ; i < N ; i++){
        int a = S.at(i)-'a' ; 
        int b = T.at(i)-'a' ; 
        StoT.at(a).at(b) = 1 ; //S_i は　T_i　に変換されなければならないなら1
                               // 逆にT_i もS_iに変換されなければならない (一意)
    }

    for(int i = 0 ; i < 26 ; i++){
        int cnt = 0 ; 
        for(int j = 0 ; j < 26 ;j++){
            if(StoT.at(i).at(j) > 0 ) cnt++ ;  //アルファベットiからjへの変換がいくつあるか？
        }
        if(cnt > 1){//各アルファベットiについてjが２つ以上対応するととダメ
            cout << "No" << endl;
            return 0 ; 
        }
    }
    for(int j = 0 ; j < 26 ; j++){
        int cnt = 0 ; 
        for(int i = 0 ; i < 26 ;i++){
            if(StoT.at(i).at(j) > 0 ) cnt++ ;  
        }
        if(cnt > 1){
            cout << "No" << endl;
            return 0 ; 
        }
    }    

    cout << "Yes" << endl;
    
}