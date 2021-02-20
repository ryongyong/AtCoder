#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N ; 
    cin >> N ; 

    vector<int > A(N) ;
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;


    deque<int > ans ;
    for(int i = 0 ; i < N ; i++){
        int a = A.at(i) ;
        int itr = lower_bound(ans.begin() , ans.end() , a) - ans.begin() ; //a以上となる最初のイテレータ
        if(itr == 0 ) ans.push_front(a) ; // 今までで一番小さいなら色は絶対増える
        else ans.at(itr - 1) = a ; // 
    }

    cout << ans.size() << endl;

}