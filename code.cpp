#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    if(!(cin >> n >> m)) return 0;
    // Expected days to eat m apples when each day chooses uniformly from 1..k for current k
    // equals sum_{k=n-m+1}^{n} 1/k = H_n - H_{n-m}
    long long r = n - m;
    double ans = 0.0;
    for(long long k = r + 1; k <= n; ++k){
        ans += 1.0 / (double)k;
    }
    cout.setf(ios::fixed);
    cout << setprecision(2) << ans << "\n";
    return 0;
}

