//*https://atcoder.jp/contests/abc431/tasks/abc431_c
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , m , k , pre = 0;
    cin >> n >> m >> k;
    int head[n] , body[m];
    for(int i = 0; i < n; i++){
        cin >> head[i];
    }
    for(int i = 0; i < m; i++){
        cin >> body[i];
    }
    //cout << endl;
    sort(head , head + n);
    sort(body , body + m);
    /*for(int i = 0; i < n; i++){
        cout << head[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < m; i++){
        cout << body[i] << " ";
    }
    cout << endl;*/
    for(int i = 0; i < k; i++){
        bool isbuild = false;
        //cout << endl << head[i] << endl;
        for(int j = pre; j < m; j++){
            //cout << body[j] << " ";
            if(head[i] <= body[j]){
                isbuild = true;
                pre = j + 1;
                break;
            }
        }
        //cout << endl;
        if(!isbuild){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}