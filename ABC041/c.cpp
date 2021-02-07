#include<bits/stdc++.h>
using namespace std ;


int main(){
    int N ; 
    cin >> N ; 
    vector<long long > A(N); 
    for(int i = 0 ; i < N ; i++) cin >>A.at(i) ;
    vector<pair<long long , int> > P(N) ;
    for(int i = 0 ; i < N ; i++){
        P.at(i) = make_pair(A.at(i), i) ; 
    }
    sort(P.begin(),P.end()) ;
    reverse(P.begin() , P.end()) ;

    for(int i = 0 ; i < N ; i++){
        cout << P.at(i).second + 1 << endl;
    }
}