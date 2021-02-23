#include<bits/stdc++.h>
using namespace std ;

int main() {
    int N , M ; 
    cin >> N >> M ; 

    vector<vector<bool> > G(N , vector<bool>(N));

    for(int i = 0 ; i < M ; i++){
        int a , b ; 
        cin >> a >> b ; 
        a-- ;
        b-- ;
        G.at(a).at(b) = true ;
        G.at(b).at(a) = true ;
    }

    vector<int > P(N) ;
    for(int i = 0 ; i < N ; i++) P.at(i)  = i ;

    int cnt = 0 ;

    do{
        if( P.at(0) != 0 ) break ;

        bool ok = true ;

        for(int i = 0 ; i < N - 1 ; i++){
            int from = P.at(i) ;
            int to = P.at(i+1) ;
            if(G.at(from).at(to) != true) ok = false ;
        }

        if(ok) cnt++ ;

    }while(next_permutation(P.begin() , P.end())) ;

    cout << cnt << endl;


}