#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    int cnt = 0 ; 
    vector<int> s(N) ; 
    vector<int> q ; 
    for(int i = 0 ; i < N ; i++){
        cin >> s.at(i) ; 
        cnt += s.at(i) ; 
        if(s.at(i) %10 != 0 ){
            q.push_back(s.at(i)) ; 
        }
    }

    if(cnt %10 != 0 ){
        cout << cnt << endl;
        return 0 ;
    } 

    if(!q.empty()){
        sort(q.begin() , q.end()) ; 
        for(int i = 0 ; i < N ; i++){
            cnt -= q.at(i) ; 
            if(cnt %10 != 0 ){
                cout << cnt << endl;
                return 0 ; 
            } 
        }
    }
    
    cout << 0 << endl;
}