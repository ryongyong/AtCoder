#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ;
    vector<int > A(N+1) ,X(N+1,0) ; 
    for(int i = 1 ; i <= N ; i++) cin >> A.at(i) ; 

    for(int i = N ; i >= 1 ; i--){
        int sum = A.at(i) ;
        for(int j = i*2 ; j <= N ; j += i){
            sum += X.at(j) ;
        }
        X.at(i) = sum%2 ;
    }

    vector<int> res;
    for (int i = 1 ; i <= N ; i++) if (X.at(i) == 1) res.push_back(i);
    cout << res.size() << endl;
    for (auto v: res) cout << v << " ";
    cout << endl;    
}