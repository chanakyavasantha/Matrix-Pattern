#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
float Max(float a, float b){if( a>b) return a;else return b;}
float Min(float a, float b){if(a<b) return a;else return b;}
int max(int a, int b){if( a>b) return a;else return b;}
int min(int a, int b){if(a<b) return a;else return b;}
int GCD(int a,int b){
    if(a == 0){
        return b;
    }
    else{
        return GCD(b%a,a);
    }
}

void solve() {
    int n,m,c;
    cin>>n>>m>>c;
    int Teams[c];
    for(int i = 0;i<c;i++){
        cin>>Teams[i];
    }
    /*
    for(int i = 0;i<c;i++){
        cout<<Teams[i]<<" ";
    }
    cout<<endl;
     */
    int Matrix[n][m];
    vector<int> v;
    for(int i = 0;i<c;i++){
        for(int j = 0;j<Teams[i];j++){
            v.push_back(i+1);
        }
    }
    /*
    for(int x: v){
        cout<<x<< " ";
    }
    cout<<endl;
     */
    vector<pair<int,int>> Coordinates;
    int max = 0;
    int M = n-1;
    while(max <= M){
        if(max %2 == 0) {
            for (int i = 0; i < max; i++) {
                Coordinates.push_back(make_pair(max, i));
            }
            Coordinates.push_back(make_pair(max, max));
            for(int i = max-1;i >= 0;i--){
                Coordinates.push_back(make_pair(i,max));
            }
            max += 1;
        }
        else{
            for (int i = 0; i < max; i++) {
                Coordinates.push_back(make_pair(i, max));
            }
            Coordinates.push_back(make_pair(max, max));
            for(int i = max-1;i >= 0;i--){
                Coordinates.push_back(make_pair(max,i));
            }
            max += 1;
        }
    }
    /*
    for(auto it: Coordinates) {
        pair<int,int> p = it;
        cout<<p.first<<p.second<<" ";
    }
    cout<<endl;
     */
    int Count = 0;
    for(auto it: Coordinates){
        pair<int,int> p = it;
        Matrix[p.first][p.second] = v[Count];
        Count++;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin>>t;
    while (t--){
        solve();
    }
}
