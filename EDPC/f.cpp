#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s , t ; 
    cin >> s >> t ; 
    vector<vector<int > > dp(3010 , vector<int>(3010)) ; 

    //長さを最初に求める
    
    for(int i = 1 ; i <= s.size() ; i++){
        for(int j = 1 ; j <= t.size() ; j++){
            dp.at(i).at(j) = max(dp.at(i).at(j-1) , dp.at(i-1).at(j)) ; 
            if(s.at(i-1) == t.at(j-1)){
                dp.at(i).at(j) = max(dp.at(i).at(j), dp.at(i-1).at(j-1) + 1) ; 
            }
        }
    }

    int i = s.size() ; 
    int j = t.size() ; 

    string ans ; 

    while(i > 0 && j > 0 ){
        if(dp.at(i).at(j) == dp.at(i-1).at(j)) i-- ; 
        else if(dp.at(i).at(j) == dp.at(i).at(j-1)) j-- ; 
        else{
            i-- ; 
            j-- ; 
            ans.push_back(s.at(i)) ; 
        }
    }
    reverse(ans.begin() , ans.end()) ; 
    cout << ans << endl;
}