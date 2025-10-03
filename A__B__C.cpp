//*https://atcoder.jp/contests/abc393/tasks/abc393_b
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int count = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            for(int j = i+1; j < s.size(); j++){
                if(s[j] == 'B' && s[j + j - i] == 'C'){
                    count++;
                }
            }
        }
    }
    cout << count;
}