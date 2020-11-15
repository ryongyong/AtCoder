#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,x;
  cin >> N >> x;
  vector<int> a(N);
  for(int i=0;i<N;i++){
    cin >> a.at(i);
  }
  
  sort(a.begin(),a.end());
  int cnt=0;
  
  for(int i=0;i<N;i++){
    x -= a.at(i);
    if(x < 0 )break;
    if(x > 0 && i == N - 1)break;
    cnt++;
  }
  cout << cnt << endl;
}

