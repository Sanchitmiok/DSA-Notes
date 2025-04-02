```cpp

#include <bits/stdc++.h>
using namespace std;

// **Fast I/O**
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// **Type Aliases**
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

// **Constants**
const int MOD = 1e9 + 7;
const int INF = INT_MAX;

// **Macros**
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define sz(v) ((int)(v).size())


ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll mod_exp(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main() {
    FAST_IO;

    int t; 
    cin >> t;

    while (t--) {
   
    }

    return 0;
}

```