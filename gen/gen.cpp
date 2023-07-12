#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int MINN = 2;
int MAXN = 300000;
int MAXK = 300000;
int MAXA = 1e9;
int32_t main(int32_t argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    if (has_opt("minn")) MINN = opt<int>("minn");
    if (has_opt("maxn")) MAXN = opt<int>("maxn");
    
    if (has_opt("smallk") and opt<int>("smallk") == 1) MAXK = 1000;
    
    int n = rnd.next(MINN, MAXN);
    int k = rnd.next(1, MAXK);
    string type = opt("type");
    int a[n];
    /// types ///
    long long pre[n]{};
    int x = rnd.next(1, k), y = rnd.next(1, k);
    if (type == "random") {
        for (int i = 0; i < n; i++){
            a[i] = rnd.next(1, MAXA);
        }
    }
    else if (type == "big_ans"){
    	for (int i = 0; i < n - 1; i++){
    	    if (rnd.next(0, 1)){
    	    	pre[i] = x;
    	    }
    	    else pre[i] = y;
    	    
    	    a[i] = pre[i] - (i ? pre[i - 1] : 0);
    	    if (a[i] <= 0) a[i] += k;
    	}
    	pre[n - 1] = k - (x - y);
    	a[n - 1] = (pre[n - 1] - pre[n - 2]) % k;
    	if (a[n - 1] <= 0) a[n - 1] += k;
    }
    else if (type == "already_multiple"){
    	for (int i = 0; i < n - 1; i++){
    	    a[i] = rnd.next(1, k);
    	    pre[i] = (i ? pre[i - 1] : 0) + a[i];
    	    pre[i] %= k;
    	}
    	a[n - 1] = k - pre[n - 2];
    	if (a[n - 1] <= 0) a[n - 1] += k;
    	if (a[n - 1] > k) a[n - 1] -= k;
    }
    /// prints ///
    
    cout << n << ' ' << k << '\n';
    for (int i = 0; i < n; i++){
    	cout << a[i] << (i == n - 1 ? '\n' : ' ');
    }
    
    return 0;
}
