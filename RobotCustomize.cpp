//*https://atcoder.jp/contests/abc431/tasks/abc431_d
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    unsigned long long int ans = 0;
    int n , count = 0, bw = 0 , hw = 0;
    cin >> n;
    vector<int> w , h , b , dif , difs;
    for(int i = 0; i < n; i++){
        int wt , ht , bt;
        cin >> wt >> ht >> bt;
        if(bt >= ht){
            ans += bt;
            bw += wt;
        }
        else{
            w.push_back(wt);
            h.push_back(ht);
            b.push_back(bt);
            dif.push_back(ht - bt);
            difs.push_back(ht - bt);
        }
    }
    sort(difs.begin() , difs.end());
    int vs = w.size() , wh[vs];
    for(int i = 0; i < vs; i++){
        for(int j = 0; j < vs; j++){
            if(dif[i] == difs[j]){
                wh[i] = j;
                break;
            }
        }
        cout << wh[i] << " ";
    }
    cout << endl;
    vector<bool> isused(vs , false);
    while(count != vs){
        int tempc1 = wh[vs - 1 - count] , tempc2 = wh[count];
        if(w[tempc1] + hw <= bw){
            hw += w[tempc1];
            ans += h[tempc1];
            count++;
            cout << "here1 " << tempc1 << endl;
        }
        else{
            bw += w[tempc2];
            ans += b[tempc2];
            count++;
            cout << "here2 " << tempc2 << endl;
        }
        cout << ans << " ans" << endl;
    }
    cout << ans;
}