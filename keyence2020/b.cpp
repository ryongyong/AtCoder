#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 

    vector<long long> X(N) , L(N);
    for(int i = 0 ; i < N ;i++){
        cin >> X.at(i) >> L.at(i);
    }

    vector<pair<long long, long long> >  A(N);
    for(int i = 0 ; i < N ; i++){
        long long s , t ;
        s = X.at(i) - L.at(i);
        t = X.at(i) + L.at(i);
        A.at(i) = make_pair(t,s);
    }

    sort(A.begin() , A.end()) ;

    long long ans = 1;
    long long now = A.at(0).first ;
    for(int i = 1 ; i < N ; i++){
        if(now <= A.at(i).second){
            now = A.at(i).first ;
            ans++ ;
        }
    }

    cout << ans << endl;


}