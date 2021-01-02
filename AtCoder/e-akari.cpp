/*
We have a grid with H rows and W columns. Let square (i,j) be the square at the i-th row and j-th column in this 
grid.There are N bulbs and M blocks on this grid. The i-th bulb is at square (Ai,Bi), and the i-th block is at
square (Ci,Di). There is at most one object - a bulb or a block - at each square.Every bulb emits beams of light
in four directions - up, down, left, and right - that extend until reaching a square with a block, illuminating
 the squares on the way. A square with a bulb is also considered to be illuminated. Among the squares without a
 block, find the number of squares illuminated by the bulbs.
*/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb(a) push_back(a)
#define arr(a) new ll int[a]
#define INF 1000000000000000000
#define MOD 998244353
#define arr1(a) new arra[a]
#define str(a) new string[a]
#define all(arr, n, a)             \
    for (ll int i = 0; i < n; i++) \
    arr[i] = a

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int r, c, n, m, a, b;
    cin >> r >> c >> n >> m;
    ll int **arr = new ll int *[r + 1]();
    for (ll int i = 1; i <= r; i++)
        arr[i] = arr(c + 1)();
    for (ll int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
    }
    for (ll int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = -1;
    }
    for (ll int i = 1; i <= r; i++)
    {
        for (ll int j = 1; j <= c; j++)
        {
            if (arr[i][j] == 1)
            {
                for (ll int k = i - 1; k >= 1; k--)
                {
                    if (arr[k][j] == 1 || arr[k][j] == -1)
                        break;
                    arr[k][j] = 2;
                }
                for (ll int k = i + 1; k <= r; k++)
                {
                    if (arr[k][j] == 1 || arr[k][j] == -1)
                        break;
                    arr[k][j] = 2;
                }
                for (ll int k = j - 1; k >= 1; k--)
                {
                    if (arr[i][k] == 1 || arr[i][k] == -1)
                        break;
                    arr[i][k] = 2;
                }
                for (ll int k = j + 1; k <= c; k++)
                {
                    if (arr[i][k] == 1 || arr[i][k] == -1)
                        break;
                    arr[i][k] = 2;
                }
            }
        }
    }
    ll int count = 0;
    for (ll int i = 1; i <= r; i++)
    {
        for (ll int j = 1; j <= c; j++)
        {
            if (arr[i][j] == 1 || arr[i][j] == 2)
            {
                count++;
                //                cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout << count;
    return 0;
}

// #include<bits/stdc++.h>
// #define int long long
// using namespace std ;
// int a[1505][1505] ;
// bool vis[1505][1505] ;

// int n , m , l , r;
// int dx[] = {1 , 0 , -1 ,0} ;
// int dy[] = {0 ,1 ,0 , -1} ;
// inline bool check(int x ,  int y){
// 	if((x >= 1 &&  x<= n) && (y >=1 && y <= m)){
// 		return true ;
// 	}
// 	return false ;
// }

// signed main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL) ;

// 	cin >> n >> m>>l >> r ;
// 	queue<pair<int,int>> q ;
// 	for(int i = 0; i < l ; ++i){
// 		int u ,v ;
// 		cin >> u >> v;
// 		a[u][v] =1 ;
// 		q.push({u,v}) ;
// 		vis[u][v] =  true ;
// 	}
// 	for(int i = 0; i< r ; ++i){
// 		int u , v ;
// 		cin >> u >> v ;
// 		a[u][v] = 2 ;
// 	}
// 	int cnt = 0 ;
// 	while(q.size()){
// 		int x = q.front().first ;
// 		int y = q.front().second ;
// 		cnt++ ;
// 		q.pop() ;
// 		for(int i = x +1 ; i <= n ; ++i){
// 			if(a[i][y] ==2 || a[i][y] ==1)
// 				break ;
// 			if(!vis[i][y]){
// 				cnt++ ;
// 				vis[i][y] = true ;
// 			}
// 		}
// 		for(int i = x-1 ; i >=1 ; --i){
// 			if(a[i][y] ==2 || a[i][y] ==1)
// 				break ;
// 			if(!vis[i][y]){
// 				cnt++ ;
// 				vis[i][y] = true ;
// 			}
// 		}
// 		for(int i = y +1 ; i <= m ;++i){
// 			if(a[x][i] == 2 || a[x][i] ==1 )
// 				break ;
// 			if(vis[x][i] == 0){
// 				cnt++ ;
// 				vis[x][i] = true ;
// 			}
// 		}
// 		for(int i = y-1 ; i >=1  ; --i){
// 			if(a[x][i] == 2 || a[x][i] ==1 )
// 				break ;
// 			if(vis[x][i] == 0){
// 				cnt++ ;
// 				vis[x][i] = true ;
// 			}
// 		}
// 	}
// 	cout << cnt ;

// }