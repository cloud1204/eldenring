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
    
    if (has_opt("smallk")) MAXK = 1000;
    
    int n = rnd.next(MINN, MAXN);
    int k = rnd.next(1, MAXK);
    string type = opt("type");
    int a[n];
    /// types ///
    
    if (type == "random") {
        for (int i = 0; i < n; i++){
            a[i] = rnd.next(1, MAXA);
        }
    }
    
    /// prints ///
    
    cout << n << ' ' << k << '\n';
    for (int i = 0; i < n; i++){
    	cout << a[i] << (i == n - 1 ? '\n' : ' ');
    }
    
    return 0;
}
