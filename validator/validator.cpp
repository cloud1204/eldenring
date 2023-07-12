#include "testlib.h"

#include <bits/stdc++.h>
using namespace std;

int MINN = 2;
int MAXN = 300'000;
int MAXA = 1e9;
int MAXK = 300'000;

int32_t main(int32_t argc, char* argv[]) {
    registerValidation(argc, argv);
    
    /// start input ///
    
    int n = inf.readInt(MINN, MAXN, "n"); inf.readEoln();
    int a[n];
    for (int i = 0; i < n; i++){
    	a[i] = inf.readInt(1, MAXA, "a_i");
    	if (i < n - 1) inf.readSpace();
    	
    }
    inf.readEoln();
    inf.readEof();
    
    return 0;
}
