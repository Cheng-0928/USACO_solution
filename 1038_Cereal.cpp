#include <bits/stdc++.h>
#define int long long
#define f first
#define s second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;


void sol(){
    freopen("cereal.in", "r", stdin);
    freopen("cereal.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> cereal(m+1, 0);
    vector<pair<int,int>> cow(n);
    for(auto &it : cow) cin >> it.f >> it.s;

    vector<int> ans(n);
    int cnt = 0;

    for(int i = n-1; i>=0; i--){
        int now = cow[i].f;
        int v = i;
        while(1){
            if(!cereal[now]){
                cnt++;
                cereal[now] = v;
                break;
            }
            else if(cereal[now] < v) break;
            else{
                int t = cereal[now];
                cereal[now] = v;
                if(cow[t].s == now) break;
                now = cow[t].s;
                v = t;

            }
        }
        ans[i] = cnt;
    }

    for(int it : ans) cout << it << '\n';

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
