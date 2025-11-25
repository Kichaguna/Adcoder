//*https://atcoder.jp/contests/abc431/tasks/abc431_c
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , m , k , pre = 0;
    bool ismax = false;
    cin >> n >> m >> k;
    int head[m] , body[k];
    for(int i = 0; i < m; i++){
        cin >> head[i];
    }
    for(int i = 0; i < k; i++){
        cin >> body[i];
    }
    sort(head , head + m);
    sort(body , body + k);
    for(int i = 0; i < n; i++){
        bool isbuild = false;
        for(int j = pre; j < k; j++){
            if(head[i] <= body[j]){
                isbuild = true;
                pre = j + 1;
                break;
            }
        }
        if(!isbuild){
            cout << "No";
            return 0;
        }
        if(i == n-1){
            ismax = true;
        }
    }
    cout << "Yes";
}