#include<bits/stdc++.h>
using namespace std ; 

int main(){
    double sx ;
    long long sy ; 
    cin >> sx >> sy ; 
    double gx ;
    long long  gy ; 
    cin >> gx >> gy ; 
    if(gx < sx){
        swap(gx, sx) ; 
        swap(gy , sy) ; 
    }
    long double deltax = gx - sx ; 
    long double deltay = -gy - sy ; 

    sx += -deltax/deltay * sy ; 
    cout << fixed << setprecision(15) << sx << endl;
}