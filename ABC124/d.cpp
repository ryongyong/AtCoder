#include<bits/stdc++.h>
using namespace std ; 

//run-length-encoding
vector<pair<char, int>> runLengthEncoding(string s) {
	int n = s.length();

	vector<pair<char, int>> res;
	char pre = s[0];
	int cnt = 1;
	for(int i = 1 ; i < n ; i++){
		if (pre != s[i]) {
			res.push_back({ pre, cnt });
			pre = s[i];
			cnt = 1;
		}
		else cnt++;
	}

	res.push_back({ pre, cnt });
	return res;
}

int main(){
    int N , K ; 
    cin >> N >> K ; 
    string S ;
    cin >> S ;
    
    auto blocks = runLengthEncoding(S) ;
    int M = blocks.size() ;
    int ans , sm ,L , zero ; 
    ans = sm = L = zero = 0 ;

    for(int R = 0 ; R < M ; R++){
        sm += blocks.at(R).second ;
        if(blocks.at(R).first == '0') zero++ ;

        while( K < zero){ //支持回数を超える場合,尺取り
            sm -= blocks.at(L).second ;
            if(blocks.at(L).first == '0') zero-- ;
            L++ ;
        }

        ans = max(ans , sm ) ;
    }
    cout << ans << endl;
}