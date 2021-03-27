#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
#define INF 0x3f3f3f3f
#define MOD 1000000007LL
#define EPS 0.000000000001
#define f first
#define s second
#define pb push_back
#define mp make_pair

#define FOR(i, a, b) for (int i=(a); i<=(signed)(b); i++)
#define F0R(i, a) for (int i=0; i<(signed)(a); i++)
#define RFOR(i, a, b) for (int i=(a); i >= b; i--)

#define MN 505 //check limits you incompetent ree
int n, a[MN][MN], b[MN][MN], r[MN], c[MN];
vector<pair<int, pii> > ree;

int dsu[MN*2];
int fd(int x){
    if(dsu[x] < 0) return x;
    return dsu[x] = fd(dsu[x]);
}
bool jn(int x, int y){
    x = fd(x); y = fd(y);
    if(x == y) return false;

    if(dsu[x] < dsu[y]) swap(x, y);
    dsu[y] += dsu[x];
    dsu[x] = y;
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    FOR(asdf, 1, t){
        cin >> n;
        F0R(i, n){
            F0R(j, n){
                cin >> a[i][j];
            }
        }
        ll tot = 0;
        F0R(i, n){
            F0R(j, n){
                cin >> b[i][j];
                if(a[i][j] == -1){
                    tot += b[i][j];
                    ree.pb({b[i][j], {i,j+n}});
                }
            }
        }
        F0R(i, n) cin >> r[i];
        F0R(j, n) cin >> c[j];
        sort(ree.begin(), ree.end());
        reverse(ree.begin(), ree.end());

        F0R(i, 2*n) dsu[i] = -1;
        for(auto u : ree){
            if(jn(u.s.f, u.s.s)){
                tot -= u.f;
            }
        }

        cout << "Case #" << asdf << ": ";
        cout << tot << "\n";
        ree.clear();
    }

    return 0;
}
