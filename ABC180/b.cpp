#include<bits/stdc++.h>
using namespace std ;
int main(){
    int N ; 
    cin >> N ; 
    vector<double > x(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> x.at(i) ; 
    double m = 0 ; 
    double u = 0 ; 
    double c = 0 ; 
    for(int i = 0 ; i < N ; i++){
        m += abs(x.at(i)) ; 
        u += abs(x.at(i))*abs(x.at(i)) ;
        c = max(abs(x.at(i)), c) ; 
    } 
    cout << fixed << setprecision(10) ;
    cout << m << endl;
    cout << sqrt(u) << endl;
    cout << c << endl; 
}