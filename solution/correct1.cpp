#include <bits/stdc++.h>
#define ll long long
#define int long long
#define fi first
#define se second
#define mat vector<vector<ll>> 
using namespace std;
void db() {cout << '\n';}
template <typename T, typename ...U> void db(T a, U ...b) {cout << a << ' ', db(b...);}
#ifdef Cloud
#define file freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#else
#define file ios::sync_with_stdio(false); cin.tie(0)
#endif

signed main(){
    file;
    int n, k;
    cin >> n >> k;
    int a[n], pre[n]{}, ans = 0;
    vector<int> v[k];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        pre[i] = (i ? pre[i - 1] : 0) + a[i];
        pre[i] %= k;
        v[pre[i]].push_back(i);
        //cout << pre[i] << ' ';
        ans = max(ans, (int) v[pre[i]].size());
    }
    int x = (k - pre[n - 1]) % k;
    if (!x) return cout << ans << '\n', 0; 
    for (int i = 0; i < k; i++){
        int j = (i - x + k) % k;
        vector<pair<int, int>> tmp;
        for (int id : v[i]) tmp.push_back({id, 0});
        for (int id : v[j]) tmp.push_back({id, 1});
        sort(tmp.begin(), tmp.end());
        int m = tmp.size(), pre0[m]{}, pre1[m]{};
        for (int id = 0; id < m; id++){
            if (tmp[id].se == 0) pre0[id]++;
            else pre1[id]++;
            if (id){
                pre0[id] += pre0[id - 1];
                pre1[id] += pre1[id - 1];
            }

        }
        for (int id = 0; id < m; id++){
            ans = max(ans, pre0[id] + pre1[m - 1] - pre1[id]);
        }
    }

    cout << ans << '\n';
    /*
    8 7
    1 1 1 6 4 5 2 5
    */
}
