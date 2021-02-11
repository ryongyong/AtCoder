#include<bits/stdc++.h>
using namespace std ;

int main(){
    int T , N; 
    cin >> T >> N ; 
    queue<int> A ;

    for(int i = 0 ; i < N ; i++){
        int a ; 
        cin >> a ; 
        A.push(a) ;
    }


    int M ; 
    cin >> M ; 
    queue<int> B ;
    for(int i = 0 ; i < M ; i++){
        int b ;
        cin >> b ; 
        B.push(b) ;
    }

    if( N < M ){
        cout << "no" << endl;
        return 0 ;
    }

    while(!A.empty()){ // たこやきがなくなるまで
        if(B.front() - A.front() <= T && B.front() - A.front() >= 0){
            B.pop() ;//たこやきが売れる場合, 次のお客へ
        }
        A.pop() ; // たこやきが売れるならpop , 売れないならそのたこやきは一生売れないのでpop
    }

    if(B.empty()) cout << "yes" << endl;
    else cout << "no" << endl;

}