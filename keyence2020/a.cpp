#include<bits/stdc++.h>
using namespace std ;

int main(){
    int H , W , N ; 
    cin >> H >> W >> N ; 

    int cnt_max = max(H , W) ;
    int ans = N/cnt_max ;

    if(N % cnt_max != 0 ) ans++ ;   

    cout << ans << endl;
}