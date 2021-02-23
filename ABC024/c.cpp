#include<bits/stdc++.h>
using namespace std ;


int main(){
    long long  N ;
    int  D , K ;
    cin >> N >> D >> K ;
    vector<long long > L(D) , R(D) ;

    for(int i = 0 ; i < D ; i++) cin >> L.at(i) >> R.at(i) ;

    for(int i = 0 ; i < K ; i++){
        int s , t ; 
        cin >> s >> t ;
        int day = 0 ;
        for(int i = 0 ; i < N ; i++){
            day++ ;
            if( s <= t){
                if(s >= L.at(i) && s <= R.at(i)) s = R.at(i) ;
                if(s >= t){
                    cout << day << endl;
                    break ;
                }
            }
            else{
                if(s >= L.at(i) && s <= R.at(i)) s = L.at(i) ;
                if(s <= t){
                    cout << day << endl;
                    break ;
                }       
            }

        }
    } 

}