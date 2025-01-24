#include <bits/stdc++.h>
    
using namespace std;
    
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;
    
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (ll i=a; i<=b; i++)
#define REPrev(i, a, b) for (ll i=a; i>=b; i--)
#define sq(a) (a)*(a)
#define sqrt(a) pow((a), 0.5)
#define roundup(a) ((ll)(a) + 1)
#define rounddown(a) (ll)(a)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sortasc(a) sort(a.begin(), a.end())
#define sortdesc(a) sort(a.rbegin(), a.rend())
#define fibo(a) round((pow(1+sqrt(5), (ld)a)-pow(1-sqrt(5), (ld)a))/(pow(2, (ld)a)*sqrt(5)))
    
#define MAXN 9223372036854775807
    
//Necessary Global Variables (especially if precomputation is needed)
//Here

//Functions Used
//Here
    
void solve()
{
    //Actual Solution
    ll n, m;
    bool solve_found = false;
    cin >> n >> m;
    char grid[n][m];
    REP(i, 0, n-1)
    {
        REP(j, 0, m-1)
        {
            cin >> grid[i][j];
        }
    }
    if (grid[0][0]==grid[n-1][m-1] || grid[0][m-1]==grid[n-1][0])
    {
        solve_found = true;
    }
    else
    {
        if (n==1 || m==1)
            solve_found = false;
        else
        {
            if (grid[0][0]==grid[0][m-1])
            {
                REP(i, 0, m-1)
                {
                    if (grid[n-1][i]==grid[0][0])
                    {
                        solve_found = true;
                        break;
                    }
                }
            }
            if (solve_found==false && grid[0][0]==grid[n-1][0])
            {
                REP(i, 0, n-1)
                {
                    if (grid[i][m-1]==grid[0][0])
                    {
                        solve_found = true;
                        break;
                    }
                }
            }
            if (solve_found==false && grid[n-1][0]==grid[n-1][m-1])
            {
                REP(i, 0, m-1)
                {
                    if (grid[0][i]==grid[n-1][0])
                    {
                        solve_found = true;
                        break;
                    }
                }
            }
            if (solve_found==false && grid[0][m-1]==grid[n-1][m-1])
            {
                REP(i, 0, n-1)
                {
                    if (grid[i][0]==grid[n-1][m-1])
                    {
                        solve_found = true;
                        break;
                    }
                }
            }
        }
    }
    if (solve_found==true)
        cout << "YES\n";
    else
        cout << "NO\n";
}
    
int32_t main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    
    //Precomputing (if needed)
    //Here
    
    
    ll tc = 1;
    cin >> tc;
    REP(t, 1, tc) solve();
    return 0;
}