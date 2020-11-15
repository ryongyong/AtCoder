#include<bits/stdc++.h>
using namespace std ;

int main() {
  int N; cin >> N;
  vector<int> A(N);
  for(int i = 0 ; i < N ; i++) cin >> A.at(i);  

  A.erase(unique(A.begin(), A.end()), A.end());
  int ans = 1;
  for(int i = 2 ; i < A.size() ; i++){

    if((A.at(i-2) < A.at(i - 1) && A.at(i - 1) > A.at(i)) || (A.at(i-2) > A.at(i-1) && A.at(i-1) < A.at(i))){
      ans++;
      i++;
    }
  }
  cout << ans << endl;
}