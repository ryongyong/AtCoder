#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N , M , X , Y ; 
    cin >> N >> M >> X >> Y ; 
    vector<int> x(N) , y(M) ; 
    for(int i = 0 ; i < N ; i++) cin >> x.at(i) ; 
    for(int i = 0 ; i < M ; i++) cin >> y.at(i) ; 

    int x_min = 1000 , x_max = X ; 
    int y_min = Y , y_max = -1000 ; 

    for(int i = 0 ; i < N ; i++){
        x_min = min(x_min , x.at(i)) ; 
        x_max = max(x_max , x.at(i)) ; 
    }

    for(int i  = 0 ; i < M ; i++){
        y_min = min(y_min , y.at(i));
        y_max = max(y_max , y.at(i));
    }
    //cout << y_min << " " << endl; 
    //cout << x_max << " " ;

    if(x_max < y_min ) cout << "No War" << endl; 
    else cout << "War" << endl; 
    return 0 ; 
}