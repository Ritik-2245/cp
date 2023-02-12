/*Normalized panda*/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define v(x) vector<x>
#define vvi(x) vector<vector<x>>
#define vp(x, y) vector<pair<x, y>>
#define lb lower_bound
#define ub upper_bound
#define rb rbegin
#define re rend
#define u_m unordered_map
#define ff first
#define ss second
#define loop(i, l, r) for (int i = l; i < r; i++)
#define rloop(i, r, l) for (int i = r; i > l; i--)
#define bn begin
#define en end
#define int long long
#define lol unsigned long long
#define setz(x) fixed << setprecision(x)
#define print(s) cout << s << endl
#define all(x) x.begin(),x.end()
#define ps(s) cout << s << ' '
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define sz(x) x.size()
#define TC 0
const int mod = 1e9 + 7;
int cint();
unsigned long long bint();
double cdouble();
char schar();
string gstr();
string cstr();
int _exp(int a,int b,int m);
#define N 2000050

void solve()
{
  

}


int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if(TC)
    for(int tc=cint();tc--;)solve();
    else
    solve();

    return 0;
}

int cint()
{
    int k;
    cin >> k;
    return k;
}

double cdouble()
{
    double k;
    cin >> k;
    return k;
}

string gstr()
{
    string s;

    getline(cin, s);
    return s;
}

string cstr()
{
    string s;
    cin >> s;
    return s;
}

char schar()
{
    char c;
    cin >> c;
    return c;
}

unsigned long long bint()
{
    unsigned long long k;
    cin >> k;
    return k;
}

int _exp(int a,int b,int m){
  int ans=1;

  while(b){
    if(b&1)
        ans=(ans*a)%m;

    a=(a*a)%m;

    b>>=1;
  }

  return ans;

}
