//*https://atcoder.jp/contests/abc391/tasks/abc391_b
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int bn[n][n] , bm[m][m];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> bn[i][j];
        }
    }
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j < m; j++){
            cin >> bm[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            for(int k = 1; k < n-m+1; k++){
                for(int l = 0; l < n-m+1){
                    
                }
            }
        }
    }
}