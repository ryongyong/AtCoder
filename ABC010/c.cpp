#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int > P(2) , N(2) ; 
    int T , V ;
    cin >> P.at(0) >> P.at(1) >> N.at(0) >> N.at(1) >> T >> V ;
    int n ; 
    cin >> n ; 
    vector<vector<int > > G(n , vector<int>(2)) ; 
    for(int i = 0 ; i < n ; i++)for(int j = 0 ; j < 2 ; j++){
        cin >> G.at(i).at(j) ; 
    } 
    int dist ; 
    for(int i = 0 ; i < n ; i++){
        dist = ((P.at(0) - G.at(i).at(0))*(P.at(0) - G.at(i).at(0))) + ((P.at(1) - G.at(i).at(1)) * (P.at(1) - G.at(i).at(1))) ; 
        double distP = sqrt(dist) ; 
        dist = ((N.at(0) - G.at(i).at(0))*(N.at(0) - G.at(i).at(0))) + ((N.at(1) - G.at(i).at(1)) * (N.at(1) - G.at(i).at(1))) ; 
        double distN = sqrt(dist) ; 
        //cout << distP << " " << distN << endl;
        if(distP + distN <= T*V + 0.1){
            cout << "YES" << endl;
            return 0 ; 
        }
    }

    cout << "NO" << endl;

}