//*https://atcoder.jp/contests/abc392/tasks/abc392_b
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , m;
    cin >> n >> m;
    if(n == m){
        cout << 0;
        return 0;
    }
    vector<bool> noap(n , true);
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        noap[temp-1] = false;
    }
    cout << n - m << endl;
    for(int i = 0; i < n; i++){
        if(noap[i]){
            cout << i+1 << " ";
        }
    }
}