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

#define MN 305 //check limits you incompetent ree
int gr[MN][MN];
int mx[MN][MN];
int bstUL[MN][MN];
int bstUR[MN][MN];
int bstDL[MN][MN];
int bstDR[MN][MN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    FOR(asdf, 1, t){
        int r, c;
        cin >> r >> c;
        FOR(i, 1, r){
            FOR(j, 1, c){
                cin >> gr[i][j];
                mx[i][j] = 0;
            }
        }

        memset(bstUL, -0x3f, sizeof bstUL);
        FOR(i, 1, r){
            FOR(j, 1, c){
                int heu = gr[i][j]+(i+j);
                bstUL[i][j] = max(max(bstUL[i-1][j], bstUL[i][j-1]), heu);
                mx[i][j] = max(mx[i][j], bstUL[i][j]-heu);
            }
        }

        memset(bstUL, -0x3f, sizeof bstUL);
        RFOR(i, r, 1){
            FOR(j, 1, c){
                int heu = gr[i][j]-(i-j);
                bstUL[i][j] = max(max(bstUL[i+1][j], bstUL[i][j-1]), heu);
                mx[i][j] = max(mx[i][j], bstUL[i][j]-heu);
            }
        }

        memset(bstUL, -0x3f, sizeof bstUL);
        FOR(i, 1, r){
            RFOR(j, c, 1){
                int heu = gr[i][j]+(i-j);
                bstUL[i][j] = max(max(bstUL[i-1][j], bstUL[i][j+1]), heu);
                mx[i][j] = max(mx[i][j], bstUL[i][j]-heu);
            }
        }

        memset(bstUL, -0x3f, sizeof bstUL);
        RFOR(i, r, 1){
            RFOR(j, c, 1){
                int heu = gr[i][j]-(i+j);
                bstUL[i][j] = max(max(bstUL[i+1][j], bstUL[i][j+1]), heu);
                mx[i][j] = max(mx[i][j], bstUL[i][j]-heu);
            }
        }
    
        ll sm = 0;
        FOR(i, 1, r){
            FOR(j, 1, c){
                sm += mx[i][j];
            }
        }

        cout << "Case #" << asdf << ": ";
        cout << sm << "\n";
    }

    return 0;
}
