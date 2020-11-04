#include<bits/stdc++.h>
using namespace std ; 

int main() {
  int N , M , K ;
  cin >> N >> M >> K ; 
  vector<int> A(N) , B(M) ;  
  
  for(int i = 0 ; i < N ; i++){
    cin >> A.at(i) ; 
  }
  for(int i = 0 ; i < M ; i++){
    cin >> B.at(i) ; 
  }
  
  int64_t T = 0 ; 
  for(int i = 0 ; i < M ; i++) T += B.at(i) ; //Bの机から全部読んだ時の時間
  int j = M ; //B机から全部読んだ札数
  int ans = 0 ; //最終的な答え
  
  for(int i = 0 ; i <= N ; i++){
    while ( j > 0 && T > K ){
      --j ; 
      T -= B.at(j) ; 
    }
    if(T > K) break ; 
    ans = max(ans , i+j) ; 
    if(i == N) break ;
    
    T += A.at(i) ;
  }
  
  cout << ans << endl ; 

}