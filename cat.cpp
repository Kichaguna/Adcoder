//*https://atcoder.jp/contests/abc394/tasks/abc394_b
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , len;
    cin >> n;
    vector<bool> s_real(50 , false);
    string s[50] , temp;
    for(int i = 0 ; i < n; i++){
        cin >> temp;
        len = temp.size()-1;
        s[len] = temp;
        s_real[len] = true;
    }
    for(int i = 0; i < 50 ; i++){
        if(s_real[i]){
            cout << s[i];
        }
    }
}