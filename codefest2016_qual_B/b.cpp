#include<bits/stdc++.h>
using namespace std;

int main(){
    int N , A , B ; 
    string S ;
    cin >> N >> A >> B ;
    cin >> S ; 

    int cnt_whole = 0  ; 
    int cnt_out = 0 ; 

    for(int i = 0 ; i < N ; i++){
        cnt_whole++ ;

        if(S.at(i) == 'a'){
            if(cnt_whole <= A + B ){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }

        if(S.at(i) == 'b'){
            cnt_out++ ; 
            if(cnt_whole  <= A+B && (cnt_out <= B)){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
                cnt_whole-- ; 
            }
        }

        if(S.at(i) == 'c'){
            cnt_whole--;
            cout << "No" << endl;
        }
        

    }

}