#include<bits/stdc++.h>
using namespace std ;

int main(){
    string O , E ; 
    cin >> O >> E ;

    deque<char> P , Q ; 
    for(int i = 0 ; i < O.size() ; i++) P.push_back(O.at(i)) ; 
    for(int i = 0 ; i < E.size() ; i++) Q.push_back(E.at(i)) ; 

    while(!P.empty() || !Q.empty()){
        if(!P.empty()){
            cout << P.front() ; 
            P.pop_front() ; 
        }
        if(!Q.empty()){
            cout << Q.front() ; 
            Q.pop_front() ; 
        }
    }
    cout << endl;

}