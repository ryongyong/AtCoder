#include<bits/stdc++.h>
using namespace std ;


void dfs(string S , int N){
    if(S.size() == N){
        cout << S << endl;
        return ;
    }

    for(char C = 'a' ; C < 'd' ; C++){
        string t = S ; 
        t += C ; 
        dfs(t, N);
    }
}

int main(){
    int N ;
    cin >> N ;
    dfs("",N) ; 
    
}