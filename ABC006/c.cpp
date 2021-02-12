#include<bits/stdc++.h>
using namespace std ; 


/*
 2i + 3j + 4k = M 
 i + j + k = N 

 k = N - j - i 
 M = 2i + 3j + 4N - 4j - 4i = 4N - 2i - j 
 

 j = 4N - 2i - M 

 M = 2i + 12N - 6i - 3M +  4k
 4M = -4i + 12N + 4k 
 4k = 4i - 12N + 4M 


   k = i - 3N + M 
   j = 4N - 2i - M  この２式
*/


int main(){
    int N , M ; 
    cin >> N >> M ; 
    
    for(int i = 0 ; i <= N ; i++){
        int j = 4*N - 2*i - M ; 
        int k = i - 3* N + M ;

        if( j >= 0 && k >= 0  ){
            cout << i << " " << j << " " << k << endl;
            return 0 ;
        } 
        
    }

    cout << -1 << " " << -1 << " " << -1 << endl;
}