#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb(x) push_back(x)
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define mod(x) ((x) >= 0) ? (x) : (-x)
#define INF LONG_LONG_MAX
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)
#define FILE                      \
  freopen("inp.txt", "r", stdin); \
  freopen("out.txt", "w", stdout)

int solve()
{
}

int32_t main()
{
  FAST;
  int t;
  cin >> t;
  int i = 0;
  while (t--)
    cout << "Case #" << (++i) << ": " << solve() << "\n";
  return 0;
}
