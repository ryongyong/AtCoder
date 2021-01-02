#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<int > x(N) , y(N) ;
    for(int i = 0 ;i < N ; i++){
        cin >> x.at(i) >> y.at(i) ;
    }
    long long cnt = 0 ;

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            if(i == j) continue ;

            double dx = x.at(i) - x.at(j) ;
            double dy = y.at(i) - y.at(j) ;
            if(dy/dx <= 1 && dy/dx >= -1){
                cnt++ ;
            }

        }
    }

    cout << cnt/2 << endl;
}