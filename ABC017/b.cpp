#include<bits/stdc++.h>
using namespace std ;

int main() {
  string X;
  cin >> X;

  for(int i = 0 ; i < X.size(); i++) {
    if (X[i] == 'c' && X[i + 1] == 'h') i = i + 2;
    if (X[i] == 'o' || X[i] == 'k' || X[i] == 'u') i++;
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}