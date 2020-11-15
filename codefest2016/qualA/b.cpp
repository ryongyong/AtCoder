#include<bits/stdc++.h>
using namespace std;

int main(){
    int N ; 
    cin >> N ; 
    vector<int> a(N) ; 
    for(int i  = 0 ; i < N ; i++) cin >> a.at(i) ; 
    int cnt = 0 ;
    for(int i = 0 ; i < N ; i++){
        int j = a.at(i) ; 
        if( i + 1 == a.at(j-1) && j == a.at(i)) cnt++ ; 
    }

    cout << cnt/2 << endl;
}