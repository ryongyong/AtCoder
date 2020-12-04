#include<bits/stdc++.h>
using namespace std ;


/////
/////後ろからのgreedy
/////
int main(){
    int N ,M ;
    cin >> N >> M ; 
    map<int  , vector<int  > > v ; //first:何日後　　second:いくらもらえるか

    for(int i = 0 ; i < N ; i++){
        int  a , b ; 
        cin >> a >> b ; 
        v[a].push_back(b) ; 
    }

    long long ans = 0 ; 
    priority_queue<int  > pq ; 

    for(int i = 0 ; i < M + 1 ; i++ ){ // 夏休み終了i日前
        for(int j = 0 ; j < v[i].size() ; j++){ // 終了i日前に給料jがもらえるもの
            pq.push(v[i].at(j)) ; 
        }
        if(pq.size() == 0 ) continue ; 
        ans += pq.top() ; //一番多く給料がもらえるものを受ける
        pq.pop() ; 
    }

    cout << ans << endl;
}