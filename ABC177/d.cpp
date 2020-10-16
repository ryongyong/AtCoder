#include<bits/stdc++.h>
using namespace std ;
using ll = long long  ;

vector<int> par ; 

int root(int x) { //入力xの根を調べる
  if(par[x] ==x) return x ; 
  return par[x] = root(par[x]) ; 
}

void unite(int x , int y ) {//連結クエリの場合、xとyを連結
  int rx = root(x) ; 
  int ry = root(y) ; 
  
  if(rx == ry) return ; //もうすでに連結されてるよ〜？
  par[rx] = ry ;//まだ繋がってなかったよ！
}

bool same(int x , int y ){//入力x、yの根は同じかな？
  int rx = root(x) ; 
  int ry = root(y) ; 
  return rx == ry ; //同じならtrue
}

int main(){
  int N , M ; 
  cin >> N >> M ; 
  par.resize(N+1) ; 
  
  for(int i = 1 ; i <= N ; i++) par[i] = i ; //初期状態として頂点は全て自分自身が根
  
  for(int i = 0 ; i < M ; i++){
    int A , B ; 
    cin >> A >> B ; 
    unite(A,B) ; //連結クエリ
  }
  vector<int> cnt(N+1) ; 
  for(int i = 1 ; i <= N ; i++){
    cnt.at(root(i))++;
  }
  
  sort(cnt.begin(),cnt.end());
  reverse(cnt.begin(),cnt.end());
  
  cout << cnt.at(0)<< endl ; 
  
  return 0 ; 
}