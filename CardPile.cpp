//*https://atcoder.jp/contests/abc396/tasks/abc396_b
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , temp;
    cin>> n;
    vector<int> cp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 1){
            cin >> temp;
            cp.push_back(temp);
        }
        else{
            if(cp.size() == 0){
                cout << 0 << endl;
            }
            else{
                cout << cp[cp.size() - 1] << endl;
                cp.pop_back();
            }
        }
    }
}