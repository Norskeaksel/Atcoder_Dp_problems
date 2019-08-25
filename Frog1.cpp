#if defined _MSC_VER //if using Visual Studio
#include "std_lib_facilities.h" //include this local header file
#include <queue>
#else
#include<bits/stdc++.h> //include this non portable headerfile 
using namespace std; //and the standard namespace
#endif
#pragma warning(disable:4996)//necessary if we want to use freopen() 

using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vld = vector<ld>;
using pll = pair<ll, ll>;
using vpl = vector<pll>;

#define dx first
#define dy second
#define forx(n) for (ll x=1;x<=n;x++)
#define fory(n) for (ll y=1;y<=n;y++)
#define rall(v) (v).rbegin(),(v).rend()
#define all(v) (v).begin(),(v).end()
#define fork(n) for (ll k=0;k<n;k++)
#define forj(n) for (ll j=0;j<n;j++)
#define fori(n) for (ll i=0;i<n;i++)
#define in(t) ll t; cin >> t; while(t--)
#define fin(n) ll n; cin >> n; fori(n)
#define trav(v) for(auto &i:v)
#define pb(x) push_back(x)

template <class T>
void vb(vector<T>&v) {
	T a;
	cin >> a;
	v.pb(a);
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
#if defined _MSC_VER 
	freopen("Text.txt", "r", stdin);//read all input form this local file 
#endif
	vll cost,dist;
	in(t) {
		vb(cost);
		dist.pb(1e9);
	}
	cost.pb(1e9);
	cost.pb(1e9);
	dist.pb(1e9);
	dist.pb(1e9);
	dist[0] = 0;
	fori(cost.size()-2){
		dist[i + 1] = min(dist[i + 1], dist[i] + abs(cost[i + 1] - cost[i]));
		dist[i + 2] = min(dist[i + 2], dist[i] + abs(cost[i + 2] - cost[i]));
	}
	cout << dist[dist.size() - 3];
}