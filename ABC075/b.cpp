#include<bits/stdc++.h>
using namespace std ;

int main(){
  int H , W ; 
  cin >> H >> W ; 
  vector<string> S(H) ;
  vector<vector<char> > V(H , vector<char>(W)) ; 
  for(int i = 0 ; i < H ;i++) cin >> S.at(i) ; 
  
  
  
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      int cnt = 0 ; 
      if(S.at(i).at(j) == '#'){
        V.at(i).at(j) = '#' ; 
        continue ;
      }
      
      if(i+1 < H)if(S.at(i+1).at(j) == '#') cnt++ ; 
      if(i-1 >= 0)if(S.at(i-1).at(j) == '#') cnt++ ; 
      if(j+1 < W)if(S.at(i).at(j+1) == '#') cnt++ ; 
      if(j-1 >= 0)if(S.at(i).at(j-1) == '#') cnt++ ; 
      
      if(j-1 >= 0 && i-1 >= 0 )if(S.at(i-1).at(j-1) == '#') cnt++ ; 
      if(j+1 < W && i+1 < H )if(S.at(i+1).at(j+1) == '#') cnt++ ; 
      if(j-1 >= 0 && i+1 < H )if(S.at(i+1).at(j-1) == '#') cnt++ ; 
      if(j+1 < W && i-1 >= 0 )if(S.at(i-1).at(j+1) == '#') cnt++ ; 
      V.at(i).at(j) = char(cnt + '0') ; 
    }
  }
  
  for(int i = 0 ; i < H ; i++){
    for(int j = 0 ; j < W ; j++){
      cout << V.at(i).at(j) ;
    }
    cout << endl;
  }
}