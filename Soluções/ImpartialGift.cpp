#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll n, m, d;

    cin >> n >> m >> d;

    vector<ll> va(n), vb(m);

    for (int i = 0; i < n; i++) cin >> va[i];
    for (int i = 0; i < m; i++) cin >> vb[i];

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());

    ll i = n - 1, j = m - 1;

    while (i >= 0 and j >= 0){
        if (abs(va[i] - vb[j]) <= d){
            cout << va[i] + vb[j] << endl;
            return 0;
        }
        if (va[i] >= vb[j]) i--;
        else j--;
    }

    cout << "-1";
    return 0;
}