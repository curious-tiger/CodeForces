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
    ull n, temp, max=0, score=0, numberOfColors=0, numberOfUniqueMarbles=0;
    cin >> n;
    vi marbles, marbleCount(1001, 0), colorCount(1001, 0);
    REP(i, 1, n) {
        cin >> temp;
        marbles.push_back(temp);
        marbleCount[temp]++;
    }
    REP(i, 1, 1000) {
        if (marbleCount[i]>1) {
            numberOfColors++;
        }
        if (marbleCount[i]==1)
            numberOfUniqueMarbles++;

    }
    score = ((numberOfUniqueMarbles%2==0) ? numberOfUniqueMarbles : numberOfUniqueMarbles+1) + numberOfColors;
    cout << score << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //Precomputing (if needed)
    //Here


    ll tc = 1;
    cin >> tc;
    REP(t, 1, tc) solve();
    return 0;
}